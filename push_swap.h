/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:35:01 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/10 14:56:51 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(int value);
t_list		*find_last(t_list **head);
long long	ft_atoi(const char *str);
void		ft_lstadd_back(t_list **head, t_list *new);
void		printlist(t_list *node);
void		free_lst_a(t_list **head_a);
void		get_index(t_list **head, int argc);
void		ra(t_list **head_a);
void		rb(t_list **head_b);
void		rotate(t_list **head_b);
void		pa(t_list **head_a, t_list **head_b);
void		pb(t_list **head_a, t_list **head_b);
void		make_lst_a(t_list **head_a, int argc, char **argv);
void		push_swap(t_list **head_a, t_list **head_b, int max_val);
void		rra(t_list **head_a);
void		rrb(t_list **head_b);
void		push_a(t_list **head_b, t_list **head_a);
void		sa(t_list **head_a);
void		sb(t_list **head_b);
void		sort_three(t_list **head_a);
void		sort_two_a(t_list **head_a);
void		sort_two_b(t_list **head_b);
void		sort_four(t_list **head_a, t_list **head_b);
void		sort_five(t_list **head_a, t_list **head_b);
int			input_check(int argc, char **argv);
int			duplicate_check(int argc, char **argv);
int			ft_printf(const char *str, ...);

#endif