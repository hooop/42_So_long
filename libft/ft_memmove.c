/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:20:55 by emmmarti          #+#    #+#             */
/*   Updated: 2024/09/26 11:51:42 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description :
Copie n octets depuis la zone mémoire src vers la
zone mémoire dest. Les deux zones  peuvent  se  chevaucher
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_src < ptr_dest)
	{
		i = n;
		while (i > 0)
		{
			ptr_dest[i - 1] = ptr_src[i - 1];
			i--;
		}
	}
	else if (ptr_src > ptr_dest)
	{
		i = 0;
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
