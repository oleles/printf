/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 00:26:55 by jeurico-          #+#    #+#             */
/*   Updated: 2022/04/12 20:39:55 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*pntr_dest;
	char	*pntr_src;

	count = 0;
	pntr_dest = dest;
	pntr_src = (char *)src;
	while (count < n)
	{
		pntr_dest[count] = pntr_src[count];
		count ++;
	}
	return (pntr_dest);
}
