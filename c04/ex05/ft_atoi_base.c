/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:50:45 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/18 20:20:46 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	pw(int n, int p)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= p)
	{
		j = j*n;
		i++;
	}
	return (j);
}

int	strl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int	ft_atoi_base(char *str, char *base)
{
	int	ls;
	int	lb;
	int	i;
	int	n;

	lb = strl(base);
	ls = strl(str) - 1;
	i = 0;
	n = 0;
	while (str[i])
	{
		n = n + (str[i] - 48)*pw(lb, ls - i);
		i++;
	}
	return (n);
}

int	main(void)
{
	printf("%d",ft_atoi_base("100000", "01"));
}
