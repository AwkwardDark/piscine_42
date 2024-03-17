/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:17:39 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/17 17:06:18 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	i = 0;
	while ((src[i] != '\0') && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "salut";
	char	dest[] = "abcdefghi";

	printf("%d", ft_strlcpy(dest, src, 3));
	return (0);
}
*/
