/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_is_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:38:10 by rschuppe          #+#    #+#             */
/*   Updated: 2018/09/30 22:38:16 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	words(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	input_is_valid(char **input)
{
	int	i;
	int r;

	i = 1;
	r = 1;
	if (words(input) == 10)
	{
		while (i < 10)
		{
			if (ft_strlen(input[i]) == 9)
				r = r * 1;
			else
				r = 0;
			++i;
		}
		return (r);
	}
	return (0);
}
