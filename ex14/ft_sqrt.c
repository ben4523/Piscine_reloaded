/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybitton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:43:33 by ybitton           #+#    #+#             */
/*   Updated: 2016/11/22 14:23:23 by ybitton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SQ(x) (x * x)

int			ft_sqrt(int nb)
{
	int		guess;
	int		low;
	int		high;

	low = 0;
	high = 46342;
	while (1)
	{
		guess = (high + low) / 2;
		if (SQ(guess) > nb)
			high = guess;
		else if (SQ(guess) < nb)
			low = guess;
		if (SQ(guess) == nb)
			return (guess);
		if ((high - low) <= 1)
		{
			return (0);
		}
	}
}
