/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writeuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:04:43 by hmarquer          #+#    #+#             */
/*   Updated: 2023/10/07 23:04:50 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writeuint(unsigned int n, int *count)
{
	char	c;
	int		d;

	if (n / 10)
		ft_writeuint(n / 10, count);
	d = n % 10;
	*count += ft_writechar('0' + d);
}
