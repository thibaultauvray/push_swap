/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 15:02:51 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/24 18:22:36 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				aff_op(char *res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		ft_if_aff_op(i, res);
		i++;
	}
	ft_putn();
}

t_pile				ft_if_op(int i, char *res, t_pile tmp)
{
	if (res[i] == 'b' && tmp.b != NULL)
		ft_sb(&tmp);
	if (res[i] == 'd' && tmp.b != NULL)
		ft_pa(&tmp);
	if (res[i] == 'f' && tmp.b != NULL)
		ft_rb(&tmp);
	if (res[i] == 'j' && tmp.b != NULL)
		ft_rrb(&tmp);
	if (res[i] == 'a')
		ft_sa(&tmp);
	if (res[i] == 'g')
		ft_ra(&tmp);
	if (res[i] == 'c')
		ft_ss(&tmp);
	if (res[i] == 'e')
		ft_pb(&tmp);
	if (res[i] == 'h')
		ft_rr(&tmp);
	if (res[i] == 'i')
		ft_rra(&tmp);
	if (res[i] == 'k')
		ft_rrr(&tmp);
	return (tmp);
}

int					ft_test(char *res, int ac, char **av)
{
	t_pile	tmp;
	int		i;
	int		s;
	int		t;

	s = 1;
	while (ft_is_opt(av[s]) == 1)
		s++;
	i = 0;
	tmp.a = full_pile(s, ac, av);
	tmp.b = NULL;
	while (res[i])
	{
		tmp = ft_if_op(i, res, tmp);
		i++;
	}
	t = ft_istri(tmp.a, tmp.b);
	free_list(tmp.a);
	free_list(tmp.b);
	return (t);
}

void				push_swap(int ac, char **av)
{
	int		i;
	int		ret;

	i = 1;
	ret = 0;
	while (ret == 0)
	{
		if (i == 1)
			ret = ft_brute_one(ac, av);
		else
			ret = ft_brute(i, ac, av);
		i++;
	}
}
