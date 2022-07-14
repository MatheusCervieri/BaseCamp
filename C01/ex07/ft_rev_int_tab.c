/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:58:05 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/12 18:44:51 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	y;
	int	support;

	y = 0;
	while (y != size / 2)
	{
		support = tab[y];
		tab[y] = tab[size - (y + 1)];
		tab[size - (y + 1)] = support;
		y++;
	}
}
