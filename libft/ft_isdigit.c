/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:45:28 by emmmarti          #+#    #+#             */
/*   Updated: 2024/07/19 18:05:25 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Vérifie si c'est un chiffre (entre 0 et 9).
** Retour : 1 si c est un chiffre ou 0 si ca ne l'est pas.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
