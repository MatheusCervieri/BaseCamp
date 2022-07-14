/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:26:31 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/23 01:04:12 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char a);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_put_char('-');
		ft_put_char('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_put_char('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_put_char(nb + '0');
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_put_char(char a)
{
	write(1, &a, 1);
}
