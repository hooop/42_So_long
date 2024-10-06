/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:54:04 by emmanuel          #+#    #+#             */
/*   Updated: 2024/09/26 12:03:32 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_exist(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	len_new_str;
	int		start;
	int		end;
	size_t	i;

	new_str = NULL;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_char_exist(s1[start], set))
		start++;
	while (s1[end] && ft_char_exist(s1[end], set))
		end--;
	len_new_str = (end - start) + 1;
	new_str = (char *)malloc(sizeof(char) * (len_new_str + 1));
	if (!new_str)
		return (0);
	i = 0;
	while (i < len_new_str)
	{
		new_str[i] = s1[start];
		i++;
		start++;
	}
	return (new_str);
}
