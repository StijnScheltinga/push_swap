/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:35:01 by sschelti          #+#    #+#             */
/*   Updated: 2022/12/20 19:46:43 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(int value);
int		ft_atoi(const char *str);
void	ft_lstadd_back(t_list **head, t_list *new);
void	printlist(t_list *node);

#endif