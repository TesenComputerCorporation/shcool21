/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 21:25:30 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/27 21:33:30 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i > j)
	{
		i = i + j;
		j = i - j;
		i = i - j;
	}
	if (i > k)
	{
		i = i + k;
		k = i - k;
		i = i - k;
	}
	if (j > k)
	{
		j = j + k;
		k = j - k;
		j = j - k;
	}
	return (j);
}
