/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:54:32 by jjerde            #+#    #+#             */
/*   Updated: 2018/10/03 20:37:16 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		count;

	tmp = begin_list;
	count = 0;
	while (tmp)
	{
		tmp = tmp->next;
		++count;
	}
	return (count);
}
