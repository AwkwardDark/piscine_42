/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:50:16 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/14 15:05:45 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_n(int x, int y, int z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_write_n(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	write(1, "789", 3);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
