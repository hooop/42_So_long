/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:51:12 by emmmarti          #+#    #+#             */
/*   Updated: 2024/07/19 18:05:10 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Permet de remplir un bloc de mémoire avec une valeur spécifique
** (entre 0 et 255)
**
** Param 1 :
** Pointeur vers le début de la zone mémoire à remplir.
** Ptr générique permet de remplir la zone mémoire avec n'importe quel type.
**
** Param 2 :
** Valeur à utiliser pour remplir la zone mémoire.
** La valeur sera convertie en un unsigned char (octet non signé)
** -> plage de valeur de 0 à 255.
**
** Param 3 :
** Le nombre d'octets à remplir dans la zone mémoire,
** à partir de l'adresse pointée par b.
**
** Retour : Renvoie un pointeur générique sur la zone de mémoire b.
**
** Mémo :
** Une case mémoire peut stocker 1 octet de données -> valeur entre 0 et 255.
** Un unsigned char à une taille fixe d'1 octet.
** Caster void * en unsigned char * permet de manipuer la mémoire case par case.
** ptr pointe vers la même adresse mémoire que b,
** est interprété comme un ptr vers des octets individuels (unsigned char *).
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
