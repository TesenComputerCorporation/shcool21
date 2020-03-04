/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:11:16 by jjerde            #+#    #+#             */
/*   Updated: 2018/10/04 22:44:24 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFF_SIZE 512
#include "header.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		link;
	char	bufff[BUFF_SIZE + 1];
	int		bites;

	if (argc > 1)
	{
		link = open(argv[1], O_RDONLY);
		if (link == -1)
			return (0);
		bites = read(link, bufff, BUFF_SIZE);
		while (bites)
		{
			bufff[bites] = '\0';
			ft_putstr(bufff);
			bites = read(link, bufff, BUFF_SIZE);
		}
		close(link);
	}
	return (0);
}
