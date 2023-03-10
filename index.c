/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:01:06 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/09 14:50:50 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_list **head_a, int argc)
{
	t_list	*first_node;
	t_list	*check;
	int		n_loops;
	int		index;

	first_node = *head_a;
	check = *head_a;
	n_loops = 0;
	while (n_loops < (argc - 1))
	{
		index = 0;
		while (check != NULL)
		{
			if (first_node->value > check->value)
				index++;
			check = check->next;
		}
	first_node->index = index;
		rotate(head_a);
	first_node = *head_a;
	check = *head_a;
	n_loops++;
	}
}
