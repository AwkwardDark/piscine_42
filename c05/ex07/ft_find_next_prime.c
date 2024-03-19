/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:44:24 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/19 10:07:09 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (((nb % 2) == 0) && (nb != 2))
		nb++;
	i = 3;
	while (i <= nb / 2)
	{
		if (((nb % i) == 0) ||((nb % 2) == 0))
			nb++;
		i = i + 2;
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 2;
	while (nb <= 100)
	{
		printf("%d, ", ft_find_next_prime(nb));
		nb = ft_find_next_prime(nb) + 1;
	}
	return (0);
}
