/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_v.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 15:42:35 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/23 17:53:10 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_test_testv(char *res, int ac, char **av)
{
	if (ft_test(res, ac, av) == 1)
	{
		aff_opv(res, ac, av);
		free(res);
		exit (1);
	}
}

int			ft_brute_one_v(int ac, char **av)
{
	char	*res;
	int		i;

	i = 0;
	res = init(1);
	while (res[i] != 'l')
	{
		if (ft_test(res, ac, av) == 1)
		{
			aff_opv(res, ac, av);
			return (1);
		}
		res[i]++;
	}
	free(res);
	return (0);
}

t_brute		ft_while_av(t_brute a, int ac, char **av)
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
			ft_test_testv(a.res, ac, av);
			break ;
		}
	}
	return (a);
}

int			ft_brute_v(int i, int ac, char **av)
{
	t_brute	a;

	a.res = init(i);
	while (a.res[0] != 'k' + 1)
	{
		a.a = i - 1;
		while (a.res[a.a] != 'k')
		{
			ft_test_testv(a.res, ac, av);
			a.res[a.a]++;
		}
		a = ft_while_av(a, ac, av);
		if (a.a == -15)
		{
			free(a.res);
			return (0);
		}
		a.res[i - 1] = 'a';
	}
	free(a.res);
	return (0);
}
