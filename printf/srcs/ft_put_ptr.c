/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <rboland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:02:32 by rboland           #+#    #+#             */
/*   Updated: 2024/10/28 11:02:32 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	digits_count(unsigned long long nbr)
{
	size_t	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr++;
		nbr = nbr / 16;
	}
	return (count);
}

static void	print_ptr(unsigned long long nbr)
{
	static char	digits[] = "0123456789abcdef";

	if (nbr >= 16)
		print_ptr(nbr / 16);
	write(1, &digits[nbr % 16], 1);
}

int	ft_put_ptr(void *ptr)
{
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	printf_ptr((unsigned long long)ptr);
	return (digits_count((unsigned long long)ptr) + 2);
}