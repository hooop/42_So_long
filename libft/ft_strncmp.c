/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:21:57 by emmmarti          #+#    #+#             */
/*   Updated: 2024/05/25 22:44:26 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Compare deux chaines, s1 et s2 sur n caractères pour determiner
** laquelle est la plus grande lexicographiquement.
** S'arrête lorsqu'elle a comparé les n caractères ou lorsqu'elle rencontre
** un caractère '\0' dans l'une des deux chaines.
**
** Param 1 : Pointeur vers la première chaine.
** Param 2 : Pointeur vers la seconde chaine.
**
** Retour : Renvoie un unsigned char.
** Si s1 est "plus petite" que s2, la fonction renvoie un nombre < 0.
** Si s1 est "plus grande" que s2, la fonction renvoie un nombre > 0.
** Si s1 égal s2, la fonction renvoie 0.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
		n--;
	}
	return (0);
}
