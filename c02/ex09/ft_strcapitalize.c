/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 22:07:42 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/17 16:11:43 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;	
	int	last;

	i = 0;
	last = 1;
	while (str[i] != '\0')
	{
		if (last && (str[i] > 96) && (str[i] < 123))
			str[i] = str[i] - 32;
		if (!last && (str[i] > 64) && (str[i] < 91))
			str[i] = str[i] + 32;
		if ((str[i] < 48) || ((str[i] > 57) && (str[i] < 65))
			 || ((str[i] > 90) && (str[i] < 97)) || (str[i] > 122))
			last = 1;
		else
			last = 0;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, coMMent tu vAs ? 42mOts";
	int	i;

	i = 0;
	ft_strcapitalize(str);
	while (i < 30)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}	
