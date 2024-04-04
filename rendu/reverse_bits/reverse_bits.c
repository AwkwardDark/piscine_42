/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:56:24 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/04 18:42:47 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char uc;

	uc = 0;
	i = 0;
	while (i < 8)
 	{ 
		uc *= 2;
		uc += octet % 2;
		octet = octet / 2;
		i++;
	}
	return (uc);
}

#include <stdio.h>

 int main(int ac, char **av)
{
	printf("%d", reverse_bits(av[1][0]));
}

