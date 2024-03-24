/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:40:00 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/20 21:07:12 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	long	n;

	n = nb;
	if (n < 0)
	{
		n = n * (-1);
		ft_putchar('-');
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	if (n > 9)
	{
		ft_putnbr((n / 10));
		ft_putnbr((n % 10));
	}
}
/*
#include <stdlib.h>

int	main(int ac, char  **av)
{
	if (ac == 2)
		ft_putnbr(atoi(av[1]));
	return (0);
}
*/
