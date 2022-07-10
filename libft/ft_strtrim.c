/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:53:46 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/08 20:46:39 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search_first(char const *srch, char const *str)
{
	int		count;
	int		count2;
	size_t	first_pos;

	count = 0;
	count2 = 0;
	first_pos = 0;
	while (srch[count])
	{
		if (srch[count] == str[count2])
		{
			count = 0;
			count2++;
			first_pos = count2;
		}
		else
			count++;
	}
	return (first_pos);
}

static int	ft_search_last(char const *srch, char const *str, size_t first_pos)
{
	int		count;
	size_t	last_pos;

	count = 0;
	last_pos = ft_strlen(str);
	while (srch[count] && first_pos < last_pos)
	{
		if (srch[count] == str[last_pos - 1])
		{
			count = 0;
			last_pos--;
		}
		else
			count++;
	}
	return (last_pos);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string_new;
	size_t	first_pos;
	size_t	last_pos;
	int		count;

	first_pos = ft_search_first(set, s1);
	last_pos = ft_search_last(set, s1, first_pos);
	string_new = (char *) malloc(((last_pos + 1) - first_pos) * sizeof(char));
	if (!string_new)
		return (0);
	count = 0;
	while (first_pos < last_pos)
	{
		string_new[count] = s1[first_pos];
		first_pos ++;
		count++;
	}
	string_new[count] = '\0';
	return (string_new);
}
