/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:30:05 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/26 09:51:17 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	t;
	long int	i;
	int			*ptr;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	t = max - min;
	ptr = malloc(t * sizeof(int));
	if (!ptr)
		return (-1);
	i = 0;
	while (i < t)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (t);
}
/*
#include <stdio.h>

int	main(void)
{
	int *range;

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n",
	 range[0], range[1], range[2], range[3], range[4]);
	
	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	
	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}
*/
