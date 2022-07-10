/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:12:02 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/08 20:52:05 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_len(unsigned int start, size_t len, size_t string_len)
{
	if (len == string_len)
		len = 1;
	if (len > string_len)
		len = string_len;
	if (start > string_len)
		len = 0;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	count;
	size_t	count2;

	count = 0;
	count2 = 0;
	if (!s)
		return (0);
	len = check_len(start, len, ft_strlen(s));
	new_string = (char *)malloc((len + 1) * sizeof(char));
	if (!new_string)
		return (0);
	while (s[count])
	{
		if (count >= start && count2 < len)
		{
			new_string[count2] = s[count];
			count2++;
		}
		count++;
	}
	new_string[count2] = '\0';
	return (new_string);
}
