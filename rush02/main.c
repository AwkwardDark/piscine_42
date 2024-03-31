/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 10:48:45 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/31 17:49:48 by jrenier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "rush02.h"

int	main(int ac, char **av)
{
	char	**input;
	char	**dict;
	int		count_r;
	int		i;

	if (check_arg(av[1]) == 0)
		write(1, "DictError\n", 10);
	i = -1;
	count_r = count_row(av[1]);
	dict = ft_get_dict(ac, av);
	input = get_input(av[1]);
	if (((ac == 2) || (ac == 3)) && (check_arg(av[1]) == 1))
	{
		ft_get_result(dict, input, count_r);
	}
	while (input[++i])
		free (input[i]);
	free(input);
	i = -1;
	while (dict[++i])
		free (dict[i]);
	free(dict);
	return (0);
}
