/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:56:51 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/19 21:44:12 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	unsigned int	j;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	while (dest[i] && i < size)
		i++;
	j = i;
	if (slen < size)
		return (slen - size);
	if (size < dlen)
	{
		i = 0;
		while (src[i] && (i < dlen - i - 1))
		{
			dest[dlen + i] = src[i];
			i++;
		}
	}
	dest[dlen + i] = '\0';
	return (i + j);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlcat("asdf", "fdf", 3));
}
