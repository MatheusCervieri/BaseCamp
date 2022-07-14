/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:56:48 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/14 19:57:34 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	z;

	i = 0;
	while (dest[i] != '\0')
	{
	i = i + 1;
	}
	z = 0;
	while (z < nb && src[z] != '\0')
	{	
		dest[i] = src[z];
		i++;
		z++;
	}
	dest[i] = '\0';
	return (dest);
}
