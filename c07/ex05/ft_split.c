/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:14:54 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/27 21:12:44 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen_word(char *str, char *charset, int i)
{
	int	c;

	c = 0;
	while (str[i] && (ft_c_is_sep(str[i], charset) == 0))
		c++;
	return (c);
}

int	ft_c_is_sep(char c, char *charset)
{
	int 	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
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
	int	wordlen;
	char	*word;
	int	j;

	wordlen = ft_strlen_word(str, charset, i);
	word = malloc((wordlen + 1) * sizeof(char));
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

char **ft_split(char *str, char *charset)
{
	char	**tab;
	int	i;
	int	k;

	tab = malloc((ft_c_is_sep(str, charset) + 1) * sizeof(char *));
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

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", ft_split(av[1], av[2]));
	}
	return (0);
}	
