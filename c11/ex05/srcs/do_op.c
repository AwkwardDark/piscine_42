/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:12:50 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/02 21:53:44 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}

int	get_op(int a, char *op, int b)
{
	int	(*tab[5])(int, int);
	int	r;

	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_div;
	tab[3] = &ft_mul;
	tab[4] = &ft_mod;
	r = 0;
	if (op[0] == '+')
		r = tab[0](a, b);
	if (op[0] == '-')
		r = tab[1](a, b);
	if (op[0] == '/')
		r = tab[2](a, b);
	if (op[0] == '*')
		r = tab[3](a, b);
	if (op[4] == '%')
		r = tab[4](a, b);
	return (r);
}

void	do_op(char *v1, char *op, char *v2)
{
	int	a;
	int	b;

	a = ft_atoi(v1);
	b = ft_atoi(v2);
	if ((op[1] != '\0') || !((op[0] == '+') || (op[0] == '-')
			|| (op[0] == '/') || (op[0] == '*') || (op[4] == '%')))
		write(1, "0", 1);
	else if ((op[0] == '/') && (b == 0))
		write(1, "Stop : division by zero", 23);
	else if ((op[0] == '%') && (b == 0))
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(get_op(a, op, b));
	write(1, "\n", 1);
}
