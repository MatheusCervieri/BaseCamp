/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:33:14 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/18 00:57:05 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prim(int nb);

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !(ft_is_prim(nb)))
	{
		nb++;
	}
	return (nb);
}

int	ft_is_prim(int nb)
{
	int	y;

	y = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (y <= nb / 2)
	{
		if (nb % y == 0)
		{
			return (0);
		}
		y++;
	}
	return (1);
}
