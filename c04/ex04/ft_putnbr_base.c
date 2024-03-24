/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:56:55 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/22 14:12:25 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] == '-') || (base[i] == '+'))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (i < 2);
}

void	change_base(unsigned int nbr, char *base)
{
	unsigned int	b;

	b = 0;
	while (base[b])
		b++;
	if (nbr >= b)
		change_base((nbr / b), base);
	ft_putchar(base[nbr % b]);
}		

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		change_base(-nbr, base);
	}
	else
		change_base(nbr, base);
}
/*
#include <stdlib.h>

int	main(int ac, cha **av)
{
	if (ac == 3)
		ft_putnbr_base(atoi(av[1]), av[2]);
	return (0);
}
*/
