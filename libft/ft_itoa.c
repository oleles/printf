/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:41:43 by jeurico-          #+#    #+#             */
/*   Updated: 2022/07/04 21:20:13 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n, int neg)
{
	int	int_len;

	if (neg == 1)
		int_len = 1;
	else
		int_len = 0;
	if (n == 0)
	{
		int_len ++;
	}
	else
	{
		while (n)
		{
			n = n / 10;
			int_len ++;
		}
	}
	return (int_len);
}

static char	*ft_addnum(int int_len, int neg, size_t num)
{
	char	*pntr;
	size_t	val;

	pntr = (char *) malloc ((int_len + 1) * sizeof(char));
	if (!pntr)
	{
		return (0);
	}
	pntr[int_len] = '\0';
	val = 0;
	while (int_len > 0)
	{
		int_len--;
		if (neg == 1 && int_len == 0)
			pntr[int_len] = '-';
		else
		{
			val = (num % 10) + 48;
			pntr[int_len] = val;
			num = num / 10;
		}
	}
	return (pntr);
}

char	*ft_itoa(int n)
{
	int		int_len;
	int		int_neg;
	size_t	num;

	num = n;
	int_neg = 0;
	if (n < 0)
	{
		int_neg = 1;
		num = (num) * -1;
	}
	int_len = ft_intlen(num, int_neg);
	return (ft_addnum(int_len, int_neg, num));
}
