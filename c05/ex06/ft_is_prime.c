/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:29:01 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/24 12:01:42 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 0)
		nb = nb * (-1);
	if ((nb == 0) || (nb == 1))
		return (0);
	if ((((nb % 2) == 0) && (nb > 2)) || (nb == 9))
		return (0);
	i = 3;
	while (i < nb / 3)
	{
		if ((nb % i) == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	nb;

	nb = 0;
	while (nb < 100)
	{
		if (ft_is_prime(nb) == 1)
			printf("%d, ", nb);
		nb++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_is_prime(atoi(av[1])));
	return (0);
}
*/
