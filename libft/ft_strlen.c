/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:20:59 by emmmarti          #+#    #+#             */
/*   Updated: 2024/05/25 17:03:11 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Calcul la longueur d'une chaine de caractères sans compter le caractère nul.
** Retour : Le nombre de caracères.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
