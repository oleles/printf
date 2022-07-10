/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:07:26 by jeurico-          #+#    #+#             */
/*   Updated: 2022/04/20 04:08:49 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*pntr;

	count = 0;
	pntr = s;
	while (count < n)
	{
		pntr[count] = '\0';
		count ++;
	}
}
