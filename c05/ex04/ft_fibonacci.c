/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:10:09 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/18 21:22:50 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	n =0;
	if (index > 1)
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}

int	main(void)
{
	printf("%d",ft_fibonacci(8));
}
