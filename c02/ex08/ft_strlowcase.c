/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 22:01:57 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/16 22:06:24 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "SaLUT";
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (i < 5)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
