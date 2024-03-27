/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:13:54 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/27 21:38:51 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	i_b(char c, char *base)
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
			if (str[j] == str[i])
				return (1);
			j++;
		}
		if ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)))
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (i);
}

int	atoi_base(char *nbr, char *base)
{
	int	i;
	int	c;
	int	n;

	i = 0;
	n = 0;
	c = 1;
	if (check_base(base) == 1)
		return (0);
	while ((nbr[i] == 32) || ((nbr[i] >= 9) && (nbr[i] <= 13)))
		i++;
	while ((nbr[i] == '+') || (nbr[i] == '-'))
	{
		if (nbr[i] == '-')
			c = c * (-1);
		i++;
	}
	while (i_b(nbr[i], base) != -1)
	{
		n = (n * check_base(base)) + i_b(nbr[i], base);
		i++;
	}
	return (n * c);
}

int	count_digit(int n, char *str)
{
	int	i;
	int	b;

	b = check_base(str);
	i = 0;
	while (n != 0)
	{
		n = n / b;
		i++;
	}
	return (i);
}

char	*put_char_base(long int n, char *base_to, char *res)
{
	int	i;
	int	size;
	//int	neg;

	size = count_digit(n, base_to);
	i = 0;
	if (n < 0)
	{
		res[0] = '-';	
		n = n * (-1);
		while (i < size)
		{
			res[size - i] = base_to[n % check_base(base_to)];
			n = n / check_base(base_to);
			i++;
		}
	}
	else if (n == 0)
	{
		res[0] = base_to[0];
		res[1] = '\0';
	}
	else if (n > 0)
	{
		while (i < size)
		{
			res[size - i - 1] = base_to[n % check_base(base_to)];
			n = n / check_base(base_to);
			i++;
		}
	}
	return (res);
}


char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int	n;
	int	i;

	n = atoi_base(nbr, base_from);
	res = malloc(1 + count_digit(n, base_to) * sizeof(char));
	if ((check_base(base_from) == 1) || (check_base(base_to) == 1))
		return (NULL);
	if (!res)
		return (NULL);
	i = 0;
	return(put_char_base(n, base_to, res));
}
		


#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
	return (0);
}
