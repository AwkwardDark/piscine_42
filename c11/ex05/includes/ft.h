/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:19:20 by pajimene          #+#    #+#             */
/*   Updated: 2024/04/02 21:54:20 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	do_op(char *v1, char *op, char *v2);
int		ft_atoi(char *str);
void	ft_putnbr(int n);
int		get_op(int a, char *op, int b);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_mul(int a, int b);
int		ft_mod(int a, int b);

#endif
