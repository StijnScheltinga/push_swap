/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:32:35 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/17 14:04:49 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **head_a, t_list **head_b, int max_val)
{	
	int		max_bits;
	int		i;
	int		j;
	t_list	*first_node;

	max_bits = 0;
	i = 0;
	j = 0;
	while ((max_val >> max_bits) != 0)
		max_bits++;
	while (j != max_bits)
	{
		while (i <= max_val)
		{
			first_node = *head_a;
			if (((first_node->index >> j) & 1) == 0)
				pb(head_a, head_b);
			else
				ra(head_a);
			i++;
		}
		push_a(head_b, head_a);
		i = 0;
		j++;
	}
}

void	sort_type(t_list **head_a, t_list **head_b, int argc)
{
	int		max_val;

	max_val = argc - 2;
	if (argc == 3)
		sort_two_a(head_a);
	else if (argc == 4)
		sort_three(head_a);
	else if (argc == 5)
		sort_four(head_a, head_b);
	else if (argc == 6)
		sort_five(head_a, head_b);
	else if (argc > 6)
		push_swap(head_a, head_b, max_val);
}

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;
	int		check;

	head_a = NULL;
	head_b = NULL;
	check = input_check(argc, argv);
	if (argc == 1)
		return (0);
	if (check == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	make_lst_a(&head_a, argc, argv);
	get_index(&head_a, argc);
	sort_type(&head_a, &head_b, argc);
	free_lst_a(&head_a);
}
