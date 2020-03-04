/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trivial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:38:40 by rschuppe          #+#    #+#             */
/*   Updated: 2018/09/30 22:38:41 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "header.h"

int		g_source[81];
int		g_result[81];

void	print_sudoku(int *arr)
{
	int i;
	int k;

	i = 0;
	while (i < 9)
	{
		k = 0;
		while (k < 9)
		{
			ft_putnbr(arr[i * 9 + k]);
			++k;
			if (k < 9)
				ft_putchar(' ');
		}
		++i;
		ft_putchar('\n');
	}
}

int		check_line(int *arr, int x, int num)
{
	int i;
	int j;
	int index;

	i = 0;
	while (i < 9)
	{
		index = (x / 9) * 9 + i;
		if (num == arr[index] && index != x)
			return (0);
		index = (x % 9) + (9 * i);
		if (num == arr[index] && index != x)
			return (0);
		i++;
	}
	return (1);
}

int		check_square(int *arr, int x, int num)
{
	int i;
	int j;
	int buf;
	int index;

	buf = (x - (x % 9) % 3) - (((x - (x % 9) % 3) / 9) % 3) * 9;
	j = 0;
	while (j < 3)
	{
		i = 0;
		while (i < 3)
		{
			index = buf + i + j * 9;
			if (x != index && arr[index] == num)
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int		rcompute(int buffer[81], int x, int num)
{
	int i;
	int count;

	count = 0;
	if (check_line(buffer, x, num) && check_square(buffer, x, num))
	{
		buffer[x] = num;
		if (x < 80)
		{
			if (g_source[x + 1] == 0)
			{
				i = 0;
				count = 0;
				while (++i < 10)
					count += rcompute(buffer, x + 1, i);
			}
			else
				count = rcompute(buffer, x + 1, g_source[x + 1]);
		}
		else
			return (copy_array(buffer, g_result, 81));
		if (count == 0)
			buffer[x] = 0;
	}
	return (count);
}

int		is_solution(int arr[81], int x)
{
	int i;
	int count;
	int copy_arr[81];

	copy_array(arr, g_source, 81);
	if (arr[x])
		count = rcompute(arr, 0, arr[x]);
	else
	{
		i = 1;
		while (i < 10)
		{
			count += rcompute(arr, 0, i);
			i++;
		}
	}
	if (count == 1)
		print_sudoku(g_result);
	else
		ft_putstr("Error\n");
	return (1);
}
