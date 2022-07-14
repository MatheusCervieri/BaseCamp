/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:39:24 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/14 17:12:20 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isletter(char c);
int	ft_is_uppercase_letter(char c);

char	*ft_strcapitalize(char *str)
{
	int	thenextletterisuppercase;
	int	i;

	thenextletterisuppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isletter(str[i]) == 1 && thenextletterisuppercase == 1)
		{
			if (ft_is_uppercase_letter(str[i]) == 0)
			{
				str[i] = str[i] - 32;
			}
		thenextletterisuppercase = 0;
		}
		else if (ft_isletter(str[i]) && thenextletterisuppercase == 0)
		{
			if (ft_is_uppercase_letter(str[i]) == 1)
				str[i] = str[i] + 32;
		}
		else
		thenextletterisuppercase = 1;
	i++;
	}
	return (str);
}

int	ft_isletter(char c)
{
	if (c >= 65 && c <= 121)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_uppercase_letter(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
