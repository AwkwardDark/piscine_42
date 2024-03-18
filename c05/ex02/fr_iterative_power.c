/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:52:13 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/18 20:57:16 by pajimene         ###   ########.fr       */
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
		p = p*nb;
		i++;
	}
	return (p);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(5, 2));
}
