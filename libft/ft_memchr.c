/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:36:24 by jeurico-          #+#    #+#             */
/*   Updated: 2022/04/20 04:09:19 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pntr;
	unsigned char	chr;
	size_t			count;

	count = 0;
	pntr = (unsigned char *) s;
	chr = (unsigned char) c;
	while (count < n)
	{
		if (pntr[count] == chr)
		{
			return (&pntr[count]);
		}
		count ++;
	}
	return (0);
}
