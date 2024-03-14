/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:58:58 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/14 20:53:13 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
	printf("%d %d", *a, *b);
}

int	main(void)
{
	int	*a;
	int	*b;
	int 	n1;
	int	n2;

	n1 = 17;
	n2 = 10;

	a = &n1;
	b = &n2;

	ft_ultimate_div_mod(a, b);
}
