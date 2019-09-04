/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:08:10 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/04 15:51:50 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_a(t_stack *stack)
{
	t_ilist *temp;

	if (stack->a)
	{
		temp = stack->a;
		while (temp->next)
		{
			if (temp->nbr > (temp->next)->nbr)
				return (0);
			temp = temp->next;
		}
	}
	return (1);
}
