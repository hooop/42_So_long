/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:11:51 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/26 12:11:53 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	ft_free_array(char **ret, int i)
{
	while (i > 0)
		free(ret[--i]);
	free(ret);
	return (0);
}

void	ft_exit_free(t_map *map)
{
	if (map->array)
		free(map->array);
	if (map->copy)
		free(map->copy);
	if (map->file)
		free(map->file);
	if (map->line)
		free(map->file);
	exit(EXIT_FAILURE);
}
