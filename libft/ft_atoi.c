/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:01:14 by jeurico-          #+#    #+#             */
/*   Updated: 2022/04/18 18:05:42 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == '	')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(const char *nptr)
{
	int	c;
	int	value;
	int	op;

	c = 0;
	value = 0;
	op = 0;
	while (ft_space(nptr[c]))
		c++;
	if ((nptr[c] == '-') || (nptr[c] == '+'))
	{
		if (nptr[c] == '-')
		{
			op = 1;
		}
		c++;
	}
	while (ft_isdigit(nptr[c]))
	{
		value = (value * 10) + nptr[c] - 48;
		c++;
	}
	if (op == 1)
		value = (value) * -1;
	return (value);
}
