/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:09:23 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/19 16:41:32 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	basehex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 31) && (str[i] < 127)))
		{
			basehex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putstr_non_printable(av[1]);	
	return (0);
}
*/
/*
int	main(void)
{
	ft_putstr_non_printable("\x81\xbe");
}
*/
