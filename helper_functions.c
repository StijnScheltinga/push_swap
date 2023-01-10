/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:37:20 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/10 15:02:24 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlist(t_list *node)
{
	while (node != NULL)
	{
		ft_printf("%d\n", node->value);
		node = node->next;
	}
}

void	free_lst_a(t_list **head_a)
{
	t_list	*first;
	t_list	*temp;

	while (*head_a != NULL)
	{
		first = *head_a;
		temp = first->next;
		free(first);
		*head_a = temp;
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

void	make_lst_a(t_list **head_a, int argc, char **argv)
{
	int		i;
	t_list	*list_a;

	i = 1;
	while (i < argc)
	{
		list_a = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(head_a, list_a);
		i++;
	}
}
