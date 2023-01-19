/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:36:55 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/19 15:38:42 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted_check(t_list **head_a)
{
	t_list	*node;

	node = *head_a;
	while (node->next != NULL)
	{
		if (node->index > node->next->index)
			return (0);
		node = node->next;
	}
	return (1);
}
