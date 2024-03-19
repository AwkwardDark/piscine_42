/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:24:55 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/19 17:25:11 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int					i;
	int					i;
	unsigned char		*s1p;
	unsigned char		*s2p;

	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	i = 0;
	d = 0;
	while ((s1p[i] != '\0') && (s2p[i] != '\0'))
	{
		d = s1p[i] - s2p[i];
		if (d != 0)
			return (d);
		i++;
	}
	d = s1p[i] - s2p[i];
	return (d);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_strcmp(av[1], av[2]));
	return (0);
}
*/
