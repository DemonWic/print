/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:27:32 by ahintz            #+#    #+#             */
/*   Updated: 2019/04/24 17:34:21 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	double	ft_powd(long double nb, long int p)
{
	long double	res;
	long int	i;

	res = 1.0;
	i = 0;
	if (nb == 0 || p < 0)
		return (0);
	while (i < p)
	{
		res *= nb;
		i++;
	}
	return (res);
}
