/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:15:54 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/04 19:51:19 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	i;
	int	k;
	int	flag;

	i = 0;
	k = 0;
	flag = 0;
	while (str[i])
	{
		while ((str[i]) && ((str[i] == ' ') || (str[i] == '\t')))
		{
			flag = 1;
			i++;
		}
		if ((flag == 1) && (str[i]) && (str[i] != ' ') && (str[i] != '\t'))
		{
			k = i;
			flag = 0;
			i++;
		}
		while ((str[i]) && (str[i] != ' ') && (str[i] != '\t'))
			i++;
	}
	while ((str[k]) && (str[k] != ' ') && (str[k] != '\t'))
	{
		write(1, &str[k], 1);
		k++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}
