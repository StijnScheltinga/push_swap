/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:50:38 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/09 18:00:18 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_a(t_list **head_a)
{
	t_list	*first;

	first = *head_a;
	if (first->index > first->next->index)
		sa(head_a);
}

void	sort_two_b(t_list **head_b)
{
	t_list	*first;

	first = *head_b;
	if (first->index < first->next->index)
		sb(head_b);
}

void	sort_three(t_list **head_a)
{
	t_list	*first;

	first = *head_a;
	if (first->index > first->next->index
		&& first->next->index > find_last(head_a)->index)
		return ;
	if (first->index < first->next->index)
	{
		if (first->index > find_last(head_a)->index)
			rra(head_a);
		else if (first->next->index > find_last(head_a)->index)
		{
			sa(head_a);
			ra(head_a);
		}
	}
	else
	{
		if (first->index < first->next->next->index)
			sa(head_a);
		else if (first->next->index > first->next->next->index)
		{
			sa(head_a);
			rra(head_a);
		}
		else
			ra(head_a);
	}
}

void	sort_four(t_list **head_a, t_list **head_b)
{
	t_list	*first_a;
	int		i;

	i = 0;
	while (i != 4)
	{
		first_a = *head_a;
		if (first_a->index == 0 || first_a->index == 1)
			pb(head_a, head_b);
		else
			ra(head_a);
		i++;
	}
	sort_two_a(head_a);
	sort_two_b(head_b);
	pa(head_b, head_a);
	pa(head_b, head_a);
}

void	sort_five(t_list **head_a, t_list **head_b)
{
	t_list	*first_a;
	int		i;

	i = 0;
	while (i != 5)
	{
		first_a = *head_a;
		if (first_a->index == 0 || first_a->index == 1)
			pb(head_a, head_b);
		else
			ra(head_a);
		i++;
	}
	sort_three(head_a);
	sort_two_b(head_b);
	pa(head_b, head_a);
	pa(head_b, head_a);
}
