/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:06:12 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/04 20:38:01 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_n(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb != 0)
	{	
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*itoa(int nb)
{
	char	*res;
	int	len;
	int	lent;
	int	n;

	n = nb;
	len = count_n(nb);
	lent = len;
	res = malloc((len + 1) * sizeof(char));
	if (n == 0)
		res[0] = '0';
	while (n < 0)
	{
		res[0] = '-';
		n = n * (-1);
	}
	while (n > 0)
	{
		res[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	res[lent] = '\0';
	return (res);
}

#include  <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", itoa(atoi(av[1])));
	return (0);
}
