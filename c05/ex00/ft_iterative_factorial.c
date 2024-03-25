/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:22:29 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/21 16:41:34 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	p;

	if (nb < 0)
		return (0);
	p = 1;
	i = 0;
	while (i < nb)
	{
		p = p * (nb - i);
		i++;
	}
	return (p);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	printf("%d", ft_iterative_factorial(atoi(av[1])));
	return (0);
}
*/
