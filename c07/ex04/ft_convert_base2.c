/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:53:18 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/28 09:22:51 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_digit(int n, char *str);

int	check_base(char *str);

char	*put_char_base(long int n, char *base_to, char *res)
{
	int	i;
	int	size;
	int	a;

	size = count_digit(n, base_to);
	i = 0;
	if (n == 0)
	{
		res[0] = base_to[0];
		res[1] = '\0';
	}
	a = 0;
	while (i < size)
	{
		if (n < 0)
		{
			res[0] = '-';
			n = n * (-1);
			a = 1;
		}
		res[size - i + a - 1] = base_to[n % check_base(base_to)];
		n = n / check_base(base_to);
		i++;
	}
	return (res);
}
