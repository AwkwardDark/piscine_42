/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:46:43 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/18 20:51:37 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	p;

	i = 1;
	p = 1;
	if (i < nb)
		p = nb*ft_recursive_factorial(nb - i);
	return (p);
}
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}
