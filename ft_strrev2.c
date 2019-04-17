/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:46:23 by ahintz            #+#    #+#             */
/*   Updated: 2019/04/17 18:02:31 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char		*ft_strrev(char *s)
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

int		ft_numlen(unsigned long int nb)
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

char	*ft_ltoa(unsigned long int nb)
{
	int i;
	int mod;
	char *res;
	char *tmp;

	i = 0;
	res = (char *)malloc(sizeof(char) * (ft_numlen(nb) + 1));
	while (nb > 0)
	{
		mod = nb % 16;
		if (mod >= 0 && mod <= 9)
			res[i] = mod + 48;
		else
			res[i] = mod + 87;
		nb /= 16;
		i++;
	}
	res[i] = '\0';
	tmp = ft_strrev(res);
	free(res);
	return (tmp);
}

char	*ft_integer(unsigned long nb, int sign)
{
	int i;
	int k;
	char *res;
	char *tmp;

	i = 0;
	(sign == 1) ? (k = 2) : (k = 1);
	res = (char *)malloc(sizeof(char) * (ft_numlen(nb) + k));
	while (nb > 0)
	{
		res[i] = nb % 10 + 48;
		nb /= 10;
		i++;
	}
	if (sign == 1)
		res[i++] = '-';
	res[i] = '\0';
	tmp = ft_strrev(res);
	free(res);
	return (tmp);
}


char	*ft_ftoa(double nb, int accur)
{
	unsigned long max = -1;
	int sign = 0;
	int count = 0;
	if (nb < 0)
	{
		nb *= -1.0;
		sign = 1;
	}
	if (nb > max)
		while (nb > max)
		{
			nb /= 10.0;
			count++;
		}
	unsigned long f = (unsigned long)nb;
	char *src = ft_integer(f, sign);
	int len = ft_numlen(f);
	if (sign == 1)
		len++;
	char *res = (char *)malloc(sizeof(char) * (len + accur + count + 2));
	int i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	double h = nb - f;
	int j = -1;
	accur += count + 1;
	int buf;
	while (j++ < accur)
	{
		if (count == 0)
			res[i++] = '.';
		h *= 10.0;
		buf = (int)h;
		//printf("%i   ",buf);
		res[i] = buf + 48;
		h -= buf;
		count--;
		i++;
	}
	res[i] = '\0';
	return (res);

}


int		main()
{
/*	char p = 'D';
	//int d = 345;
	unsigned long int k = (unsigned long int)&p;
	char *ret;
	ret = ft_ltoa(k);
	printf("%p\n", &p);
	ft_putstr("0x");
	ft_putstr(ret);
	ft_putchar('\n');
	long double r = 1.123456789123456789123456789123456789123456789;
	printf("1  %.70Lf\n", r);
	long int f = (long int)r;
	long double h = r - f;
	printf("2  %.70Lf\n", h);
	int i = 0;
	int buf;
	char s[71];
	while (i < 70)
	{
		h *= 10.0;
		buf = (int)h;
		//printf("%i   ",buf);
		s[i] = buf + 48;
		h -= buf;
		i++;
	}
	s[i] = '\0';
	printf("3  %s\n", s);
	printf("4  %li\n", f);
	unsigned long  m = -1;
	printf("5 %lu\n", m);
	unsigned char n = -1;
	printf("6 %i \n", n);*/
	double k = 1234567.1234567;
	char *res = ft_ftoa(k, 7);
	printf("%s\n", res);

	return (0);
}




