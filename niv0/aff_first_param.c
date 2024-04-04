/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:43:25 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/29 13:47:15 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	write(1, str, i);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_putstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
