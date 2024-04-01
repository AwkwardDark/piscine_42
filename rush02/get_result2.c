/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_result2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenier <jrenier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 19:12:16 by jrenier           #+#    #+#             */
/*   Updated: 2024/03/31 19:20:59 by jrenier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush02.h"

void	ft_unit_hundred(int i, char **d, char **ot)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (d[x])
	{
		while (d[x][y])
		{
			if (d[x][y - 2] == ot[i][0] && d[x][-1] == '\0' && d[x][1] == ':')
			{
				while (d[x][y] == ' ')
					y++;
				while (d[x][y] != '\0' && d[x][y])
				{
					write(1, &d[x][y], 1);
					y++;
				}
				write(1, " ", 1);
			}
			y++;
		}
		y = 2;
		x++;
	}
}

void	ft_ultimate_putchar(int x, int y, char **dict)
{
	while (dict[x][y] == ' ')
	y++;
	while (dict[x][y])
	{
		write(1, &dict[x][y], 1);
		y++;
	}
}

void	ft_thousands(int i, char **dict, char **it)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (i == 0 || (it[i][0] == '0' && it[i][1] == '0' && it[i][2] == '0'))
		return ;
	while (dict[x])
	{
		while (dict[x][y])
		{
			if (dict[x][y] == '1' && dict[x][1 + (3 * i)] == ':')
			{
				y += 2 + (3 * i);
				ft_ultimate_putchar(x, y, dict);
				write(1, " ", 1);
			}
			y++;
		}
		x++;
		y = 0;
	}
}

void	ft_tenth(int i, char **d, char **it)
{
	int	x;
	int	y;

	x = 0;
	y = 3;
	while (d[x])
	{
		while (d[x][y])
		{
			if (d[x][y - 3] == it[i][1] && d[x][y - 2] == it[i][2]
	&& d[x][y - 1] == ':')
			{
				while (d[x][y] == ' ')
				y++;
				while (d[x][y] != '\0' && d[x][y])
				{
					write(1, &d[x][y], 1);
					y++;
				}
			}
			y++;
		}
		y = 3;
		x++;
	}
}

void	ft_sub_get_result(int i, int j, char **dict, char **input)
{
	if (j == 0)
		ft_hundred(i, dict, input);
	if (j == 1 && input[i][j] != '1')
		ft_decimal(i, dict, input);
	if (j == 1 && input[i][j] == '1')
		ft_tenth(i, dict, input);
	if (j == 2 && input[i][j - 1] != '1')
		ft_unit(i, dict, input);
}
