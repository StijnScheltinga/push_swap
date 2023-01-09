/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:57:27 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/09 16:11:09 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **head_a, t_list **head_b)
{
	t_list	*first_node;

	if (!*head_a)
		return ;
	first_node = *head_a;
	*head_a = first_node->next;
	first_node->next = *head_b;
	*head_b = first_node;
	printf("pb\n");
}

void	pa(t_list **head_b, t_list **head_a)
{
	t_list	*first_node;

	if (!*head_b)
		return ;
	first_node = *head_b;
	*head_b = first_node->next;
	first_node->next = *head_a;
	*head_a = first_node;
	printf("pa\n");
}

void	push_a(t_list **head_b, t_list **head_a)
{
	int		i;
	int		j;
	t_list	*index;

	i = 0;
	j = 0;
	index = *head_b;
	while (index != NULL)
	{
		i++;
		index = index->next;
	}
	while (j != i)
	{
		pa(head_b, head_a);
		j++;
	}
}
