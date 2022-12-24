/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stijn <stijn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:37:20 by sschelti          #+#    #+#             */
/*   Updated: 2022/12/24 20:27:25 by stijn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlist(t_list *node)
{
	while (node != NULL)
	{
		printf("%d\n", node->value);
		node = node->next;
	}
}

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*last;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

t_list	*find_last(t_list **head)
{
	t_list	*last;

	last = *head;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
