/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:21:31 by pajimene          #+#    #+#             */
/*   Updated: 2024/03/31 21:42:19 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

int		check_arg(char *str);
char	**ft_get_dict(int argc, char *argv[]);
void	ft_unit(int i, char **dict, char **output);
int		count_row(char *str);
void	ft_unit_hundred(int i, char **d, char **it);
void	ft_thousands(int i, char **dict, char **it);
void	ft_ultimate_putchar(int x, int y, char **dict);
void	ft_sub_get_result(int i, int j, char **dict, char **input);
void	ft_hundred(int i, char **dict, char **output);
void	ft_decimal(int i, char **dict, char **output);
void	ft_unit(int i, char **d, char **ot);
char	**get_input(char *str);
void	ft_get_result(char **dict, char **output, int count_row);
char	**ft_get_dict(int argc, char *argv[]);
int		count_row(char *str);
char	**ft_split(char *str, char *charset);

#endif
