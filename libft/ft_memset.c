/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:12:08 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/09 17:24:04 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;
	char	*pntr;

	count = 0;
	pntr = s;
	while (count < n)
	{
		pntr[count] = c;
		count ++;
	}
	return (pntr);
}
