/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:04:58 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/21 17:33:38 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	nc;

	i = 0;
	while ((str[i] == 32) || ((str[i] >= 7) && (str[i] <= 13)))
		i++;
	nc = 1;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			nc = nc * (-1);
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		n = 10 * n + (str[i] - 48);
		i++;
	}
	if (nc == -1)
		n = n * (-1);
	return (n);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if(ac == 2)
		printf("%d\n", ft_atoi(av[1]));
	return (0);
}
*/
