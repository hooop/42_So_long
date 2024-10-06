/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmarti <emmmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:15:24 by emmmarti          #+#    #+#             */
/*   Updated: 2024/05/21 16:07:41 by emmmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Concatène la chaine de caractère src à la fin de dest
** et ajoute un caractère nul à dest.
** Si src > size la chaine src ne sera pas entièrement concaténée dans dest.
** Concatène jusqu'a size - 1 de src pour garder une place pour '\0'.
**
** Param 1 : pointeur vers tampon de destination
** Param 2 : Pointeur vers chaine source
** Parma 3 :
** Taille disponible dans la chaine de destination (caractère nul compris)
**
** Retour :
** Le nbr de caractère total dans dest après concat (sans le caractère nul).
** Attention le nombre de caractère ne veut pas dire la taille de la chaine.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dest_size == 0)
	{
		while (dest[i])
			i++;
		return (i);
	}
	while (dest[i])
		i++;
	while (src[j] && j <= dest_size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + j);
}
