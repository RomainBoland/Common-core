/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <rboland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:56:48 by rboland           #+#    #+#             */
/*   Updated: 2024/10/25 12:56:50 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;

	va_start(args, format);
	count = 0;
	while(*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		else
		{
			format++;
			count += format_finder(*format, args);// function to chose wich way of printing the var and that call the corresponding function, returns the nbr of character printed
		}
		format++;
	}
	va_end(args);
	return (count);
}

static int	format_finder(char form_spec, va_list args)
{
	if (form_spec == 'c')
	{
		ft_putchar_fd((char)va_arg(args, char), 1);
		return (1);
	}
	else if (form_spec == 's')
		return (ft_putstr(va_arg(args, const char*)));
	else if (form_spec == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (form_spec == 'd' || 'i')
		return (ft_putint(va_arg(args, int)));
	else if (form_spec == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (form_spec == 'x')
		return (ft_puthexa(va_arg(args, ssize_t), 0));
	else if (form_spec == 'X')
		return (ft_puthexa(va_arg(args, ssize_t), 1));
	else if (form_spec == '%')
		return (write(1, "%", 1));
	return (0);
}