/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:00:33 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/21 18:30:35 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	p;	

	if (power < 0)
		return (0);
	i = 1;
	p = 1;
	if (i <= power)
		p = nb * ft_recursive_power(nb, power - i);
	return (p);
}
/*
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/	
