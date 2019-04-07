/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:46:23 by ahintz            #+#    #+#             */
/*   Updated: 2019/04/07 15:52:08 by ahintz           ###   ########.fr       */
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

char	*ft_atol(unsigned long int nb)
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


int		main()
{
	char p = 'D';
	int d = 345;
	unsigned long int k = (unsigned long int)&d;
	char *ret;
	ret = ft_atol(k);
	printf("%p\n", &d);
	ft_putstr("0x");
	ft_putstr(ret);
	ft_putchar('\n');

	return (0);
}




