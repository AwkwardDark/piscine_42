/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:14:59 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/02 21:06:31 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{	
	int	i;
	int	*out;

	out = malloc(length * sizeof(int));
	if (!out)
		return (NULL);
	i = 0;
	while (i < length)
	{
		out[i] = (*f)(tab[i]);
		i++;
	}
	return (out);
}
/*
#include <stdio.h>

int	ft_mult(int n)
{
	return (n*10);
}

int	main(void)
{
	int	tab[4] = {1, 5, 65, 789};
	int	*out;
	int	i = 0;

	out = ft_map(tab, 4, &ft_mult);
	while (i < 4)
	{
		printf("%d, ", out[i]);
		i++;
	}
}
*/
