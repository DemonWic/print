/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:36:41 by ahintz            #+#    #+#             */
/*   Updated: 2019/04/25 16:17:40 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_check(double nb)
{
	char	*res;

	if (nb == (1.0 / 0.0))
		res = ft_strdup("inf");
	else if (nb == (-1.0 / 0.0))
		res = ft_strdup("-inf");
	else if (nb != nb)
		res = ft_strdup("nan");
//	else
//		res = ft_strdup("0");
	else
		res = NULL;
	return (res);
}
