/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 03:00:53 by jeurico-          #+#    #+#             */
/*   Updated: 2022/07/11 00:07:40 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *params, ...);
int		convert_c(va_list pntr);
int		convert_s(va_list pntr);
int		convert_p(va_list pntr);
int		convert_d_i(va_list pntr);
int		convert_u(va_list pntr);
int		convert_x(va_list pntr);
int		convert_x_upper(va_list pntr);
int		dec_in_hexa(size_t num, char types);

size_t	ft_strlen(const char *c);

char	*ft_itoa(int n);
char	*ft_itoa_unsigned(unsigned int n);

#endif