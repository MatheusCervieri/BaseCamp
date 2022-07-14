/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:40:32 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/06 22:49:34 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	charvalue;

	if (n < 0)
	{
		charvalue = 'N';
		write (1, &charvalue, 1);
	}
	else
	{
		charvalue = 'P';
		write (1, &charvalue, 1);
	}
}
