/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:01:06 by sschelti          #+#    #+#             */
/*   Updated: 2022/12/22 17:54:26 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_list **head, int argc)
{
	t_list	*first_node;
	t_list	*check;
	int		n_loops;
	int		position;

	first_node = *head;
	check = *head;
	n_loops = 0;
	while (n_loops < (argc - 1))
	{
		position = 0;
		printf("%d", position);
		while (check->next != NULL)
		{
			check = check->next;
			if (first_node->value > check->value)
				position++;
		}
	first_node->position = position;
	printf("%d", position);
		set_first(head, first_node, check);
	n_loops++;
	}
}

void	set_first(t_list **head, t_list *first_node, t_list *check)
{
	t_list	*temp;
	t_list	*p_check;

	p_check = previous_check(head, check);
	temp = first_node->next;
	first_node->next = check;
	check->next = temp;
	*head = check;
	p_check->next = first_node;
}

t_list	*previous_check(t_list **head, t_list *check)
{
	t_list	*prev;

	prev = *head;
	while (prev != NULL && prev->next != check)
		prev = prev->next;
	if (prev->next == check)
		return (prev);
	else
		return (NULL);
}
