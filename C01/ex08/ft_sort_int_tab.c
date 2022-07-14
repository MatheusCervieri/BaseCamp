/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:23:38 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/12 17:30:19 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	y;
	int	j;

	aux = 0;
	y = 0;
	while (y < size)
	{
		j = y + 1;
		while (j < size)
		{
			if (tab[y] > tab[j])
			{
			aux = tab[y];
			tab[y] = tab[j];
			tab[j] = aux;
			}
			j++;
		}
		y++;
	}
}
