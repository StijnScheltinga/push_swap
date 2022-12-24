/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stijn <stijn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:01:06 by sschelti          #+#    #+#             */
/*   Updated: 2022/12/24 20:32:37 by stijn            ###   ########.fr       */
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
		while (check != NULL)
		{
			if (first_node->value > check->value)
				position++;
			check = check->next;
		}
	first_node->position = position;
		set_first_to_last(head, first_node);
	first_node = *head;
	check = *head;
	n_loops++;
	}
}

void	set_first_to_last(t_list **head, t_list *first_node)
{
	t_list	*last;
	
	last = find_last(head);
	*head = first_node->next;
	first_node->next = NULL;
	last->next = first_node;
}
