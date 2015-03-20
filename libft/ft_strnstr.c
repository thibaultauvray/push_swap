/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:38:41 by tauvray           #+#    #+#             */
/*   Updated: 2014/11/11 16:11:25 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	if ((int)ft_strlen((char *)s2) > (int)ft_strlen((char *)s1))
		return (NULL);
	if (!s2)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[j] && s2[j] != '\0' && j != (int)n)
		{
			i++;
			j++;
		}
		if (s2[j] == '\0' && i < (int)n)
		{
			return ((char *)s1 + i - ft_strlen((char *)s2));
		}
		i++;
		j = 0;
	}
	return (0);
}
