/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 02:11:44 by mvieira-          #+#    #+#             */
/*   Updated: 2022/05/21 02:14:10 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_vector_return_one(char *tab, int (*f)(char*))
{
	if (f(tab) == 1)
	{
		return (1);
	}
	return (0);
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*tab)
	{
		if (ft_vector_return_one(tab[i], f) == 1)
		{
			count++;
		}
		tab++;
	}
	return (count);
}
