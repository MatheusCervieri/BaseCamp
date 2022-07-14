/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 01:49:09 by mvieira-          #+#    #+#             */
/*   Updated: 2022/05/21 01:49:46 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
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
				ft_putchar(argv[i][c]);
				c++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
