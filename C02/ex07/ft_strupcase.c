/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:20:14 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/13 22:30:47 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (ft_char_is_lowercase(*str) == 1)
		{
		*str = *str - 32;
		}
	i++;
	str = str + 1;
	}
	while (i > 0)
	{
		str--;
		i--;
	}
	return (str);
}

int	ft_char_is_lowercase(char c)
{
	int	islowercase;

	islowercase = 1;
	if (islowercase == 1)
	{
		if (c >= 97 && c <= 122)
		{
		}
		else
		{
		islowercase = 0;
		}
	}
	return (islowercase);
}
