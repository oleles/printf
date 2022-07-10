/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:58:28 by jeurico-          #+#    #+#             */
/*   Updated: 2022/04/18 02:42:32 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (!src)
		return (0);
	if (size > 0)
	{
		while (src[count] != '\0' && (count < (size - 1)))
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	if (size == 0)
	{
		dst[ft_strlen(dst)] = '\0';
	}
	while (src[count])
	{
		count++;
	}
	return (count);
}
