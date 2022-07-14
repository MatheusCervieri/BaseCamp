/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:52:27 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/23 00:40:22 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_write_int(int num, int max)
{
	char	char_u;
	char	char_d;

	if (num <= 9)
	{
		char_u = num + 48;
		ft_putchar2('0', char_u);
	}
	else if (num <= max)
	{
		char_u = (num % 10) + 48;
		char_d = (num / 10) + 48;
		ft_putchar2(char_d, char_u);
	}
}

void	ft_show_result(int fir, int sec)
{
	ft_write_int(fir, 98);
	write(1, " ", 1);
	ft_write_int(sec, 99);
	if (fir != 98 || sec != 99)
		ft_putchar2(',', ' ');
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_show_result(f, s);
			s++;
		}
		f++;
	}
}
