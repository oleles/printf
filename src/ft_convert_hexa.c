/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 23:20:22 by jeurico-          #+#    #+#             */
/*   Updated: 2022/07/10 23:42:14 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	count_hexa(size_t num)
{
	int	j;

	j = 0;
	while (num != 0)
	{
		j++;
		num = num / 16;
	}
	return (j);
}

static void	print_hexa(char *hexa)
{
	int	i;

	i = 0;
	while (hexa[i])
	{
		write(1, &hexa[i], 1);
		i++;
	}
}

int	dec_in_hexa(size_t num, char types)
{
	char	*hexa;
	int		i;
	int		count;

	i = 0;
	count = 0;
	i = count_hexa(num);
	count = i;
	hexa = (char *)malloc((i + 1) * sizeof(char));
	if (!hexa)
		return (0);
	hexa[i] = '\0';
	while (num != 0)
	{
		i--;
		if (num % 16 > 9)
			hexa[i] = num % 16 - 10 + types;
		else
			hexa[i] = num % 16 + 48;
		num = num / 16;
	}
	print_hexa(hexa);
	free(hexa);
	return (count);
}
