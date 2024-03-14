/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:40:19 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/14 20:08:02 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	d;
	int	m;

	//printf("%d, %d", a, b);
	d = a / b;
	m = a % b;
	div = &d;
	mod = &m;

	printf("%d, %d", *div, *mod);
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	d;
	int	m;
	int	*div;
	int	*mod;

	a = 87;
	b = 10;
	ft_div_mod(a, b, div, mod);
	//&d = div;
	//&m = mod;
	d = div;
	printf("The result of a/b: %d and a mod b: ", d);
}
