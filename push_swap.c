/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stijn <stijn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:32:35 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/08 21:14:03 by stijn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **head_a, t_list **head_b, int max_val)
{	
	int 	max_bits;
	int		i;
	int		j;
	t_list	*first_node;

	max_bits = 0;
	i = 0;
	j = 0;
	while((max_val >> max_bits) != 0)
	max_bits++;
	while(j != max_bits)
	{
		while (i <= max_val)
		{
			first_node = *head_a;
			if (((first_node->position >> j) & 1) == 0)
				push(head_a, head_b);
			else
				rotate(head_a);
			i++;	
		}
		push_a(head_b, head_a);
		i = 0;
		j++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;
	int		max_val;

	head_a = NULL;
	head_b = NULL;
	max_val = argc - 2;
	make_lst_a(&head_a, argc, argv);
	get_index(&head_a, argc);
	push_swap(&head_a, &head_b, max_val);
	// printf("%d max\n", max_val);
	printlist(head_a);
	printf("list B:\n");
	printlist(head_b);
	return (0);
}
