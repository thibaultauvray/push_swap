/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brute.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 10:59:20 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/24 18:22:36 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_test_test(char *res, int ac, char **av)
{
	if (ft_test(res, ac, av) == 1)
	{
		aff_op(res);
		free(res);
		res = NULL;
		exit (1);
	}
}

t_brute		ft_while_a(t_brute a, int ac, char **av)
{
	while (a.a > 0)
	{
		if (a.res[a.a - 1] == 'k')
		{
			if (!a.res[a.a - 2])
			{
				a.a = -15;
				return (a);
			}
			a.res[a.a - 1] = 'a';
			a.a--;
		}
		else
		{
			a.res[a.a - 1]++;
			a.res[a.a] = 'a';
			ft_test_test(a.res, ac, av);
			break ;
		}
	}
	return (a);
}

int			ft_brute(int i, int ac, char **av)
{
	t_brute	a;

	a.res = init(i);
	while (a.res[0] != 'l')
	{
		a.a = i - 1;
		while (a.res[a.a] != 'l')
		{
			ft_test_test(a.res, ac, av);
			a.res[a.a]++;
		}
		a = ft_while_a(a, ac, av);
		if (a.a == -15)
		{
			free(a.res);
			return (0);
		}
		a.res[i - 1] = 'a';
	}
	free(a.res);
	a.res = NULL;
	return (0);
}
