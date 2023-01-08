/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stijn <stijn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:14:17 by stijn             #+#    #+#             */
/*   Updated: 2023/01/08 21:13:46 by stijn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **head)
{
	t_list	*last;
	t_list	*first_node;
	
	last = find_last(head);
	first_node = *head;
	*head = first_node->next;
	first_node->next = NULL;
	last->next = first_node;
}

void    push(t_list **head_src, t_list **head_dest)
{
    t_list   *first_node;

    if (!*head_src)
        return;
    first_node = *head_src;
    *head_src = first_node->next;
    first_node->next = *head_dest;
    *head_dest = first_node;
}

void    reverse_rotate(t_list **head)
{
    t_list	*last;
	t_list	*first_node;
	t_list  *before_last;
    
	last = find_last(head);
	first_node = *head;
    before_last = *head;
    while (before_last->next != last)
        before_last = before_last->next;
    before_last->next = NULL;
    *head = last;
    last->next = first_node;
}

void    push_a(t_list **head_b, t_list **head_a)
{
    int     i;
    int     j;
    t_list  *index;
    
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
        push(head_b, head_a);
        j++;
    }
}
