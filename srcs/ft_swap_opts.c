/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_opts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 14:44:42 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/24 18:08:07 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile			ft_if2(int i, char *res, t_pile tmp)
{
	if (res[i] == 'a')
	{
		ft_sa(&tmp);
		ft_putendl("sa ");
	}
	if (res[i] == 'b')
	{
		ft_sb(&tmp);
		ft_putendl("sb ");
	}
	if (res[i] == 'c')
	{
		ft_ss(&tmp);
		ft_putendl("ss ");
	}
	if (res[i] == 'd')
	{
		ft_pa(&tmp);
		ft_putendl("pa ");
	}
	return (tmp);
}

t_pile			ft_if3(int i, char *res, t_pile tmp)
{
	if (res[i] == 'e')
	{
		ft_pb(&tmp);
		ft_putendl("pb ");
	}
	if (res[i] == 'f')
	{
		ft_rb(&tmp);
		ft_putendl("rb ");
	}
	if (res[i] == 'g')
	{
		ft_ra(&tmp);
		ft_putendl("ra ");
	}
	if (res[i] == 'h')
	{
		ft_rr(&tmp);
		ft_putendl("rr ");
	}
	return (tmp);
}

t_pile			ft_if_aff_opv(int i, char *res, t_pile tmp)
{
	ft_putendl("=================================================");
	ft_putstr("\033[31m");
	tmp = ft_if2(i, res, tmp);
	tmp = ft_if3(i, res, tmp);
	if (res[i] == 'i')
	{
		ft_rra(&tmp);
		ft_putendl("rra ");
	}
	if (res[i] == 'j')
	{
		ft_rrb(&tmp);
		ft_putendl("rrb ");
	}
	if (res[i] == 'k')
	{
		ft_rrr(&tmp);
		ft_putendl("rrr ");
	}
	ft_putstr("\033[0m");
	ft_putn();
	print_list(tmp.a, tmp.b);
	return (tmp);
}

void			aff_opv(char *res, int ac, char **av)
{
	int		i;
	t_pile	aff;
	int		s;

	s = 1;
	while (ft_is_opt(av[s]) == 1)
		s++;
	aff.a = full_pile(s, ac, av);
	aff.b = NULL;
	i = 0;
	while (res[i])
	{
		aff = ft_if_aff_opv(i, res, aff);
		i++;
	}
	free_list(aff.a);
	free_list(aff.b);
	ft_putn();
}

void			push_swap_opts(int ac, char **av)
{
	int		i;
	int		ret;

	i = 1;
	ret = 0;
	while (ret == 0)
	{
		if (i == 1)
			ret = ft_brute_one_v(ac, av);
		else
			ret = ft_brute_v(i, ac, av);
		i++;
	}
}
