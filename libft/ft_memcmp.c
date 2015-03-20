/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:58:54 by tauvray           #+#    #+#             */
/*   Updated: 2014/11/06 10:53:28 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		res;

	res = 0;
	i = 0;
	while (res == 0 && i < n)
	{
		res = ((char *)s1)[i] - ((char *)s2)[i];
		i++;
	}
	return (res);
}
