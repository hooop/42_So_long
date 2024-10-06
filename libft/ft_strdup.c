/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:34:31 by emmanuel          #+#    #+#             */
/*   Updated: 2023/01/01 01:15:17 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new_str;
	size_t	len;
	int		i;

	new_str = NULL;
	len = 0;
	i = 0;
	while (src[len])
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (0);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
