/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:36:38 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/07 20:38:20 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resultadodivisao;
	int	resultadoresto;

	resultadodivisao = *a / *b;
	resultadoresto = *a % *b;
	*a = resultadodivisao;
	*b = resultadoresto;
}
