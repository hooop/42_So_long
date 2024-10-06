/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:19:58 by emmanuel          #+#    #+#             */
/*   Updated: 2024/07/18 23:00:41 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	while (s2[len_s2])
		len_s2++;
	new_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!new_str)
		return (0);
	i = -1;
	while (s1[i++])
		new_str[i] = s1[i];
	j = -1;
	while (s2[j++])
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';
	return (new_str);
}
