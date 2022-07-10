/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:44:08 by jeurico-          #+#    #+#             */
/*   Updated: 2022/04/18 17:29:32 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	count2;

	count = 0;
	count2 = 0;
	if (size > 0)
	{
		while (dst[count2] != '\0' && count2 < size)
			count2++;
		while (src[count] && count2 < (size - 1))
		{
			dst[count2] = src[count];
			count2++;
			count++;
		}
		if (count2 < size)
			dst[count2] = '\0';
	}
	while (src[count])
	{
		count++;
		count2++;
	}
	return (count2);
}
