/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:48:08 by emmmarti          #+#    #+#             */
/*   Updated: 2024/09/26 12:01:41 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Copie n octets depuis la zone mémoire src vers la zone mémoire dest.
** Les deux zones ne  doivent  pas  se  chevaucher.
**
** Retour : Pointeur générique vers la destination.
**
** Utilité : Copier une quantité de données d'une zone mémoire à une autre.
** Ex : copier un tableau d'entier, une chaine de caractères, etc...
**
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
