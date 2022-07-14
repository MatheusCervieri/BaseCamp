/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:42:25 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/13 20:44:23 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	islowercase;

	islowercase = 1;
	while (*str != '\0' && islowercase == 1)
	{
		if (*str >= 97 && *str <= 122)
		{
		}
		else
		{
			islowercase = islowercase - 1;
		}
		str++;
	}
	return (islowercase);
}
