#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_print
{
	va_list args;
	int wdt;
	int prc;
	int zero;
	int pnt;
	int dash;
	int tl;
	int sign;
	int is_zero;
	int perc;
	int sp;
}	t_print;

t_print	*ft_initialise_tab(t_print *tab);
int		ft_printf(const char *format, ...);
