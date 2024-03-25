/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:52:13 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/21 16:57:02 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;	

	if (power < 0)
		return (0);
	i = 0;
	p = 1;
	while (i < power)
	{
		p = p * nb;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/
