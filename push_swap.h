/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:35:01 by sschelti          #+#    #+#             */
/*   Updated: 2022/12/22 17:13:34 by sschelti         ###   ########.fr       */
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
int		ft_atoi(const char *str);
void	ft_lstadd_back(t_list **head, t_list *new);
void	printlist(t_list *node);
void	get_index(t_list **head, int argc);
void	set_first(t_list **head, t_list *first_node, t_list *check);
t_list	*previous_check(t_list **head, t_list *check);

#endif