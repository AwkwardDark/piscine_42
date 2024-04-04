/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:54:05 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/04 18:58:27 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	t;
	unsigned int	i;

	t = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > t)
			t = tab[i];
		i++;
	}
	return (t);
}

#include <stdio.h>

int	main(void)
{
	int	tab[6] = {-4, 5, 2, 1, -3, 2};

	printf("%d\n", max(tab, 6));
}
