/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:45:19 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/16 21:13:26 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 65) || ((str[i] >= 90) && (str[i] <= 97))
			|| (str[i] >= 122))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "coucu5";
	if (ft_str_is_alpha(str) == 0)
		printf("Not okay, found non alpha caracters");
	else
		printf("Okay, only alpha caracter");
	return (0);
}
*/
