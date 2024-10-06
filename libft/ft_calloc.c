/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:02:06 by emmanuel          #+#    #+#             */
/*   Updated: 2024/07/19 18:05:32 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb_elements, size_t size)
{
	size_t	total_size;
	void	*ptr;
	size_t	i;

	i = 0;
	total_size = nb_elements * size;
	ptr = (void *)malloc(total_size);
	if (ptr == NULL)
		return (0);
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
