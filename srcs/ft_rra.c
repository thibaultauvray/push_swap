/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 12:23:17 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/23 13:42:55 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rra(t_pile *t)
{
	t_liste	*head;
	t_liste	*tmp;

	if (t->a && t->a->next)
	{
		head = t->a;
		while (t->a->next->next)
		{
			t->a = t->a->next;
		}
		tmp = t->a->next;
		t->a->next = NULL;
		t->a = head;
		tmp->next = t->a;
		t->a = tmp;
	}
}
