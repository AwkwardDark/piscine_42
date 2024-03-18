/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:56:55 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/18 18:49:28 by pajimene         ###   ########.fr       */
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
	if (i < 2)
		return (1);
	return (0);
}

void	change_base(int	nbr, char *base)
{
	int	b;
	int	div;
	int	mod;

	b = 0;
	while(base[b])
		b++;
	if (nbr >= b)
	{
		div = (nbr / b);
		mod = (nbr % b);
		change_base(div, base);
	}
	if (nbr >= b)
		ft_putchar(base[mod]);
	if (nbr < b)
		ft_putchar(base[nbr]);
}		

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base) == 1)
		return ;
	if (nbr < 0)
	{
		nbr = nbr*(-1);
		ft_putchar('-');
	}
	change_base(nbr, base);
}

int	main(void)
{
	char	base[] = "0123456789ABCDEF";
	int	i = -15;

	ft_putnbr_base(i, base);
	return (0);
}
