/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:34:46 by tauvray           #+#    #+#             */
/*   Updated: 2015/01/31 20:34:17 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void		*ptr;

	ptr = NULL;
	if (!size || !(ptr = malloc(size)))
		return (ptr);
	ft_memset(ptr, 0, size);
	return (ptr);
}
