/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:20:49 by sschelti          #+#    #+#             */
/*   Updated: 2023/01/10 15:20:11 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i != argc)
	{
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (0);
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' || argv[i][j] <= '9' || argv[i][j] == '-'))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	if (duplicate_check(argc, argv) == 0)
		return (0);
	return (1);
}

int	duplicate_check(int argc, char **argv)
{
	int	i;
	int	k;

	i = 1;
	k = 1;
	while (i != argc)
	{
		while ((i - k) != 0)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[i - k]))
				return (0);
			k++;
		}
		k = 1;
		i++;
	}
	return (1);
}
