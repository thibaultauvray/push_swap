/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/07 16:11:55 by tauvray           #+#    #+#             */
/*   Updated: 2014/11/11 13:55:09 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*str;

	str = NULL;
	i = ft_strlen((char *)src);
	str = (char *)malloc(sizeof(*src) * (i + 1));
	i = 0;
	if (str != NULL)
	{
		while (src[i] != '\0')
		{
			str[i] = src[i];
			i++;
		}
		return (str);
	}
	return (NULL);
}
