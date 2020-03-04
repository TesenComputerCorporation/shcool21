/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_is_cat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:24:21 by jjerde            #+#    #+#             */
/*   Updated: 2018/10/04 22:56:10 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define BUFF_SIZE 11
#include <errno.h>

void		print_err(char *file)
{
	ft_putstr("cat: ");
	ft_putstr(file);
	if (errno == ENOENT)
		ft_putstr(": No such file or directory\n");
	else if (errno == EISDIR)
		ft_putstr(": Is a directory\n");
	else if (errno == EACCES)
		ft_putstr(": Permission denied\n");
	else
		ft_putstr(": Unknown Error\n");
}

void		print_files(int argc, char **argv)
{
	int		link;
	char	bufff[BUFF_SIZE + 1];
	int		bites;
	int		i;

	i = 0;
	while (++i < argc)
	{
		link = open(argv[i], O_RDWR);
		if (link == -1)
		{
			print_err(argv[i]);
			return ;
		}
		bites = read(link, bufff, BUFF_SIZE);
		while (bites)
		{
			bufff[bites] = '\0';
			ft_putstr(bufff);
			bites = read(link, bufff, BUFF_SIZE);
		}
		close(link);
	}
}

int			main(int argc, char **argv)
{
	char	buff;

	if (argc == 1 || argv[1][0] == '-')
		while (read(0, &buff, 1) != 0)
			write(1, &buff, 1);
	else
		print_files(argc, argv);
	return (0);
}
