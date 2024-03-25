/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:46:43 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/21 16:50:50 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	p;

	i = 1;
	p = 1;
	if (nb < 0)
		return (0);
	if (i < nb)
		p = nb * ft_recursive_factorial(nb - i);
	return (p);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_recursive_factorial(atoi(av[1])));
	return (0);
}
*/
