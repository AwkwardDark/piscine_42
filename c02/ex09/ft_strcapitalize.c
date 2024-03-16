/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 22:07:42 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/16 22:25:30 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(((str[i] > 47) && (str[i] < 58)) || ((str[i] > 64) && (str[i] < 91)) || ((str[i] > 96) && (str[i] < 123))))
		{
			if ((str[i] > 64) && (str[i] < 91))
				str[i] = str[i] - 32;
			if ((str[i] > 96) && (str[i] < 123))
				str[i] = str[i] + 32;
		}
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
