/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 03:04:02 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/28 03:09:45 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int bb;
	int cc;
	int dd;

	bb = *b;
	dd = ****d;
	cc = *******c;
	*******c = ***a;
	****d = cc;
	*b = dd;
	***a = bb;
}