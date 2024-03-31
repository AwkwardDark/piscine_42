/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:48:34 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/31 17:51:30 by jrenier          ###   ########.fr       */
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

int	count_row(char *str)
{
	int	c;
	int	len;

	len = ft_strlen(str);
	c = 0;
	if ((len % 3) != 0)
		c++;
	return (len / 3 + c);
}

char	*cut(char *str, int i)
{
	char	*word;
	int		j;

	word = malloc(4 * sizeof(char));
	if (!word)
		return (NULL);
	j = 0;
	while (j < 3)
	{	
		if (i + j < 0)
			word[j] = '0';
		else if (i + j >= 0)
			word[j] = str[i + j];
		j++;
	}
	word[3] = '\0';
	return (word);
}

char	**get_input(char *str)
{
	char	**tab;
	int		len;
	int		i;
	int		k;

	len = count_row(str);
	tab = malloc((len + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = ft_strlen(str) - 3;
	k = 0;
	while (k < len)
	{
		tab[k] = cut(str, i);
		i = i - 3;
		k++;
	}
	tab[len] = 0;
	return (tab);
}
