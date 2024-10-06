/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:25:15 by emmmarti          #+#    #+#             */
/*   Updated: 2024/05/25 23:10:24 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Cherche la première occurrence de la sous-chaîne needle dans les
** premiers n (len) caractères de la chaîne haystack.
**
** Param 1 : La chaine dans laquelle on cherche (la meule de foin).
** Param 2 : La sous chaine à chercher (l'aiguille).
** Param 3 : Le nombre maximal de caractère à examiner dans haystack.
**
** Retour :
** Si needle est une chaîne vide, la fonction retourne haystack
** Si needle est trouvée dans les premiers len caractères de haystack,
** la fonction retourne un ptr vers le premier caractère de
** cette première occurrence.
** Si needle n'est pas trouvée dans les premiers len caractères de haystack,
** la fonction retourne NULL.
**
** Mémo :
** Faire un cast pour les retours, haystack et needle sont de type
** const char * et on doit retourner un char *
**
** Fonctionnement boucle interne :
** haystack[i + j] != '\0' :
** Tant que nous n'avons pas atteint la fin de haystack.
** (i + j) < len :
** Nous ne dépassons pas la longueur max len spécifiée pour la recherche.
** needle[j] != '\0' : Nous n'avons pas encore atteint la fin de needle.
** haystack[i + j] == needle[j] :
** Le caractère actuel de haystack est à égal au caractère actuel de needle.
**
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (ft_strlen(needle) > len)
		return (NULL);
	while (haystack[i] || i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && (i + j < len) && needle[j] != '\0'
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
