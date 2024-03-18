/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:22:29 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/18 20:43:46 by pajimene         ###   ########.fr       */
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
		p = p*(nb - i);
		i++;
	}
	return (p);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(6));
}
