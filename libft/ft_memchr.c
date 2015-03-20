/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:28:45 by tauvray           #+#    #+#             */
/*   Updated: 2014/11/11 15:41:18 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned int	i;
	char			*s1;

	s1 = (char *)s;
	i = 0;
	str = NULL;
	while (str == NULL && i < n)
	{
		if (s1[i] == (char)c)
		{
			str = &s1[i];
		}
		i++;
	}
	return (str);
}
