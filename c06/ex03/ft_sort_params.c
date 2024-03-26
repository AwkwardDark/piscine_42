/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:32:49 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/25 18:10:56 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int ac, char **str)
{
	int		i;
	int		j;
	char	*temp;

	j = 1;
	while (j < ac)
	{
		i = 2;
		while (i < ac)
		{
			if (ft_strcmp(str[i - 1], str[i]) > 0)
			{
				temp = str[i];
				str[i] = str[i - 1];
				str[i - 1] = temp;
			}
			i++;
		}
		j++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		ft_sort(ac, av);
		while (i < ac)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
