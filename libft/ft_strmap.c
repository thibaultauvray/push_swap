/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:37:49 by tauvray           #+#    #+#             */
/*   Updated: 2014/11/08 14:53:48 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	size_t	i;

	i = 0;
	if (s && f)
	{
		map = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
		while (i < ft_strlen((char *)s))
		{
			map[i] = f((s[i]));
			i++;
		}
	}
	return (map);
}
