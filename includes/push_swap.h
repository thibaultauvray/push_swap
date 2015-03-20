/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 17:50:06 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/24 18:18:04 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# define OPTIONS "v"

typedef struct		s_liste
{
	int				content;
	struct s_liste	*next;
}					t_liste;

typedef struct		s_pile
{
	t_liste			*b;
	t_liste			*a;
}					t_pile;

typedef struct		s_brute
{
	char	*res;
	int		a;
}					t_brute;

t_liste				*ft_lstnewi(int content);
void				ft_lstaddi(t_liste **alst, t_liste *new);
void				print_list(t_liste *a, t_liste *b);
int					ft_istri(t_liste *a, t_liste *b);

void				ft_sa(t_pile *t);
void				ft_ra(t_pile *t);
void				ft_rra(t_pile *t);
void				ft_rrb(t_pile *t);
void				ft_pb(t_pile *t);
void				ft_pa(t_pile *t);
void				ft_rb(t_pile *t);
void				ft_sb(t_pile *t);
void				ft_ss(t_pile *t);
void				ft_rr(t_pile *t);
void				ft_rrr(t_pile *t);

void				ft_bf(int ac, char **av);
t_liste				*full_pile(int s, int ac, char **av);
void				push_swap(int ac, char **av);
char				*init(int i);
int					ft_brute_one(int ac, char **av);
int					ft_test(char *res, int ac, char **av);
void				aff_op(char *res);
int					ft_brute(int i, int ac, char **av);

void				push_swap_opts(int ac, char **av);
int					ft_opts(int ac, char **av);
int					ft_brute_one_v(int ac, char **av);
int					ft_brute_v(int i, int ac, char **av);
void				ft_if_aff_op(int i, char *res);
t_pile				ft_if_aff_opv(int i, char *res, t_pile tmp);
void				aff_opv(char *res, int ac, char **av);
int					ft_is_opt(char *av);

void				free_list(t_liste *a);
void				ft_put_error(char av);
int					ft_errors_swap(char **av);
int					ft_doublon(int j, char **av);
void				ft_istrione(int ac, char **av);
#endif
