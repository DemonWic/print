/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 16:45:52 by ahintz            #+#    #+#             */
/*   Updated: 2019/04/25 16:46:19 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
