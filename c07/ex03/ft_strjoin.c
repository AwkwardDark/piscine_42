/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:18:42 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:43 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(int size, char **strs, char *sep)
{
	int	c;
	int	i;

	i = 0;
	c = 0;
	if (size < 1)
		return (0);
	while (i < size)
	{
		c = c + ft_strlen(strs[i]);
		i++;
	}
	return (c + 1 + (ft_strlen(sep) * (size - 1)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*ptr;

	ptr = malloc(ft_len(size, strs, sep) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	k = 0;
	while (i++, i <= size)
	{
		j = 0;
		while (k++, j++, strs[i - 1][j - 1])
			ptr[k - 1] = strs[i - 1][j - 1];
		j = 0;
		k--;
		while (k++, j++, (sep[j - 1]) && (i <= size - 1))
			ptr[k - 1] = sep[j - 1];
		k--;
	}
	ptr[k] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(ac, av, "tt"));
}
*/
