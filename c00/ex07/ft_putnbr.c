/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:48:02 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/14 11:28:18 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	write(1, ", ", 2);
	ft_putnbr(-365);
	write(1, ", ", 2);
	ft_putnbr(4);
	write(1, ", ", 2);
	ft_putnbr(123456);
	write(1, ", ", 2);
	ft_putnbr(-2147483648);
	return (0);
}
*/
