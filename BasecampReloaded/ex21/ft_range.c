/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 02:01:08 by mvieira-          #+#    #+#             */
/*   Updated: 2022/05/21 02:05:11 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*returnarray;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	else
	{
		size = max - min;
		returnarray = malloc(size * sizeof(int));
		if (!returnarray)
			return (0);
		i = 0;
		while (min < max)
		{
			returnarray[i] = min;
			min++;
			i++;
		}
		return (returnarray);
	}
}
