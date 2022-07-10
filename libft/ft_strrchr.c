/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:17:47 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/08 20:35:08 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				count;
	int				count2;
	unsigned char	ch;

	count = 0;
	count2 = -1;
	ch = c;
	while (s[count] != '\0')
	{
		if (s[count] == ch)
			count2 = count;
		count++;
	}
	if (s[count] == ch)
	{
		return ((char *)(&s[count]));
	}
	else if (count2 < 0)
	{
		return (0);
	}
	else
	{
		return ((char *)(&s[count2]));
	}
}
