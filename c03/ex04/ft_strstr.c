/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:26:33 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/19 21:28:01 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[i])
		{
			if (str[i + j] == to_find[i])
			{	
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				else
					break ;
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", ft_strstr(av[1], av[2]));
	return (0);;
}
*/
