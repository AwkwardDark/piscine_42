/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:14:54 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/28 13:55:39 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_c_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen_word(char *str, char *charset, int i)
{
	int	c;

	c = 0;
	while (str[i] && (ft_c_is_sep(str[i], charset) == 0))
	{
		c++;
		i++;
	}
	return (c);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (str[i])
	{
		while (str[i] && ft_c_is_sep(str[i], charset))
			i++;
		if (str[i])
			m++;
		while (str[i] && !(ft_c_is_sep(str[i], charset)))
			i++;
	}
	return (m);
}				

char	*print_word(char *str, char *charset, int i)
{
	char	*word;
	int		j;
	int		wordlen;

	wordlen = ft_strlen_word(str, charset, i);
	word = malloc((wordlen + 1) * sizeof(char));
	if (!word)
		return (NULL);
	j = 0;
	while (j < wordlen)
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		k;

	tab = malloc((count_word(str, charset) + 1) * sizeof(char *));
	i = 0;
	k = 0;
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_c_is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			tab[k] = print_word(str, charset, i);
			k++;
		}
		while (str[i] && !ft_c_is_sep(str[i], charset))
			i++;
	}
	tab[k] = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	char	**ex;

	if (ac == 3)
	{
		ex = ft_split(av[1], av[2]);
		i = 0;
		while (ex[i])
		{
			printf("%s\n", ex[i]);
			i++;
		}
	}
	return (0);
}
*/
