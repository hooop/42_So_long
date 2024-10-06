/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:10:28 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/29 23:02:43 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	map_initializer(t_map *map, char **av)
{
	map->filename = av[1];
	map->moves = 0;
	map->e = 0;
	map->c = 0;
	map->p = 0;
	map->y = 0;
	map->player.y = 0;
	map->player.x = 0;
	map->exit = 0;
}

int	main(int ac, char **av)
{
	t_map	map;

	if (ac == 2)
	{
		map_initializer(&map, av);
		map_checker(&map);
		map.mlx = mlx_init();
		map.wnd = mlx_new_window(map.mlx, map.x
				* IMG_PXL, map.y * IMG_PXL, WND_NAME);
		file_to_image(&map);
		map_printer(&map);
		mlx_hook(map.wnd, 17, 0, ft_close, &map);
		mlx_hook(map.wnd, 2, 1L << 0, key_hook, &map);
		mlx_loop(map.mlx);
	}
	write(2, "\n", 1);
	write(2, "\033[38;2;255;0;0m\033[48;2;75;0;0m Error: \033[0m", 42);
	write(2, "\n    ⤷ ./so_long\033[31m/maps/mapfile.ber\n\033[0m", 43);
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}
