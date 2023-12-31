/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:03:49 by hmarquer          #+#    #+#             */
/*   Updated: 2023/10/07 23:03:53 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_writechar(char c);
int		ft_writestr(char *s);
void	ft_writenbr(int n, int *count);
void	ft_writeuint(unsigned int n, int *count);
void	ft_writeptr(void *ptr, int *count);
void	ft_writehex(unsigned long n, int *count, char a);
int		ft_printf(const char *format, ...);

#endif
