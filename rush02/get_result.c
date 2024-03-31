/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_result.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenier <jrenier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:41:57 by jrenier           #+#    #+#             */
/*   Updated: 2024/03/31 21:07:32 by jrenier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "rush02.h"

void	ft_write_space(char **output, int i, int j)
{
	if (i == 0 && j == 2)
		return ;
	else if (j == 1 && output[i][j + 1] != '0' && output[i][j] != '1')
		write(1, "-", 1);
	else
		write(1, " ", 1);
}

void	ft_hundred(int i, char **dict, char **output)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	ft_unit_hundred(i, dict, output);
	while (dict[x])
	{
		while (dict[x][y])
		{
			if (dict[x][y] == '1' && dict[x][y + 3] == ':')
			{
				y += 4;
				ft_ultimate_putchar(x, y, dict);
			}
			y++;
		}
		y = 0;
		x++;
	}
}

void	ft_decimal(int i, char **dict, char **output)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dict[x])
	{
		while (dict[x][y])
		{
			if (dict[x][y] == output[i][1] && dict[x][y + 2] == ':')
			{
				y += 3;
				while (dict[x][y] == ' ')
				y++;
				while (dict[x][y] != '\0' && dict[x][y])
				{
					write(1, &dict[x][y], 1);
					y++;
				}
			}
			y++;
		}
		y = 0;
		x++;
	}
}

void	ft_unit(int i, char **d, char **ot)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (d[x])
	{
		while (d[x][y])
		{
			if (d[x][y - 2] == ot[i][2] && d[x][-1] == '\0' && d[x][1] == ':')
				ft_ultimate_putchar(x, y, d);
			y++;
		}
		y = 2;
		x++;
	}
}

void	ft_get_result(char **dict, char **output, int count_row)
{
	int	i;
	int	j;

	j = 0;
	i = count_row - 1;
	if (i == 0 && output[i][0] == '0'
	&& output[i][1] == '0' && output[i][2] == '0')
		ft_unit(i, dict, output);
	while (i >= 0)
	{
		while (j < 3)
		{
			if (output[i][j] != '0')
			{
				ft_sub_get_result(i, j, dict, output);
				ft_write_space(output, i, j);
			}
			j++;
		}
		j = 0;
		ft_thousands(i, dict, output);
		i--;
	}
}
