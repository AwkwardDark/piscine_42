/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:20:10 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/02 21:09:06 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	c;
	int	d;

	i = 0;
	c = 0;
	d = 0;
	while (i < length - 1)
	{	
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			c++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			d++;
		i++;
	}
	if ((c == i) || (d == i))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	ft_sort(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab[4] = {0, 3, 2, 3};

	printf("%d\n", ft_is_sort(tab, 4, &ft_sort));
}
*/
