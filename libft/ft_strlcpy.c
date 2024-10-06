/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmarti <emmmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:18:32 by emmmarti          #+#    #+#             */
/*   Updated: 2024/05/21 16:08:19 by emmmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Copie la chaine de char src vers dest et ajoute un caractère nul à dest.
** Si src > dest la chaine sera tronquée.
** Copie jusqu'a size - 1 de src pour garder une place pour le caractère nul.
**
** Param 1 : pointeur vers tampon de destination
** Param 2 : Pointeur vers chaine source
** Parma 3 : Taille totale de la chaine de destination (caractère nul compris)
**
** Retour : La taille de src sans le caractère nul.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	if (dest_size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i <= dest_size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
