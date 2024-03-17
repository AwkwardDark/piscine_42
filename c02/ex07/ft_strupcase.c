/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:43:22 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/16 22:01:09 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 90)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "saLut";
	int	i;

	i = 0;
	ft_strupcase(str);
	while (i < 5)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
