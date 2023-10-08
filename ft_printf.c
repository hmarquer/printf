/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:03:37 by hmarquer          #+#    #+#             */
/*   Updated: 2023/10/07 23:03:41 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_format(va_list va, char *str, int *c)
{
	if (*str == 'i' || *str == 'd')
		ft_writenbr(va_arg(va, int), c);
	else if (*str == 'c')
		*c += ft_writechar(va_arg(va, int));
	else if (*str == 's')
		*c += ft_writestr(va_arg(va, char *));
	else if (*str == 'p')
		ft_writeptr(va_arg(va, void *), c);
	else if (*str == 'u')
		ft_writeuint(va_arg(va, unsigned int), c);
	else if (*str == 'x')
		ft_writehex(va_arg(va, unsigned int), c, 'a');
	else if (*str == 'X')
		ft_writehex(va_arg(va, unsigned int), c, 'A');
	else if (*str == '%')
		*c += ft_writechar(*str);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	int		ret;

	va_start(va, str);
	ret = 0;
	while (*str)
	{
		if (*str == '%')
			ft_format(va, (char *)(++str), &ret);
		else
		{
			ret += ft_writechar(*str);
		}
		if (ret == -1)
			return (-1);
		str++;
	}
	va_end(va);
	return (ret);
}
