/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:28:40 by jeurico-          #+#    #+#             */
/*   Updated: 2022/07/10 23:46:20 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	check_opt(va_list pntr, const char *conv, size_t count)
{
	int	i;

	i = 0;
	if (conv[count + 1] == 'c')
		i = convert_c(pntr);
	else if (conv[count + 1] == 's')
		i = convert_s(pntr);
	else if (conv[count + 1] == 'p')
		i = convert_p(pntr);
	else if (conv[count + 1] == 'd' || conv[count + 1] == 'i')
		i = convert_d_i(pntr);
	else if (conv[count + 1] == 'u')
		i = convert_u(pntr);
	else if (conv[count + 1] == 'x')
		i = convert_x(pntr);
	else if (conv[count + 1] == 'X')
		i = convert_x_upper(pntr);
	else if (conv[count + 1] == '%')
	{
		write(1, &conv[count + 1], 1);
		i++;
	}
	return (i);
}

int	ft_printf(const char *conv, ...)
{
	va_list	pntr;
	size_t	count;
	int		j;

	count = 0;
	j = 0;
	if (!conv)
		return (0);
	va_start(pntr, conv);
	while (count < ft_strlen(conv))
	{
		if (conv[count + 1] && conv[count] == '%')
		{
			j += (check_opt(pntr, conv, count));
			count = count + 2;
		}
		else if (conv[count])
		{
			write(1, &conv[count], 1);
			count++;
			j += 1;
		}
	}
	va_end(pntr);
	return (j);
}
