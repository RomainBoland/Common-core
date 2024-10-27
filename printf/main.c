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

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;

	va_start(args, format);
	count = 0;
	while(*format)
	{
		if (*format != '%')
			count += ft_putchar(*format);
		else
		{
			*format++;
			count += format_finder(*format, args);// function to chose wich way of printing the var and that call the corresponding function, returns the nbr of character printed
		}
		format++
	}
	va_end(args);
	return (count);
}

static int	format_finder(char form_spec, va_list args)
{
	if (form_spec == 'c')
		return ft_putchar((char)va_arg(args, char));
	else if (form_spec == 's')
		return ft_putstr((const char *)va_arg(args, const char*));
	else if (form_spec == 'p')
		return ft_print_hexa();
	else if (form_spec == 'd' || 'i')
		return ft_putnbr((int)va_arg(args, int));
	else if (form_spec == 'u')
		return ft_putnbr((unsigned int)va_arg(args, unsigned int));
	else if (form_spec == 'x')
		return ft_print_hexa();
	else if (form_spec == 'X')
		return ft_print_hexa();
	else if (form_spec == '%')
		return write(1, '%', 1);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	//ft_printf("Hello my name is %s and I'm %d years old.", "Romain", 25);
	printf("Hello my name is %s and I'm %d years old.", "Romain", 1000000);
	return (0);
}