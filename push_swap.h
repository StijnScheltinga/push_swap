/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stijn <stijn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:35:01 by sschelti          #+#    #+#             */
/*   Updated: 2022/12/24 20:52:05 by stijn            ###   ########.fr       */
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
void	set_first_to_last(t_list **head, t_list *first_node);
void    make_lst_a(t_list **head_a, int argc, char **argv);

#endif