/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:50:45 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/21 18:02:30 by pajimene         ###   ########.fr       */
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
		j = j * n;
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

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '+') || (str[i] == '-'))
			return (1);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str [i])
				return (1);
			j++;
		}
		if ((str[i] == 32) || ((str[i] >= 7) && (str[i] <= 13)))
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;	
	int	nc;

	i = 0;
	n = 0;
	nc = 1;
	if (check_base(base) == 1)
		return (0);
	while ((str[i] == '+') || (str[i] == '-') || (str[i] == ' '))
	{
		if (str[i] == '-')
			nc = nc * (-1);
		i++;
	}
	while (str[i])
	{
		n = n + index_base(str[i], base) * pw(strl(base), strl(str) - 1 - i);
		i++;
	}
	return (n * nc);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d",ft_atoi_base(av[1], av[2]));
	return (0);
}
*/
