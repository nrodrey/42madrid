/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:55:48 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/24 12:56:43 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i += 1;
	}
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z' && ((j == 0)
		|| (str[j - 1] >= 0 && str[j - 1] <= 47)
		|| (str[j - 1] >= 58 && str[j - 1] <= 64)
		|| (str[j - 1] >= 91 && str[j - 1] <= 96)
		|| (str[j - 1] >= 123)))
		{
			str[j] -= 32;
		}
		j += 1;
	}
	return (str);
}
