/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:06:14 by emmmarti          #+#    #+#             */
/*   Updated: 2024/07/19 18:05:19 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* utilisée pour rechercher la première occurrence d'un octet
   particulier dans une zone mémoire. La fonction parcourt les n premiers
   octets de la zone mémoire pointée par s et renvoie un pointeur vers
   la première occurrence de l'octet c si elle est trouvée, ou NULL sinon.

   Ex : Recherche d'un caractère dans une chaîne de caractères */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			i;

	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return (ptr_s + i);
		i++;
	}
	return (NULL);
}
