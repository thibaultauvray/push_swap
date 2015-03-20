/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:19:34 by tauvray           #+#    #+#             */
/*   Updated: 2015/01/31 20:28:44 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_sign(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && (str[i] < 49 || str[i] > 57))
	{
		if (str[i] == 45 && ft_isdigit(str[i + 1]) != 0)
		{
			return (-1);
		}
		else if ((str[i] == 45 || str[i] == 43) &&
				(str[i + 1] == 45 || str[i + 1] == 43))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int				ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	sign = ft_sign(str);
	res = 0;
	i = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '-' || str[i] == '+'
			|| str[i] == ' ')
	{
		if ((str[i] == '-' || str[i] == '+') && str[i + 1] == ' ')
			return (0);
		i++;
	}
	while (ft_isdigit(str[i]) != 0)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
