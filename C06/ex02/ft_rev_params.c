/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:07:11 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/19 14:42:09 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			c = 0;
			while (argv[i][c] != '\0')
			{
				write(1, &argv[i][c], 1);
				c++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
