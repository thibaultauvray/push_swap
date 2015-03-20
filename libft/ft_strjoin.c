/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:28:48 by tauvray           #+#    #+#             */
/*   Updated: 2014/11/16 18:11:03 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l;
	char	*join;

	if (!s1 && s2)
		return (ft_strdup(s2));
	else if (s1 && !s2)
		return (ft_strdup(s2));
	else if (s1 && s2)
	{
		l = ft_strlen(s1) + ft_strlen(s2);
		if (!(join = (char *)malloc(sizeof(char) * (l + 1))))
			return (NULL);
		ft_strcpy(join, s1);
		ft_strcat(join, s2);
	}
	return (join);
}
