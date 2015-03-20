/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 17:11:59 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/23 13:42:55 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rrb(t_pile *t)
{
	t_liste	*head;
	t_liste	*tmp;

	if (t->b && t->b->next)
	{
		head = t->b;
		while (t->b->next->next)
		{
			t->b = t->b->next;
		}
		tmp = t->b->next;
		t->b->next = NULL;
		t->b = head;
		tmp->next = t->b;
		t->b = tmp;
	}
}
