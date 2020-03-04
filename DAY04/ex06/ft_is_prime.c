/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 17:22:41 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/22 17:26:31 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int tr;
	int stop;

	stop = 0;
	tr = 2;
	while (stop == 0)
	{
		if (nb > 1 && nb < tr * 2)
		{
			stop = 1;
			return (1);
		}
		else if (nb <= 1 || nb % tr == 0)
		{
			stop = 1;
			return (0);
		}
		else
		{
			tr += 1;
		}
	}
}