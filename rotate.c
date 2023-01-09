/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:14:17 by stijn             #+#    #+#             */
/*   Updated: 2023/01/09 16:18:56 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **head_a)
{
	t_list	*last;
	t_list	*first_node;

	last = find_last(head_a);
	first_node = *head_a;
	*head_a = first_node->next;
	first_node->next = NULL;
	last->next = first_node;
	printf("ra\n");
}

void	rb(t_list **head_b)
{
	t_list	*last;
	t_list	*first_node;

	last = find_last(head_b);
	first_node = *head_b;
	*head_b = first_node->next;
	first_node->next = NULL;
	last->next = first_node;
	printf("rb\n");
}

void	rotate(t_list **head_b)
{
	t_list	*last;
	t_list	*first_node;

	last = find_last(head_b);
	first_node = *head_b;
	*head_b = first_node->next;
	first_node->next = NULL;
	last->next = first_node;
}

void	rra(t_list **head_a)
{
	t_list	*last;
	t_list	*first_node;
	t_list	*before_last;

	last = find_last(head_a);
	first_node = *head_a;
	before_last = *head_a;
	while (before_last->next != last)
		before_last = before_last->next;
	before_last->next = NULL;
	*head_a = last;
	last->next = first_node;
	printf("rra\n");
}

void	rrb(t_list **head_b)
{
	t_list	*last;
	t_list	*first_node;
	t_list	*before_last;

	last = find_last(head_b);
	first_node = *head_b;
	before_last = *head_b;
	while (before_last->next != last)
		before_last = before_last->next;
	before_last->next = NULL;
	*head_b = last;
	last->next = first_node;
	printf("rrb\n");
}
