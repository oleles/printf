/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 06:02:42 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/08 20:29:41 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string_new;
	int		string_len;
	int		count;
	int		count2;

	string_len = ft_strlen(s1) + ft_strlen(s2);
	string_new = (char *) malloc((string_len + 1) * sizeof(char));
	if (!string_new)
		return (0);
	count = 0;
	count2 = 0;
	while (s1[count] != '\0')
	{
		string_new[count] = s1[count];
		count++;
	}
	while (s2[count2] != '\0')
	{
		string_new[count] = s2[count2];
		count++;
		count2++;
	}
	string_new[count] = '\0';
	return (string_new);
}
