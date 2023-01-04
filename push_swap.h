/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stijn <stijn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:35:01 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/04 13:24:37 by stijn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	int				position;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(int value);
t_list	*find_last(t_list **head);
int		ft_atoi(const char *str);
void	ft_lstadd_back(t_list **head, t_list *new);
void	printlist(t_list *node);
void	get_index(t_list **head, int argc);
void	rotate(t_list **head);
void	push(t_list **head_a, t_list **head_b);
void    make_lst_a(t_list **head_a, int argc, char **argv);
void	push_swap(t_list **head_a, t_list **head_b);
void    reverse_rotate(t_list **head);

#endif