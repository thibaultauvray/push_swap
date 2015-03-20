/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 17:59:08 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/21 18:02:34 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				print_list(t_liste *a, t_liste *b)
{
	ft_putendl("     PILE A\t\t\t      PILE B");
	ft_putendl("----------------\t\t----------------");
	while (a || b)
	{
		ft_putstr("|\t");
		if (a)
			ft_putnbr(a->content);
		ft_putstr("\t|");
		ft_putstr("\t\t|\t ");
		if (b)
			ft_putnbr(b->content);
		ft_putstr("\t|");
		ft_putn();
		ft_putendl("----------------\t\t----------------");
		if (a)
			a = a->next;
		if (b)
			b = b->next;
	}
}
