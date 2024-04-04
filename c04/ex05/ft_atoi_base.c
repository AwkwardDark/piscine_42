/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:50:45 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/04 12:01:29 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
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
	return (-1);
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
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			nc = nc * (-1);
		i++;
	}
	while (str[i] && (index_base(str[i], base) != -1))
	{
		n = n * ft_strlen(base) + index_base(str[i], base);
		i++;
	}
	return (n * nc);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d",ft_atoi_base(av[1], av[2]));
	return (0);
}
*/
