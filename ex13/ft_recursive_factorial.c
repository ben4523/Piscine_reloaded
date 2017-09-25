/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybitton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:30:30 by ybitton           #+#    #+#             */
/*   Updated: 2016/11/17 12:33:24 by ybitton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_factorial(int nb)
{
	int		f;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		f = ft_recursive_factorial(nb - 1);
		if ((nb * f) / nb != f)
			return (0);
		return (nb * f);
	}
}
