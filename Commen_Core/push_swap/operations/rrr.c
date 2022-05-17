/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:48:35 by zwina             #+#    #+#             */
/*   Updated: 2021/12/23 17:45:14 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(t_list **a, t_list **b, char c)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	if (c)
		ft_putstr_fd("rrr\n", 1);
}
