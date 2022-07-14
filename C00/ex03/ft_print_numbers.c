/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:41:37 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/06 22:06:12 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		firstnumber;
	char	charvalue;

	firstnumber = 0;
	while (firstnumber <= 9)
	{
		charvalue = firstnumber + '0';
		write (1, &charvalue, 1);
		firstnumber++;
		charvalue = '0';
	}
}
