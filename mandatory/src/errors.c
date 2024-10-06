/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:11:31 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/29 23:05:12 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	error_filename(void)
{
	write(2, "\n", 1);
	write(2, "\033[38;2;255;0;0m\033[48;2;75;0;0m Error: \033[0m", 42);
	write(2, "\n    ⤷ Filename should be a BER extension file\n", 49);
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}

void	error_wall(t_map *map)
{
	write(2, "\n", 1);
	write(2, "\033[38;2;255;0;0m\033[48;2;75;0;0m Error: \033[0m", 42);
	write(2, "\n    ⤷ failed wall\n", 21);
	write(2, "\n", 1);
	ft_free_array(map->array, map->y);
	ft_free_array(map->copy, map->y);
	exit(EXIT_FAILURE);
}

void	error_openfile(void)
{
	write(2, "\n", 1);
	write(2, "\033[38;2;255;0;0m\033[48;2;75;0;0m Error: \033[0m", 42);
	write(2, "\n    ⤷ failed open\n", 20);
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}

void	error_size(t_map *map)
{
	write(2, "\n", 1);
	write(2, "\033[38;2;255;0;0m\033[48;2;75;0;0m Error: \033[0m", 42);
	write(2, "\n    ⤷ failed size\n\033[0m", 24);
	write(2, "\n", 1);
	ft_free_array(map->array, map->y);
	ft_free_array(map->copy, map->y);
	exit(EXIT_FAILURE);
}

void	error_map_elements(t_map *map)
{
	write(2, "\n", 1);
	write(2, "\033[38;2;255;0;0m\033[48;2;75;0;0m Error: \033[0m", 42);
	write(2, "\n    ⤷ failed elements\n\033[0m", 28);
	write(2, "\n", 1);
	ft_free_array(map->array, map->y);
	ft_free_array(map->copy, map->y);
	exit(EXIT_FAILURE);
}
