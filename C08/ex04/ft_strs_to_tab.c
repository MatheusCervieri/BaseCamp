/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:45:35 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/21 16:57:50 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void				put_struct_elements(struct s_stock_str *strum, char *str);
char				*ft_strdup(char *str);
unsigned int		ft_strlen(char *str);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*structreturn;
	int					i;

	structreturn = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (structreturn == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		put_struct_elements(&structreturn[i], av[i]);
		i++;
	}
	put_struct_elements(&structreturn[ac], NULL);
	return (structreturn);
}

void	put_struct_elements(struct s_stock_str *strum, char *str)
{
	if (str == NULL)
	{
		strum->size = 0;
		strum->str = NULL;
		strum->copy = NULL;
	}
	else
	{
		(*strum).size = ft_strlen(str);
		(*strum).str = str;
		(*strum).copy = ft_strdup(str);
	}
}

char	*ft_strdup(char *str)
{
	char			*returnstring;
	unsigned int	i;

	returnstring = malloc(ft_strlen(str) * sizeof(char) + 1);
	if (returnstring == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		returnstring[i] = str[i];
		i++;
	}
	returnstring[i] = '\0';
	return (returnstring);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}
