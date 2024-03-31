/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 18:07:30 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/30 21:18:07 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_c_is_sep(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen_sep(char *str, char *charset, int i)
{
	int	c;

	c = 0;
	while (str[i] && !ft_c_is_sep(str[i], charset))
	{
		c++;
		i++;
	}
	return (c);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	w;
	int	c;

	i = 0;
	w = 0;
	c = 1;
	while (str[i])
	{
		while (str[i] && ft_c_is_sep(str[i], charset))
			i++;
		if (str[i])
			w++;
		while (str[i] && !ft_c_is_sep(str[i], charset))
			i++;
	}
	return (w);
}

char	*print_word(char *str, char *charset, int i)
{
	char	*word;
	int		j;

	word = malloc((ft_strlen_sep(str, charset, i) + 1) * sizeof(char));
	if (!word)
		return (NULL);
	j = 0;
	while (str[i] && !ft_c_is_sep(str[i], charset))
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
	if (!tab)
		return (NULL);
	i = 0;
	k = 0;
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
	char	**tab;

	if (ac == 3)
	{
		tab = ft_split(av[1], av[2]);
		i = 0;
		while (i < count_word(av[1], av[2]))
		{
			printf("%s\n", tab[i]);
			i++;
		}
	}
	return(0);
}
*/
