/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 23:37:47 by jeurico-          #+#    #+#             */
/*   Updated: 2022/07/10 23:45:37 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	convert_x(va_list pntr)
{
	unsigned int	value;
	int				j;

	value = (unsigned int)va_arg(pntr, unsigned int);
	if (value == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	j = 0;
	j = dec_in_hexa(value, 'a');
	return (j);
}

int	convert_x_upper(va_list pntr)
{
	unsigned int	value;
	int				j;

	value = (unsigned int)va_arg(pntr, unsigned int);
	if (value == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	j = 0;
	j = dec_in_hexa(value, 'A');
	return (j);
}
