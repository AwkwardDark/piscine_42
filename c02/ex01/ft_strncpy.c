/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:14:41 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/16 20:11:33 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[] = "abcdef";
	char	src[] = "salut";
	x
int	n = 6;

	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}
/*
int	main(int ac, char **av)
{
	char	*src = av[2];
	char	*dest = av[1];
	int	n = *av[3] - 48;

	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}
*/
