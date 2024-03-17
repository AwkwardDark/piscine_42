/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:41:05 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/16 15:48:51 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (j < size)
	{	
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
		i = 0;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {8, 7, 6, 5, 4, 3, 2, 1, 0, -5, -7};
	int	i;

	i = 0;
	ft_sort_int_tab(tab, 11);
	while (i < 11)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
*/
