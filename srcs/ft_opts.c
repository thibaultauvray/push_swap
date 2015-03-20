/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 14:03:07 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/24 18:12:58 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_opt(char *av)
{
	if (ft_strcmp(av, "-v") == 0)
		return (1);
	return (0);
}

int		ft_opts(int ac, char **av)
{
	int	i;

	(void)ac;
	i = 1;
	if (av[1][0] != '-')
		return (0);
	while (av[1][i])
	{
		if (av[1][i] != 'v')
		{
			ft_put_error(av[1][i]);
			return (0);
		}
		i++;
	}
	return (1);
}
