/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writeptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:04:27 by hmarquer          #+#    #+#             */
/*   Updated: 2023/10/07 23:04:30 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writeptr(void *ptr, int *count)
{
	*count += ft_writestr("0x");
	ft_writehex((unsigned long)ptr, count, 'a');
}
