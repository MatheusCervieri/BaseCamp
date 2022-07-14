/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:48:51 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/06 21:40:23 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	firstletter;

	firstletter = 'z';
	while (firstletter >= 'a')
	{
		write (1, &firstletter, 1);
		firstletter--;
	}
}
