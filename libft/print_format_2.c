/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:56:30 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/26 12:01:15 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_unsigned_int(unsigned int n)
{
	int	total_char;

	total_char = 0;
	if (n >= 10)
	{
		total_char += print_unsigned_int(n / 10);
		total_char += print_unsigned_int(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
		total_char++;
	}
	return (total_char);
}

int	print_hexa_lower(unsigned int n)
{
	int	total_char;

	total_char = 0;
	if (n >= 16)
	{
		total_char += print_hexa_lower(n / 16);
		total_char += print_hexa_lower(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
			ft_putchar(n - 10 + 'a');
		total_char++;
	}
	return (total_char);
}

int	print_hexa_upper(unsigned int n)
{
	int	total_char;

	total_char = 0;
	if (n >= 16)
	{
		total_char += print_hexa_upper(n / 16);
		total_char += print_hexa_upper(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
			ft_putchar(n - 10 + 'A');
		total_char++;
	}
	return (total_char);
}
