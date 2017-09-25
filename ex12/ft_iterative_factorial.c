/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybitton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:18:11 by ybitton           #+#    #+#             */
/*   Updated: 2016/11/17 12:25:48 by ybitton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_factorial(int nb)
{
	int		i;
	int		f;
	int		fn;

	i = 1;
	f = 1;
	fn = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fn = f * i;
		if (fn / i != f)
			return (0);
		i++;
		f = fn;
	}
	return (f);
}
