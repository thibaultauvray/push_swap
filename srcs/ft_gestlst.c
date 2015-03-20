/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gestlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 17:28:50 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/17 17:46:48 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_liste		*ft_lstnewi(int content)
{
	t_liste	*liste;

	liste = (t_liste *)malloc(sizeof(t_liste));
	if (liste)
	{
		if (content)
		{
			liste->content = content;
		}
	}
	return (liste);
}

void		ft_lstaddi(t_liste **alst, t_liste *new)
{
	if (new)
	{
		new->next = *alst;
		*alst = new;
	}
}
