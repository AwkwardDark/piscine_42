/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:44:24 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/25 10:52:21 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

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

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_find_next_prime(atoi(av[1])));
	return (0);
}
*/
