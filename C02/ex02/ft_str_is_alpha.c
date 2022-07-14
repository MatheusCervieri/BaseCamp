/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:11:37 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/13 20:39:01 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	isalpha;

	isalpha = 1;
	while (*str != '\0' && isalpha == 1)
	{
		if (*str >= 65 && *str <= 122)
		{
		}
		else
		{
			isalpha = isalpha - 1;
		}
		str++;
	}
	return (isalpha);
}
