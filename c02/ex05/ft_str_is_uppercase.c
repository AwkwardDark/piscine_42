/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:34:30 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/19 11:32:08 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65) || (str[i] > 90))
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
		if (ft_str_is_uppercase(av[1]) == 1)
			printf("Okay, only alpha uppercase caracters");
		else
			printf("Not okay, not only uppercase and/or alpha caracters");
	}
	return (0);
}
*/
