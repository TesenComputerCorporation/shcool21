/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:39:21 by rschuppe          #+#    #+#             */
/*   Updated: 2018/09/30 22:39:22 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int divider;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	divider = 1000000000;
	while (divider)
	{
		if (nb / divider)
		{
			ft_putchar((nb / divider) + '0');
			nb = nb % divider;
		}
		divider /= 10;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		copy_array(int *src, int *dest, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > '0' && str[i] <= '9') || str[i] == '.')
			i++;
		else
			return (-1);
	}
	return (i);
}
