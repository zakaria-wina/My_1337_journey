/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:28:45 by zwina             #+#    #+#             */
/*   Updated: 2021/08/25 14:32:06 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	i;
	int	nbr;

	nbr = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			nbr++;
		i++;
	}
	return (nbr);
}
