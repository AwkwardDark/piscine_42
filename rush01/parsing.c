/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alowenbr <alowenbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:49:46 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/24 23:03:38 by alowenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
	{
		len++;
	}
	return(len);
}

int	check_arg(int ac, char *av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (1);
	if (ft_strlen(av) != 31)
		return (1);
	while (av[i])
	{
		if ((av[i] != ' ') && ((i % 2) == 1))
			return (1);
		if (!((av[i] >= '1') && (av[i] <= '4')) && ((i % 2) == 0))
			return (1);
		i++;
	}
	return (0);
}

void	print_sol(int tab[4][4])
{
	int	i;
	int	j;
	char 	c;

	i = 0;
	c = '0';
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{	
			c = tab[i][j] + 48;
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	print_tab(char *str, int tab[16])
{
	int	i;
	int	j;
 
	i = 0;
	j = 0;
	while (i < 32)
	{
		tab[j] = str[i] - '0';
		i = i + 2;
		j++;
	}
}