/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 17:47:46 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/13 11:19:07 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "mlx.h"
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"

# define CTE 0.82
# define WIDTH 1000
# define HEIGHT 1000
# define TWIDTH 3
# define THEIGHT 4
# define MLX_BIG_ENDIAN 1

typedef struct		s_env
{
	void			*win;
	void			*mlx;
	void			*img;
	void			*edit;
	char			***tab;
	int				len;
	int				marg;
	int				x;
	int				y;
	int				c;
	int				bpx;
	int				endiant;
	int				szl;
	double			z;
}					t_env;

typedef struct		s_point
{
	int				x;
	int				y;
	int				z;
}					t_point;

typedef struct		s_bres
{
	int				w;
	int				h;
	int				dx1;
	int				dy1;
	int				dx2;
	int				dy2;
	int				longest;
	int				shortest;
	int				numerator;
	int				i;
}					t_bres;

typedef unsigned int	t_uint32;

void				ft_error_nofile();
void				pxl_to_img(t_env *e, int x, int y, t_uint32 color);
void				ft_errors_valid(char *str);
void				draw_tab(t_env *e);
void				draw_line(t_point p, t_point p2, t_env *e);
void				ft_free(char ***tab);
int					ft_max_width(t_env e);
int					ft_max_height(t_env e);
int					key_hook(int keycode, t_env *e);
int					key_hook2(int keycode, t_env *e);
int					expose_hook(t_env *e);
t_env				initiz_env_e(t_env e);

int					loop_hook(t_env *e);
void				draw_tab3(t_env *e);
int					expose_hook(t_env *e);
#endif
