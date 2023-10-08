/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:04:19 by hmarquer          #+#    #+#             */
/*   Updated: 2023/10/07 23:04:22 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writenbr(int n, int *count)
{
	int		sgn;
	char	c;

	sgn = 1;
	if (n < 0)
	{
		*count += ft_writechar('-');
		sgn = -1;
	}
	if (n / 10)
		ft_writenbr(n / 10 * sgn, count);
	c = '0' + n % 10 * sgn;
	*count += ft_writechar(c);
}
