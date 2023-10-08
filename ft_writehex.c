/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writehex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:04:08 by hmarquer          #+#    #+#             */
/*   Updated: 2023/10/07 23:04:12 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writehex(unsigned long n, int *count, char a)
{
	char	c;
	int		d;

	if (n / 16)
		ft_writehex(n / 16, count, a);
	d = n % 16;
	if (d < 10)
		*count += ft_writechar('0' + d);
	else
		*count += ft_writechar(a + d - 10);
}
