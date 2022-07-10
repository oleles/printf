/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:42:15 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/08 20:29:15 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			count;
	unsigned char	ch;

	count = 0;
	ch = c;
	while (s[count])
	{
		if (s[count] == ch)
		{
			return ((char *)(&s[count]));
		}
		count++;
	}
	if (s[count] == ch)
	{
		return ((char *)(&s[count]));
	}
	return (0);
}
