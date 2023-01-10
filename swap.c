/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:07:42 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/10 14:11:33 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **head_a)
{
	t_list	*first;
	t_list	*second;

	first = *head_a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head_a = second;
	ft_printf("sa\n");
}

void	sb(t_list **head_a)
{
	t_list	*first;
	t_list	*second;

	first = *head_a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head_a = second;
	ft_printf("sb\n");
}
