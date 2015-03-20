/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 14:34:20 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/24 18:31:57 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int					ft_doublon(int j, char **av)
{
	int	i;

	i = 1;
	while (av[j])
	{
		while (av[i])
		{
			if (ft_strcmp(av[i], av[j]) == 0 && i != j)
			{
				return (1);
			}
			i++;
		}
		j++;
		i = 1;
	}
	return (0);
}

t_liste				*full_pile(int s, int ac, char **av)
{
	t_liste	*tmp;
	t_liste	*list;
	int		i;

	tmp = NULL;
	list = NULL;
	while (ac != s)
	{
		i = ft_atoi(av[ac - 1]);
		tmp = ft_lstnewi(i);
		ft_lstaddi(&list, tmp);
		tmp = NULL;
		ac--;
	}
	return (list);
}

int					main(int ac, char **av)
{
	int		opts;

	if (ac == 1)
	{
		ft_putendl_fd("usage : ./push_swap [number] [number] [...]", 2);
		exit (2);
	}
	else if (ft_errors_swap(av) == 1)
		ft_putendl_fd("Error", 2);
	else
	{
		ft_istrione(ac, av);
		opts = ft_opts(ac, av);
		if (opts == 1)
			push_swap_opts(ac, av);
		else
			push_swap(ac, av);
	}
	return (0);
}
