/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 17:02:13 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/23 14:09:05 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rb(t_pile *t)
{
	t_liste	*tmp;
	t_liste *head;

	if (t->b && t->b->next)
	{
		tmp = t->b;
		t->b = t->b->next;
		head = t->b;
		tmp->next = NULL;
		while (t->b->next)
		{
			t->b = t->b->next;
		}
		t->b->next = tmp;
		t->b = head;
	}
}
