/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:39:05 by tauvray           #+#    #+#             */
/*   Updated: 2014/11/06 11:13:19 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int lenght;

	lenght = ft_strlen((char *)s);
	while (s[lenght] != c && lenght != 0)
	{
		lenght--;
	}
	if (s[lenght] == c)
		return (&(((char *)s)[lenght]));
	else
		return (NULL);
}
