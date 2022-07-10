/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:19:10 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/08 21:02:25 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pntr;
	char	*pntr2;
	size_t	size;

	pntr = (char *)s;
	size = ft_strlen(pntr) + 1;
	pntr2 = malloc(size);
	if (!pntr2)
		return (0);
	ft_memcpy(pntr2, pntr, size);
	return (pntr2);
}
