/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:41:43 by emmmarti          #+#    #+#             */
/*   Updated: 2024/07/19 18:05:30 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description :
** Vérifie si c'est un caractère alphanumérique : chiffre ou alphabet
**
** Retour : 1 si c est un chiffre ou 0 si ca ne l'est pas.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
