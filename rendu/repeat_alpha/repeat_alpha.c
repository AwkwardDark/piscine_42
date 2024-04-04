/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:28:43 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/04 15:04:35 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 0;
			while (j <= (str[i] - 65))
			{
			 	write(1, &str[i], 1);
				j++;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 0;
			while (j <= (str[i] - 97))
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
}
