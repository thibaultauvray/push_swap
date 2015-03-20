/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 14:07:42 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/16 17:37:02 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*liste;

	liste = (t_list *)malloc(sizeof(t_list));
	if (liste)
	{
		if (content)
		{
			liste->content = malloc(sizeof(content) * content_size);
			liste->content = ft_memcpy(liste->content, content, content_size);
			liste->content_size = content_size;
		}
		else
		{
			liste->content = NULL;
			liste->content_size = 0;
		}
		liste->next = NULL;
	}
	return (liste);
}
