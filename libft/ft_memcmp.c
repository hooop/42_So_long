/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:39:51 by emmmarti          #+#    #+#             */
/*   Updated: 2024/07/19 18:05:17 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction ft_memcmp est utilisée pour comparer les premiers n octets
   des blocs de mémoire pointés par s1 et s2. Elle renvoie une valeur
   indiquant la relation entre les deux blocs de mémoire.

   -> Retourne 0 si les blocs de mémoire sont identiques sur les n premiers
   	  octets.
   -> Retourne < 0 si le premier octet non identique dans s1 a une valeur
      inférieure à celui de s2.
   -> Retourne > 0 si le premier octet non identique dans s1 a une valeur
      supérieure à celui de s2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ptr_s1[i] && ptr_s1[i] == ptr_s2[i] && i < n - 1)
		i++;
	return (ptr_s1[i] - ptr_s2[i]);
}
