/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:24:55 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/17 18:50:44 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while ((s1[i] != '\0') && (s2[i] !='\0'))
	{
		d = s1[i] - s2[i];
		if (d != 0)
			return (d);
		i++;
	}
	return (d);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "salut";
	char	s2[] = "saluu";

	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
