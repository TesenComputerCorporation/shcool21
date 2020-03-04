/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:47:13 by jjerde            #+#    #+#             */
/*   Updated: 2018/10/03 22:20:50 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*link1;
	t_list	*link2;
	t_list	*link3;

	link1 = *begin_list;
	if (!link1 || !(link1->next))
		return ;
	link2 = link1->next;
	link3 = link2->next;
	link1->next = NULL;
	link2->next = link1;
	while (link2->next)
	{
		link1 = link2;
		link2 = link3;
		link3 = link3->next;
		link2->next = link1;
	}
	*begin_list = link2;
}
