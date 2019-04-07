/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:27:43 by ahintz            #+#    #+#             */
/*   Updated: 2019/04/07 12:58:33 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft.h"

void	ft_var(char t, va_list ag)
{	
	int i;
	char *s;
	
	if (t == 'c')
	{
		i = va_arg(ag, int);
		ft_putchar(i);
	}
	else if (t == 'd')
	{
		i = va_arg(ag, int);
		ft_putnbr(i);
	}
	else if (t == 's')
	{
		s = va_arg(ag, char *);
		ft_putstr(s);
	}
	else if (t == '%')
		ft_putchar('%');
}


int		ft_printf(const char *format, ...)
{
	const char *p;
	va_list ag;

	va_start(ag, format);
	p = format;
	int i = 0;

	while (p[i])
	{
		if (p[i] == '%')
		{
			ft_var(p[i+1], ag);
			i++;
		}
		else
			ft_putchar(p[i]);
		i++;
	}
	va_end(ag);
	return (0);
}



int		main()
{
	char s = 'A';
	char *p;
	p = &s;
	unsigned long ptr = (unsigned long)p; 
	printf("%p\n", p);
	printf("0x%lx\n", ptr);
	printf("0x%li\n", ptr);
	ft_printf("Schet - %d %%", 2555);
	ft_putchar('\n');
	ft_printf("%s World", "Hello");
	ft_putchar('\n');
	ft_printf("%c B C", 'A');
	ft_putchar('\n');
	return (0);
}
