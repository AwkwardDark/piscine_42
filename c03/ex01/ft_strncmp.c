/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:51:51 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/19 20:46:53 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				d;

	i = 0;
	d = 0;
	if (n < 1)
		return (0);
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i <= (n - 1)))
	{
		d = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (d != 0)
			return (d);
		i++;
	}
	d = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (d);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	return (0);
}
*/
/*
int	main(void)
{
	char s1[] = "salut";
	char s2[] = "ralur";

	printf("%d", ft_strncmp(s1, s2, 1));
	return (0);
}
*/
