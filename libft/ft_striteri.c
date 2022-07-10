/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:14:01 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/06 01:40:43 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	count;
	unsigned int	str_len;

	if (s)
	{
		count = 0;
		str_len = ft_strlen(s);
		while (count < str_len)
		{
			(*f)(count, s);
			count++;
			s++;
		}
	}
}
