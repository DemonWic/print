/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zerof.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 11:15:06 by ahintz            #+#    #+#             */
/*   Updated: 2019/04/25 16:57:43 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
/*
static char		*ft_strrev_b(char *s)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	len--;
	while (len >= 0)
		res[i++] = s[len--];
	res[i] = '\0';
	return (res);
}

static int		ft_numlen_b(long int nb)
{
	int i;
	i = 0;

	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
*/
static char	*ft_ltoa(long int nb)
{
	int i;
	int sign;
	char *res;
	char *tmp;

	i = 0;
	sign = 0;
	if (nb < 0)
	{
		sign = 1;
		nb *= -1;
	}
	res = (char *)malloc(sizeof(char) * (ft_numlen(nb) + sign + 1));
	while (nb > 0)
	{
		res[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	if (sign)
		res[i++] = '-';
	res[i] = '\0';
	tmp = ft_strrev(res);
	free(res);
	return (tmp);
}


char 	*ft_zerof(double nb)
{
	int buf;

	buf = (long int)(nb * 10);
	if ((buf % 10) < 5)
		return (ft_ltoa((long int)nb));
	else if ((buf % 10) > 5)
		return (ft_ltoa((long int)(nb + 1.0)));
	else
	{
		if ((long int)nb % 2 == 0)
			return (ft_ltoa((long int)nb));
		else
			return (ft_ltoa((long int)(nb + 1.0)));
	}
}
/*
int main()
{
	double k = 19.9;
	double m = 12.5;
	double n = 13.5;
	char *p;
	printf("1 %.0f\n", k);
	p = ft_zerof(k);
	printf("%s\n", p);
	printf("1 %.0f\n", m);
	p = ft_zerof(m);
	printf("%s\n", p);
	printf("1 %.0f\n", n);
	p = ft_zerof(n);
	printf("%s\n", p);

	return (0);
}
*/
