/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 16:37:39 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/24 18:34:55 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbr_int(int n)
{
	int res;

	res = 0;
	while (n >= 1)
	{
		n = n / 10;
		res++;
	}
	return (res);
}
