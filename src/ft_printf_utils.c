/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:47:28 by jeurico-          #+#    #+#             */
/*   Updated: 2022/07/10 23:49:24 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	convert_c(va_list pntr)
{
	int	result;

	result = va_arg(pntr, int);
	write(1, &result, 1);
	return (1);
}

int	convert_s(va_list pntr)
{
	char	*test;
	int		j;

	j = 0;
	test = va_arg(pntr, char *);
	if (!test)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (test[j])
	{
		write(1, &test[j], 1);
		j++;
	}
	return (j);
}

int	convert_p(va_list pntr)
{
	size_t	test;
	int		j;

	test = va_arg(pntr, size_t);
	if (!test)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	j = 0;
	write(1, "0x", 2);
	j = dec_in_hexa(test, 'a');
	return (j + 2);
}

int	convert_d_i(va_list pntr)
{
	int		result;
	char	*conv_int;
	size_t	count;

	result = va_arg(pntr, int);
	conv_int = ft_itoa(result);
	count = 0;
	while (conv_int[count])
	{
		write(1, &conv_int[count], 1);
		count++;
	}
	free(conv_int);
	return (count);
}

int	convert_u(va_list pntr)
{
	unsigned int	result;
	char			*conv_int;
	size_t			count;

	result = (unsigned int)va_arg(pntr, unsigned int);
	conv_int = ft_itoa_unsigned(result);
	count = 0;
	while (conv_int[count])
	{
		write(1, &conv_int[count], 1);
		count++;
	}
	free(conv_int);
	return (count);
}
