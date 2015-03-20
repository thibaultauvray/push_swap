/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:09:08 by tauvray           #+#    #+#             */
/*   Updated: 2014/12/22 13:51:28 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	if ((int)ft_strlen((char *)s2) > (int)ft_strlen((char *)s1))
		return (NULL);
	else if (!s2 || ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[j] && s2[j] != '\0')
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
		{
			return ((char *)s1 + i - ft_strlen((char *)s2));
		}
		i++;
		j = 0;
	}
	return (0);
}
