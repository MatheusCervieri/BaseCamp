/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:35:34 by mvieira-          #+#    #+#             */
/*   Updated: 2022/05/23 22:03:48 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb <= 0)
		return ((nb < 0) * 0 + (nb == 0) * 1);
	while (--factorial > 0)
		nb = nb * factorial;
	return (nb);
}
