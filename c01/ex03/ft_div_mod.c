/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:40:19 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/15 10:45:21 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

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
	printf("The result of a/b: %d and a mod b: %d", d, m);
}
