/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:26:16 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/26 11:59:33 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	size_t	ft_nb_digits(int n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str_num;
	size_t	nb_digits;
	long	number;
	int		i;

	number = (long)n;
	nb_digits = ft_nb_digits(n);
	str_num = (char *)malloc(sizeof(char) * (nb_digits + 1));
	if (!str_num)
		return (NULL);
	str_num[nb_digits] = '\0';
	if (n == 0)
		return (ft_strlcpy(str_num, "0", 2), str_num);
	if (n < 0)
	{
		number = -number;
		str_num[0] = '-';
	}
	i = nb_digits - 1;
	while (number > 0)
	{
		str_num[i--] = (number % 10) + '0';
		number /= 10;
	}
	return (str_num);
}
