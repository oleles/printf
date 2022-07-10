/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:48:38 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/08 22:08:06 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*pntr;

	pntr = malloc (nmemb * size);
	if (!pntr)
		return (0);
	ft_bzero (pntr, nmemb * size);
	return (pntr);
}
