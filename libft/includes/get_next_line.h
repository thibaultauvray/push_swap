/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:32:45 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/14 14:07:49 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 150

int					get_next_line(int const fd, char **line);

typedef struct		s_gnl
{
	char			buf[BUFF_SIZE + 1];
	int				ret;
}					t_gnl;

typedef struct		s_read
{
	int				size;
	int				index;
	int				fd;
	char			*read;
	struct s_read	*next;
}					t_read;

#endif
