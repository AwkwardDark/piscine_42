/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:40:19 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/15 21:22:08 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	d;
	int	m;

	a = 87;
	b = 10;
	ft_div_mod(a, b, &d, &m);
	printf("a value is: %d; and b value is: %d;\n", a, b);
	printf("The result of a/b: %d; and a mod b: %d;\n", d, m);
}
*/
