/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:38:15 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/06 20:45:37 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	firtsletter;

	firtsletter = 'a';
	while (firtsletter <= 'z')
	{
		write(1, &firtsletter, 1);
		firtsletter++;
	}
}
