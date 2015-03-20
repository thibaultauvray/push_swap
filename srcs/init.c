/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 18:23:32 by tauvray           #+#    #+#             */
/*   Updated: 2015/03/13 15:53:14 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char		*init(int i)
{
	char	*res;
	int		p;

	res = NULL;
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		ft_errors("Can't malloc 'res'");
	p = 0;
	while (i != p)
	{
		res[p] = 'a';
		p++;
	}
	res[p] = '\0';
	return (res);
}

int			ft_brute_one(int ac, char **av)
{
	char	*res;
	int		i;

	i = 0;
	res = init(1);
	while (res[i] != 'k')
	{
		if (ft_test(res, ac, av) == 1)
		{
			aff_op(res);
			return (1);
		}
		res[i]++;
	}
	free(res);
	return (0);
}

void		ft_put_error(char av)
{
	ft_putstr_fd("push_swap : Illegal option -- ", 2);
	ft_putchar_fd(av, 2);
	ft_putendl_fd("", 2);
	ft_putstr_fd("usage : push_swap [-", 2);
	ft_putstr_fd(OPTIONS, 2);
	ft_putendl_fd("] [number...]", 2);
}

void		free_list(t_liste *a)
{
	t_liste *tmp;

	while (a)
	{
		tmp = a->next;
		free(a);
		a = tmp;
	}
}

void		ft_if_aff_op(int i, char *res)
{
	if (res[i] == 'a')
		ft_putstr("sa ");
	if (res[i] == 'b')
		ft_putstr("sb ");
	if (res[i] == 'c')
		ft_putstr("ss ");
	if (res[i] == 'd')
		ft_putstr("pa ");
	if (res[i] == 'e')
		ft_putstr("pb ");
	if (res[i] == 'f')
		ft_putstr("rb ");
	if (res[i] == 'g')
		ft_putstr("ra ");
	if (res[i] == 'h')
		ft_putstr("rr ");
	if (res[i] == 'i')
		ft_putstr("rra ");
	if (res[i] == 'j')
		ft_putstr("rrb ");
	if (res[i] == 'k')
		ft_putstr("rrr ");
}
