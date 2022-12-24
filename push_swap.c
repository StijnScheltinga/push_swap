/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stijn <stijn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:32:35 by sschelti          #+#    #+#             */
/*   Updated: 2022/12/24 20:31:08 by stijn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_list	*list_a;
	t_list	*head_a;

	i = 1;
	head_a = NULL;
	while (i < argc)
	{
		list_a = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(&head_a, list_a);
		i++;
	}
	get_index(&head_a, argc);
	return (0);
}
