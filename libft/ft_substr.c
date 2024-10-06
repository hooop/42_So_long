/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:16:36 by emmanuel          #+#    #+#             */
/*   Updated: 2024/05/25 23:12:31 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	size_t			len_s;
	unsigned int	stop;
	int				i;

	new_str = NULL;
	len_s = 0;
	while (s[len_s])
		len_s++;
	if (start + len > len_s)
		len = len_s - start;
	stop = start + len;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (0);
	i = 0;
	while (start < stop)
	{
		new_str[i] = s[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
