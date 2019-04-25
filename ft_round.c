/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 13:14:23 by ahintz            #+#    #+#             */
/*   Updated: 2019/04/25 16:25:54 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static double	ft_ceil(double x)
{
	if (x < 0)
		return ((long int)x);
	return ((long int)x) + 1;
}

static double	ft_floor(double x)
{
	if (x > 0)
		return ((long int)x);
	return ((long int)(x - 0.9999999999999999999));
}

double	ft_round(double x, int prec)
{
	int mul;
	int i;

	mul = 1;
	i = 0;
	while (i < prec)
	{
		mul *= 10;
		i++;
	}
	if (x > 0)
		return (ft_floor(x * mul + 0.5) / mul);
	else
		return (ft_ceil(x * mul - 0.5) / mul);
}
/*
int		main()
{
	double k = 19.9 ;
	double p;
	p = ft_round(k, 1);
	printf("%f\n", k);
	printf("%f\n", p);
	printf("%.0f\n", 19.9);
	printf("%.0f\n", 10.5);
	return (0);
}*/
