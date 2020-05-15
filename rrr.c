/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:00:22 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 14:00:57 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack **stack)
{
	rra(&*stack);
	rrb(&*stack);
}

void	rrr_wo(t_stack **stack)
{
	ft_putendl("rrr");
	rrr(&*stack);
}
