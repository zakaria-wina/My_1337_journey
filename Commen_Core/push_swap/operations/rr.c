/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:46:22 by zwina             #+#    #+#             */
/*   Updated: 2021/12/23 17:44:27 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rr(t_list **a, t_list **b, char c)
{
	ft_ra(a, 0);
	ft_rb(b, 0);
	if (c)
		ft_putstr_fd("rr\n", 1);
}
