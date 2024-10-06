/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:11:12 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/29 17:12:59 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

static void	checker_file(t_map *map)
{
	size_t	len;

	len = ft_strlen(map->filename);
	if (len < 4)
		error_filename();
	if (map->filename[len - 1] != 'r' || \
		map->filename[len - 2] != 'e' || \
		map->filename[len - 3] != 'b' || \
		map->filename[len - 4] != '.')
		error_filename();
}

static void	checker_params(t_map *map)
{
	int	y;
	int	x;

	y = 0;
	while (y < map->y)
	{
		x = 0;
		while (x < map->x)
		{
			if (map->array[y][x] == 'C')
				map->c += 1;
			else if (map->array[y][x] == 'E')
				map->e += 1;
			else if (map->array[y][x] == 'P')
				map->p += 1;
			else if (map->array[y][x] == '0' || map->array[y][x] == '1')
				;
			else
				error_map_elements(map);
			x++;
		}
		y++;
	}
	if (map->c < 1 || map->e < 1 || map->p != 1)
		error_map_elements(map);
}

static void	checker_wall(t_map *map)
{
	int	x;
	int	y;

	x = 0;
	while (map->array[0][x] == '1' && x < map->x)
		x++;
	if (x != map->x)
		error_wall(map);
	y = 1;
	while (y < map->y)
	{
		if (map->array[y][0] != '1' || map->array[y][map->x - 1] != '1')
			error_wall(map);
		y++;
	}
	x = 0;
	while (map->array[map->y - 1][x] == '1' && x < map->x)
		x++;
	if (x != map->x)
		error_wall(map);
}

void	checker_size(t_map *map)
{
	int	y;
	int	x;
	int	max;

	y = 0;
	x = 0;
	max = ft_strlen(map->array[y]);
	while (y < map->y)
	{
		x = ft_strlen(map->array[y]);
		if (x != max)
			error_size(map);
		y++;
	}
	map->x = max;
}

void	map_checker(t_map *map)
{
	checker_file(map);
	map_array(map);
	checker_size(map);
	checker_wall(map);
	checker_params(map);
	check_valid_path(map);
	ft_free_array(map->copy, map->y);
}
