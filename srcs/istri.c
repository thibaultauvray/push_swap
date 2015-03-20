/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istri.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 18:15:09 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/24 15:39:26 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_istri(t_liste *a, t_liste *b)
{
	if (b)
		return (0);
	while (a)
	{
		if (a->next)
		{
			if ((a->content) > (a->next->content))
				return (0);
		}
		a = a->next;
	}
	return (1);
}

void	ft_istrione(int ac, char **av)
{
	t_pile	t;
	int		s;

	s = 1;
	while (ft_is_opt(av[s]) == 1)
		s++;
	t.a = full_pile(s, ac, av);
	t.b = NULL;
	if (ft_istri(t.a, t.b) == 1)
	{
		ft_putn();
		free_list(t.a);
		free_list(t.b);
		exit (1);
	}
}
