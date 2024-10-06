/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:26:04 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/26 11:56:48 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_char(char c)
{
	int	total_char;

	total_char = 0;
	write(1, &c, 1);
	return (total_char++);
}

int	print_str(char *str)
{
	int	total_char;

	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	total_char = 0;
	while (*str)
	{
		ft_putchar(*str);
		str++;
		total_char++;
	}
	return (total_char);
}

int	print_add(void *add)
{
	int	total_char;

	total_char = 0;
	ft_putstr("0x");
	total_char += 2;
	total_char += print_hexa_lower((unsigned long long)add);
	return (total_char);
}

int	print_dec(int n)
{
	int	total_char;

	total_char = 0;
	if (n < 0)
	{
		ft_putchar('-');
		total_char++;
		n *= -1;
	}
	total_char += print_unsigned_int(n);
	return (total_char);
}

int	print_int(int n)
{
	int	total_char;

	total_char = 0;
	if (n < 0)
	{
		ft_putchar('-');
		total_char++;
		n *= -1;
	}
	total_char += print_unsigned_int(n);
	return (total_char);
}
