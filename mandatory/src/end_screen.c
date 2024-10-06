/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_screen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:11:22 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/26 12:11:25 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	ft_close(t_map *map)
{
	mlx_destroy_window(map->mlx, map->wnd);
	ft_free_array(map->array, map->y);
	exit(EXIT_SUCCESS);
	return (0);
}

void	ft_win(t_map *map)
{
	int	win_width;
	int	win_heigh;

	map->exit = 1;
	win_width = map->x * IMG_PXL;
	win_heigh = map->y * IMG_PXL;
	mlx_clear_window(map->mlx, map->wnd);
	mlx_put_image_to_window(map->mlx, map->wnd, map->img.won,
		(win_width / 2) - (144 / 2), (win_heigh / 2) - (144 / 2));
	write(1, "\n", 1);
	write(1, "🚀 Ground control to major Tom...\n", 35);
}
