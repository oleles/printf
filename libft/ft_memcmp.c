/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:20:04 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/06 01:10:37 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				count;
	unsigned const char	*pntr1;
	unsigned const char	*pntr2;
	int					value;

	count = 0;
	value = 0;
	pntr1 = s1;
	pntr2 = s2;
	while (count < n)
	{
		if (pntr1[count] != pntr2[count])
		{
			value = (pntr1[count] - pntr2[count]);
			return (value);
		}
		count++;
	}
	return (value);
}
