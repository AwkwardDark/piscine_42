/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alowenbr <alowenbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:00:48 by alowenbr          #+#    #+#             */
/*   Updated: 2024/03/24 23:35:38 by alowenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	solver(int tab[4][4], int input[16]);
void	print_sol(int tab[4][4]);
int	check_arg(int ac, char *av);
void	print_tab(char *str, int tab[16]);

int	main(int ac, char **av)
{
	int	i;
	int	tab[4][4];
	int	input[16];

	i = 0;
	if (check_arg(ac, av[1]))
		write(1, "Error\n", 6);
	else
	{
		print_tab(av[1], input);
		if (solver(tab, input) == 1)
		{
			solver(tab, input);
			print_sol(tab);
		}
		else
			write(1, "Error\n", 6);
	}
}
