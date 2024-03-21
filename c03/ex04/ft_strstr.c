/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:26:33 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/20 11:45:38 by pajimene         ###   ########.fr       */
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

	if (ft_strlen(to_find) < 1)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] == to_find[j])
			{	
				if (to_find[j + 1] == '\0')
					return (&str[i]);
			}
			else
				break ;
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] ="Hello worldfd";
	char str2[]= "ld";
	printf("%s", ft_strstr(str1, str2));
	if (ac == 3)
		printf("%s\n", ft_strstr(av[1], av[2]));
	return (0);; 
}*/
