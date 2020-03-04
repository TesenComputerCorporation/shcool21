/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:56:21 by jjerde            #+#    #+#             */
/*   Updated: 2018/10/02 18:05:01 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_atoi(const char *nprt)
{
	long	res;
	int		i;
	int		neg;

	i = 0;
	neg = 1;
	res = 0;
	while ((nprt[i] == '\n' || nprt[i] == '\t' || nprt[i] == '\f' ||
			nprt[i] == '\r' || nprt[i] == ' ' || nprt[i] == '\v') && nprt[i])
		i++;
	if (nprt[i] == 43 || nprt[i] == 45)
	{
		if (nprt[i] == 45)
			neg = -1;
		i++;
	}
	while (nprt[i] >= 48 && nprt[i] <= 57 && nprt[i])
	{
		res = res * 10 + nprt[i] - 48;
		i++;
	}
	return ((int)res * neg);
}

int	math(int a, int b, char *dif)
{
	if (dif[0] == '+')
		return (a + b);
	else if (dif[0] == '-')
		return (a - b);
	else if (dif[0] == '*')
		return (a * b);
	else if (dif[0] == '/')
		return (a / b);
	else if (dif[0] == '%')
		return (a % b);
	return (0);
}

int	main(int argc, char **argv)
{
	int res;
	int res2;
	int l;

	if (argc == 4)
	{
		res = ft_atoi(argv[1]);
		res2 = ft_atoi(argv[3]);
		if (argv[2][0] == '/' && res2 == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		else if (argv[2][0] == '%' && res2 == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		else
			l = math(res, res2, argv[2]);
		ft_putnbr(l);
		ft_putchar('\n');
	}
	return (0);
}
