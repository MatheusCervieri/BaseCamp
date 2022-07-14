/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:40:09 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/13 20:41:33 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	isnumeric;

	isnumeric = 1;
	while (*str != '\0' && isnumeric == 1)
	{
		if (*str >= '0' && *str <= '9')
		{
		}
		else
		{
			isnumeric = isnumeric - 1;
		}
		str++;
	}
	return (isnumeric);
}
