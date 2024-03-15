/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:18:06 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/14 18:37:43 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}

/*
#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;
	int	*a;
	int	*b;

	n1 = 7;
	n2 = 23;
	a = &n1;
	b = &n2;
	printf ("Result avant: %d, %d\n", n1, n2);
	ft_swap(a, b);
	printf ("Result apres: %d, %d", n1, n2);
}
*/
