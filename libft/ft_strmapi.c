/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:05:33 by emmanuel          #+#    #+#             */
/*   Updated: 2024/07/19 18:05:02 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* desiription
Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères passée en argument pour créer
une nouvelle chaîne de caractères (avec malloc(3))
résultant des applications successives de ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len_s;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	str = malloc((len_s + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
