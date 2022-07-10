/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:55:41 by jeurico-          #+#    #+#             */
/*   Updated: 2022/04/22 04:02:56 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			count;
	size_t			value;
	unsigned char	*pntr;
	unsigned char	*pntr2;

	count = 0;
	value = 0;
	pntr = (unsigned char *)s1;
	pntr2 = (unsigned char *)s2;
	while (count < n && (pntr[count] || pntr2[count]))
	{
		if (pntr[count] != pntr2[count])
		{
			value = (pntr[count] - pntr2[count]);
			return (value);
		}
		count++;
	}
	return (value);
}
