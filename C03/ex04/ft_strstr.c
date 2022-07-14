/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:07:15 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/16 14:08:57 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		z = 0;
		while (str[i + z] == to_find[z] && str[i + z] != '\0')
		{
			if (to_find[z + 1] == '\0')
				return (&str[i]);
			z++;
		}
		i++;
	}
	return (0);
}
