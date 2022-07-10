/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 02:34:16 by jeurico-          #+#    #+#             */
/*   Updated: 2022/05/06 02:13:08 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	count;

	count = 0;
	while (count < ft_strlen(s))
	{
		write(fd, &s[count], 1);
		count++;
	}
	write(fd, "\n", 1);
}
