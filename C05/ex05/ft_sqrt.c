/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_sqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:26:22 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/19 13:52:37 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	z;

	z = 1;
	if (nb > 0)
	{
		while (z * z <= nb)
		{
			if (z * z == nb)
			{
				return (z);
			}
			else if (z >= 46341)
			{
				return (0);
			}
			z++;
		}
	}
	return (0);
}