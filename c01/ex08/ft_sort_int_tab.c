/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:41:05 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/15 13:24:21 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (j < size)
	{	
		while (i < size)
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

int	main(void)
{
	int	tab[] = {4, 5, 1, 2};
	int	i;

	i = 0;
	ft_sort_int_tab(tab, 4);
	while (i < 4)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
