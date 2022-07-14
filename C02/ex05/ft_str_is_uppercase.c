/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:52:43 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/13 20:53:38 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	is_uppercase = 1;
	while (*str != '\0' && is_uppercase == 1)
	{
		if (*str >= 65 && *str <= 90)
		{
		}
		else
		{
			is_uppercase = is_uppercase - 1;
		}
		str++;
	}
	return (is_uppercase);
}
