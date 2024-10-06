/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_colored_pattern.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:13:07 by emmanuel          #+#    #+#             */
/*   Updated: 2024/07/18 22:56:03 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_print_colored_pattern(char **pattern, int rows)
{
	int		i;
	char	*line;

	i = 0;
	while (i < rows)
	{
		line = pattern[i];
		while (*line)
		{
			if (*line == '.')
				printf(BLU "%c" RESET, *line);
			else if (*line == '#')
				printf(COL5 "%c" RESET, *line);
			line++;
		}
		printf("\n");
		i++;
	}
} */
