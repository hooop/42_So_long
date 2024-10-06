/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:34:28 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/26 12:03:07 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		index;
	int		total_char;

	index = -1;
	total_char = 0;
	va_start(args, format);
	while (format[++index])
	{
		if (format[index] == '%')
		{
			index++;
			total_char += check_format_printf(format, index, args, total_char);
		}
		else
		{
			ft_putchar(format[index]);
			total_char++;
		}
	}
	if (total_char < 0)
		return (-1);
	va_end(args);
	return (total_char);
}

int	check_format_printf(const char *format, int index, \
									va_list args, int total_char)
{
	if (format[index] == 'c')
		total_char += print_char(va_arg(args, int));
	else if (format[index] == 's')
		total_char += print_str(va_arg(args, char *));
	else if (format[index] == 'p')
		total_char += print_add(va_arg(args, void *));
	else if (format[index] == 'd')
		total_char += print_dec(va_arg(args, int));
	else if (format[index] == 'i')
		total_char += print_int(va_arg(args, int));
	else if (format[index] == 'u')
		total_char += print_unsigned_int(va_arg(args, unsigned int));
	else if (format[index] == 'x')
		total_char += print_hexa_lower(va_arg(args, unsigned int));
	else if (format[index] == 'X')
		total_char += print_hexa_upper(va_arg(args, unsigned int));
	else if (format[index] == '%')
	{
		ft_putchar('%');
		total_char++;
	}
	return (total_char);
}
