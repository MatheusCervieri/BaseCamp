/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:40:12 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/19 01:53:04 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int				i;
	unsigned int	c;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{	
			c = 0;
			while (argv[i][c] != '\0')
			{
				write(1, &argv[i][c], 1);
				c++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
