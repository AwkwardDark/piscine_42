/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:09:23 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/17 18:17:54 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[] = "0123456789abcdef";
	int	i;
	int	u;
	int	d;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 31) && (str[i] < 126)))
		{
			ft_putchar('\\');
			d = (str[i] / 16);
			u = (str[i] % 16);
			ft_putchar(hex[d]);
			ft_putchar(hex[u]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	int	i;

	i = 0;
	ft_putstr_non_printable(str);
	/*while (i < 20)
	{
		printf("%c", str[i]);
		i++;
	}*/
	return (0);
}
