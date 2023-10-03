/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduchauf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:21:17 by mduchauf          #+#    #+#             */
/*   Updated: 2023/09/10 12:12:46 by mduchauf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_upper(int x, int i)
{
	while (i < 1)
	{
		ft_putchar('o');
		i++;
		while (i < (x - 1))
		{
			ft_putchar('-');
			i++;
		}
		if (x >= 2)
		{
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	ft_print_borders(int x, int y, int j)
{
	int	k;

	while (j < (y - 2))
	{
		k = 0;
		ft_putchar('|');
		while (k < (x - 2))
		{
			ft_putchar(' ');
			k++;
		}
		if (k == (x - 2))
		{
			ft_putchar('|');
		}
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x > 0 && y > 0)
	{
		ft_print_upper(x, i);
		if (y >= 2)
		{
			ft_print_borders(x, y, j);
			i = 0;
			ft_print_upper(x, i);
		}
	}
	else
	{
		ft_putchar('0');
	}
}
