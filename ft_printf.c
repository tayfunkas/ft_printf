/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasapog <tkasapog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:35:55 by tkasapog          #+#    #+#             */
/*   Updated: 2024/05/08 13:33:19 by tkasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_conversion(const char *text, va_list *arg)
{
	int	i;

	i = 0;
	if (*text == 'c')
		i += ft_printchar(va_arg(*arg, int));
	else if (*text == 's')
		i += ft_printstr(va_arg(*arg, char *));
	else if (*text == '%')
		i += ft_printchar('%');
	else if (*text == 'd' || *text == 'i')
		i += ft_printnbr(va_arg(*arg, int));
	else if (*text == 'u')
		i += ft_printunbr(va_arg(*arg, unsigned int));
	else if (*text == 'p')
		i += ft_printptr(va_arg(*arg, long int *));
	else if (*text == 'x')
		i += ft_printhex(va_arg(*arg, unsigned int));
	else if (*text == 'X')
		i += ft_printhexc(va_arg(*arg, unsigned int));
	return (i);
}

int	ft_printf(const char *text, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, text);
	while (*text)
	{
		if (*text == '%')
		{
			if (printf_strchr("cspdiuxX%", *text + 1))
				i += check_conversion(text + 1, &args);
			text++;
		}
		else
		{
			i += ft_printchar(*text);
		}
		text++;
	}
	va_end(args);
	return (i);
}
