/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:24:01 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/16 18:03:18 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {8, 2};
	int 	i;

	i = 0;
	ft_rev_int_tab(tab, 2);
	while (i < 2)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
*/
