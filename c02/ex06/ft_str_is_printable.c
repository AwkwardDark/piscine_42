/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:37:42 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/19 15:29:10 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == 127) || (str[i] < 32))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_str_is_printable(av[1]) == 1)
			printf("Okay, only printable characters");
		else
			printf("Not okay, there are not printable characters");
	}
	return (0);
}
*/
