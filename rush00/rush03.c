/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:03:50 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/17 15:01:31 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	premiere_ligne(int i, int x)
{
	if (i == 1)
		ft_putchar('A');
	else if ((i > 1) && (i < x))
		ft_putchar('B');
	else if (i == x)
		ft_putchar('C');
}

void	inter_ligne(int i, int x)
{
	if ((i == 1) || (i == x))
		ft_putchar('B');
	else if ((i > 1) && (i < x))
		ft_putchar(' ');
}

void	derniere_ligne(int i, int x)
{
	if (i == 1)
		ft_putchar('A');
	else if ((i > 1) && (i < x))
		ft_putchar('B');
	else if (i == x)
		ft_putchar('C');
}

void	print_ligne(int i, int j, int x, int y)
{
	while (i <= x)
	{
		if (j == 1)
		{
			premiere_ligne(i, x);
		}
		else if ((j > 1) && (j < y))
		{
			inter_ligne(i, x);
		}
		else if (j == y)
		{
			derniere_ligne(i, x);
		}
		i++;
	}	
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		print_ligne(i, j, x, y);
		ft_putchar('\n');
		j++;
	}
}
