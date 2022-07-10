/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:03:00 by jeurico-          #+#    #+#             */
/*   Updated: 2022/07/10 23:42:56 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_intlen(unsigned int n)
{
	int	int_len;

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

static char	*ft_addnum(int int_len, size_t num)
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
		val = (num % 10) + 48;
		pntr[int_len] = val;
		num = num / 10;
	}
	return (pntr);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	int		int_len;
	size_t	num;

	num = n;
	if (n < 0)
	{
		num = (num) * -1;
	}
	int_len = ft_intlen(num);
	return (ft_addnum(int_len, num));
}
