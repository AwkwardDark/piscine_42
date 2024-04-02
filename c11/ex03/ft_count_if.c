/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:20:08 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/02 21:08:00 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			c++;
		i++;
	}
	return (c);
}
/*
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
			return (0);
		i++;
	}
	return (1);
}

int	main (int ac, char **av)
{
	if (ac > 1)
		printf("%d\n", ft_count_if(av, 2, &ft_str_is_numeric));
	return (0);
}
*/
