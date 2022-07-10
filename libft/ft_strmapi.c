/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 03:06:08 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/06 01:48:08 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	char			*new_str;

	if (!s)
		return (0);
	count = 0;
	new_str = (char *) malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (0);
	while (count < ft_strlen(s))
	{
		new_str[count] = (*f)(count, s[count]);
		count++;
	}
	new_str[count] = '\0';
	return (new_str);
}
