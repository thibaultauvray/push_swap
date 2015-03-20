/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 18:44:28 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/24 18:26:41 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_isint(int i, char **av)
{
	int	j;

	j = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			if (av[i][j] == '-')
				j++;
			if (ft_isdigit(av[i][j]) == 0)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		ft_isbig_neg(char *av)
{
	if (ft_strlen(av) >= 12)
		return (1);
	if (ft_strlen(av) == 11)
	{
		if (av[1] > '2' || av[2] > '1')
			return (1);
		if (av[3] > '4')
			return (1);
		if (av[4] > '7')
			return (1);
		if (av[5] > '4')
			return (1);
		if (av[6] > '8')
			return (1);
		if (av[7] > '3')
			return (1);
		if (av[8] > '6')
			return (1);
		if (av[9] > '4')
			return (1);
		if (av[10] > '8')
			return (1);
	}
	return (0);
}

int		ft_isbig(char *av)
{
	if (ft_strlen(av) >= 11)
		return (1);
	if (ft_strlen(av) == 10)
	{
		if (av[0] > '2' || av[1] > '1')
			return (1);
		if (av[2] > '4')
			return (1);
		if (av[3] > '7')
			return (1);
		if (av[4] > '4')
			return (1);
		if (av[5] > '8')
			return (1);
		if (av[6] > '3')
			return (1);
		if (av[7] > '6')
			return (1);
		if (av[8] > '4')
			return (1);
		if (av[9] > '7')
			return (1);
	}
	return (0);
}

int		ft_errors_swap(char **av)
{
	int	i;
	int	er;

	i = 1;
	er = 0;
	while (ft_is_opt(av[i]) == 1)
		i++;
	if (ft_doublon(i, av) == 1)
		return (1);
	if (ft_isint(i, av) == 1)
		return (1);
	while (av[i])
	{
		if (av[i][0] == '-')
			er = ft_isbig_neg(av[i]);
		else
			er = ft_isbig(av[i]);
		if (er == 1)
			return (1);
		i++;
	}
	return (0);
}
