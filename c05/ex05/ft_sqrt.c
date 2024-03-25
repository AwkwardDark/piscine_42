/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:11:05 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/25 10:43:45 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if ((nb <= 0) || (nb > 2147395600))
		return (0);
	while ((nb > i * i) && (i < 46340))
		i++;
	if (nb == i * i)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_sqrt(atoi(av[1])));
	return (0);
}
*/
