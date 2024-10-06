/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:36:38 by emmmarti          #+#    #+#             */
/*   Updated: 2024/07/19 18:05:33 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Met à 0 ('\0' pour chaine de char) les n premiers octets du bloc pointé par s.
**
** Param 1 :
** Pointeur vers le début de la zone mémoire que l'on souhaite initialiser à 0.
**
** Param 2 :
** Nombre d'octets à mettre à 0.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
