/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:26:26 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/25 20:12:04 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long int	i;
	long int	t;
	int			*ptr;

	if (min >= max)
		return (NULL);
	t = max - min;
	ptr = malloc(t * sizeof(int));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < t)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int *range;

	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n",
	 range[0], range[1], range[2], range[3], range[4]);
	
	range = ft_range(3, 3);
	
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
}
*/
