/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:03:23 by tauvray           #+#    #+#             */
/*   Updated: 2014/11/18 16:57:07 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	if (s)
	{
		i = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
		if (s[i] == c)
			return (&(((char *)s)[i]));
		else
			return (NULL);
	}
	return (NULL);
}
