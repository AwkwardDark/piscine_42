/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alowenbr <alowenbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:46:58 by alowenbr          #+#    #+#             */
/*   Updated: 2024/03/24 23:27:51 by alowenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkline(int c0, int c1, int c2, int c3, int input)
{
	int result;

	result = 1;
	if (c0 == 3 || c0 == 4 || c1 == 4)
	{
		if (c0 == 3 || c1 == 4)
			result = 2;
		if (c0 == 4)
			result = 1;
	}
	else
	{
		if(c0 < c1)
			result += 1;
		if(c1 < c2)
			result += 1;
		if(c2 < c3)
			result += 1;	
	}
	if (result == input)
	{
		return (1);
	}
	return (0);
}

int checktab(int tab[4][4], int input[16])
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < 4)
	{
		if ((checkline(tab[i][0],tab[i][1],tab[i][2],tab[i][3],input[i + 8])) == 0)
			return (0);
		if (checkline(tab[i][3],tab[i][2],tab[i][1],tab[i][0],input[i + 12]) == 0)
			return (0);
		if (checkline(tab[0][i],tab[1][i],tab[2][i],tab[3][i],input[i]) == 0)
			return (0);
		if (checkline(tab[3][i],tab[2][i],tab[1][i],tab[0][i],input[i + 4]) == 0)
			return (0);
		i++;
	}
	return (1);
}