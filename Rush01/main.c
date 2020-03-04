/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:39:07 by rschuppe          #+#    #+#             */
/*   Updated: 2018/09/30 22:39:08 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	get_solution(int argc, char **argv, int *source)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (++i < argc)
	{
		j = -1;
		while (++j < 9)
		{
			if (argv[i][j] != '.')
				source[k] = argv[i][j] - '0';
			else if (argv[i][j] == '.')
				source[k] = 0;
			k++;
		}
	}
}

int		main(int argc, char **argv)
{
	int source[81];

	if (argc != 10 || !input_is_valid(argv))
		ft_putstr("Error\n");
	else
	{
		get_solution(argc, argv, source);
		is_solution(source, 0);
	}
	return (0);
}
