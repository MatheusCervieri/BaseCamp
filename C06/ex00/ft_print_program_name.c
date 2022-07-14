/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:34:18 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/18 23:39:51 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
