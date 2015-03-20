/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 18:47:27 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/23 13:42:56 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_ra(t_pile *t)
{
	t_liste	*tmp;
	t_liste *head;

	if (t->a && t->a->next)
	{
		tmp = t->a;
		t->a = t->a->next;
		head = t->a;
		tmp->next = NULL;
		while (t->a->next)
		{
			t->a = t->a->next;
		}
		t->a->next = tmp;
		t->a = head;
	}
}
