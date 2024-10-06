/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:11:40 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/26 12:11:43 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	file_to_image(t_map *map)
{
	int	size;
	int	won_size;

	size = IMG_PXL;
	won_size = 144;
	map->img.empty = mlx_xpm_file_to_image(map->mlx,
			"resources/empty.xpm", &size, &size);
	map->img.wall = mlx_xpm_file_to_image(map->mlx,
			"resources/wall.xpm", &size, &size);
	map->img.exit = mlx_xpm_file_to_image(map->mlx,
			"resources/exit.xpm", &size, &size);
	map->img.collectible = mlx_xpm_file_to_image(map->mlx,
			"resources/saphir.xpm", &size, &size);
	map->img.won = mlx_xpm_file_to_image(map->mlx,
			"resources/won.xpm", &won_size, &won_size);
	file_to_image_player(map);
}

void	file_to_image_player(t_map *map)
{
	int	a;

	a = IMG_PXL;
	map->img.player_right1 = mlx_xpm_file_to_image(map->mlx,
			"resources/right.xpm", &a, &a);
	map->img.player_up1 = mlx_xpm_file_to_image(map->mlx,
			"resources/up.xpm", &a, &a);
	map->img.player_down1 = mlx_xpm_file_to_image(map->mlx,
			"resources/down.xpm", &a, &a);
	map->img.player_left1 = mlx_xpm_file_to_image(map->mlx,
			"resources/left.xpm", &a, &a);
}
