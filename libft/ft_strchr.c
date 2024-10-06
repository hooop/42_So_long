/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmarti <emmmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:07:41 by emmmarti          #+#    #+#             */
/*   Updated: 2024/05/21 16:06:47 by emmmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Permet de rechercher la première occurrence d'un caractère
** dans une chaîne de caractères.
**
** Si c = '\0' renvoie l'adresse correspondante.
**
** Param 1 :
** La chaîne de caractères dans laquelle la recherche va être effectuée.
** Param 2 :
** Le caractère à chercher dans la chaine.
**
** Retour :
** Un ptr vers la première occurrence du caractère recherché dans la chaîne str,
** c'est à dire son adresse en mémoire.
** Si le caractère n'est pas trouvé la fonction renvoie NULL.
**
** Mémo :
** (char)c est un cast du type int vers char pour pouvoir faire la comparaison.
** str[i] est le valeur dans la case mémoire str + i.
** str est l'adresse du caractère de la chaine.
** La fonction renvoie un pointeur de type char *,
** il faut donc faire un cast de notre pointeur vers l'occurence :
** (char *)(str + i)
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	return (NULL);
}
