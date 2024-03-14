/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:20:26 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/14 11:32:37 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int x, int y)
{
	int	ux;
	int	dx;
	int	uy;
	int	dy;

	dx = '0' + x / 10;
	ux = '0' + x % 10;
	dy = '0' + y / 10;
	uy = '0' + y % 10;
	write(1, &dx, 1);
	write(1, &ux, 1);
	write(1, " ", 1);
	write(1, &dy, 1);
	write(1, &uy, 1);
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		while (b <= 99)
		{
			ft_write(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
	write(1, "9", 1);
	write(1, "8", 1);
	write(1, " ", 1);
	write(1, "9", 1);
	write(1, "9", 1);
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
