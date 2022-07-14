/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:30:23 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/13 21:31:14 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_upercase(char c);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (ft_char_is_upercase(*str) == 1)
		{
			*str = *str + 32;
		}
		else
		{
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

int	ft_char_is_upercase(char c)
{
	int	isupercase;

	isupercase = 1;
	if (isupercase == 1)
	{
		if (c >= 65 && c <= 90)
		{
		}
		else
		{
		isupercase = 0;
		}
	}
	return (isupercase);
}
