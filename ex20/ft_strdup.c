/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybitton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 11:41:51 by ybitton           #+#    #+#             */
/*   Updated: 2016/11/22 15:49:32 by ybitton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*final_a;
	int		i;
	int		t;

	i = 0;
	t = 0;
	while (src[t] != '\0')
		t++;
	final_a = (char*)malloc(sizeof(*final_a) * (t + 1));
	while (src[i] != '\0')
	{
		final_a[i] = src[i];
		i++;
	}
	final_a[i] = '\0';
	return (final_a);
}
