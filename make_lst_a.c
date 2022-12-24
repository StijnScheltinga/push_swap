/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mk_list_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stijn <stijn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:45:09 by stijn             #+#    #+#             */
/*   Updated: 2022/12/24 21:51:52 by stijn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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