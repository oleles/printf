/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:00:15 by jeurico-          #+#    #+#             */
/*   Updated: 2022/07/07 16:11:26 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_addstr(char const *s, unsigned int first, unsigned int last)
{
	int		count;
	char	*pntr_word;

	count = 0;
	pntr_word = (char *) malloc(((last - first) + 1) * sizeof(char));
	if (!pntr_word)
		return (0);
	while (first < last)
	{
		pntr_word[count] = s[first];
		first++;
		count++;
	}
	pntr_word[count] = '\0';
	return (pntr_word);
}

static int	ft_countstr(char const *s, char c)
{
	int	num_rows;
	int	count;
	int	i;

	num_rows = 0;
	count = 0;
	i = 0;
	while (s[count])
	{
		if (s[count] != c && i == 0)
		{
			num_rows ++;
			i = 1;
		}
		else if (s[count] == c)
		{
			i = 0;
		}
		count++;
	}
	return (num_rows);
}

char	**ft_split(char const *s, char c)
{
	int				i;
	unsigned int	pos;
	unsigned int	count;
	char			**p_row;

	p_row = (char **)malloc((ft_countstr(s, c) + 1) * (sizeof(char *)));
	if (!s || !p_row)
		return (0);
	count = 0;
	i = -1;
	pos = 0;
	while (count <= ft_strlen(s))
	{
		if (s[count] != c && i == -1)
			i = count;
		else if ((s[count] == c || count == ft_strlen(s)) && i >= 0)
		{
			p_row[pos++] = ft_addstr(s, i, count);
			i = -1;
		}
		count++;
	}
	p_row[pos] = NULL;
	return (p_row);
}
