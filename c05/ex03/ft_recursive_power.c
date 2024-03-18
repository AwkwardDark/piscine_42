/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:00:33 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/18 21:09:11 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	p;	

	if (power < 0)
		return (0);
	i = 1;
	p = 1;
	if (i <= power)
		p = nb*ft_recursive_power(nb, power - i);
	return (p);
}

int	main(void)
{
	printf("%d", ft_recursive_power(3, 3));
}
	
