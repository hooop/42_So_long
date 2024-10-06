/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_map_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:12:00 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/29 17:47:31 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

static void	check_line(t_map *map, int fd)
{
	if (map->line[0] == '\n' || map->line[0] == '\0')
	{
		free(map->line);
		close(fd);
		error_openfile();
	}
}

static void	append_line(t_map *map)
{
	map->file = ft_strjoinfree(map->file, map->line);
	free(map->line);
	if (!map->file)
		ft_exit_free(map);
	map->y++;
}

void	map_array(t_map *map)
{
	int	fd;

	map->y = 0;
	map->file = NULL;
	fd = open(map->filename, O_RDONLY);
	if (fd == -1)
		error_openfile();
	map->line = get_next_line(fd);
	while (map->line != NULL)
	{
		check_line(map, fd);
		append_line(map);
		map->line = get_next_line(fd);
	}
	close(fd);
	map->array = ft_split(map->file, '\n');
	map->copy = ft_split(map->file, '\n');
	if (!map->array || !map->copy)
		ft_exit_free(map);
	free(map->file);
}
