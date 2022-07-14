/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:37:37 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/17 23:08:42 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}	
	result = result * ft_recursive_factorial(nb - 1);
	return (result);
}
