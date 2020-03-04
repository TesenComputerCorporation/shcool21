/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waeron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:31:12 by waeron-g          #+#    #+#             */
/*   Updated: 2018/09/30 17:33:25 by waeron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		copy_array(int *src, int *dest, int size);

int		*set_trivial(int *arr);
int		is_solution(int arr[81], int x);
int		input_is_valid(char **input);

#endif
