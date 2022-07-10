/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 03:06:03 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/06 02:13:11 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	num;
	char	result;

	num = n;
	if (n < 0)
	{
		num = (num) * -1;
		write(fd, "-", 1);
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	result = num % 10 + 48;
	write(fd, &result, 1);
}
