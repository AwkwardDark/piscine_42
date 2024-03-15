/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:17:41 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/15 11:06:34 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "abcdefgh";
	printf("%d\n", ft_strlen(str));
	return (0);
}
