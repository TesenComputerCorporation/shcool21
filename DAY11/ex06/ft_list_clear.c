/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:09:38 by jjerde            #+#    #+#             */
/*   Updated: 2018/10/03 21:29:35 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*link;
	t_list	*tmp;

	link = *begin_list;
	tmp = NULL;
	while (link)
	{
		if (link->next)
			tmp = link->next;
		else
			tmp = NULL;
		free(link);
		link = tmp;
	}
}
