/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybitton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:19:19 by ybitton           #+#    #+#             */
/*   Updated: 2016/11/21 15:12:24 by ybitton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				*ft_range(int min, int max)
{
	int			nbr_nombre;
	int			*final_val;
	int			i;

	if (min >= max)
		return (NULL);
	nbr_nombre = (max - min) + 2;
	final_val = (int*)malloc(sizeof(*final_val) * (nbr_nombre + 1));
	i = 0;
	final_val[i] = min;
	while (i < nbr_nombre - 2)
	{
		if (i != 0)
		{
			final_val[i] = final_val[i - 1] + 1;
			i++;
		}
		else
		{
			i++;
			final_val[i + 1] = final_val[i] + 1;
		}
	}
	final_val[i] = '\0';
	return (final_val);
}
