/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:13:13 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/07 23:20:33 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	stringsize;

	stringsize = 0;
	while (*str != '\0')
	{
		stringsize++;
		str++;
	}
	return (stringsize);
}
