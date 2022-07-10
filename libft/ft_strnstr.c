/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:34:05 by jeurico-          #+#    #+#             */
/*   Updated: 2022/04/19 17:13:50 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c;
	int		val;

	if (little[0] != '\0' && big[0] != '\0' && len > 0)
	{
		c = 0;
		while (c < len)
		{
			if (big[c] == little[0] && ft_strlen(little) <= (len - c))
			{
				val = ft_strncmp((char *)(&big[c]), little, ft_strlen(little));
				if (val == 0)
				{
					return ((char *)(&big[c]));
				}
			}
			c++;
		}
	}
	else if (little[0] == '\0')
	{
		return ((char *)(big));
	}
	return (0);
}
