/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:26:33 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/17 21:55:46 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	c;
	int	is_find;

	i = 0;
	j = 0;
	c = 0;
	is_find = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while ((to_find[j] != '\0'))
			{
				if (str[i + j] == to_find[j])
					c++;
				j++;
			}
			if (j == ft_strlen(to_find))
				is_find = 1;
				break
		}
		c = 0;
		j = 0;
		i++;
	}
	if (is_find == 1)
		str = (str + i);
	else
		return (0);
}

int	main(void)
{
	char	to_find[] = "lu";
	char	src[] ="salut";
	int	i;

	ft_strstr(src, to_find);
	i = 0;
	while
