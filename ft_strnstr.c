/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:00:34 by imittous          #+#    #+#             */
/*   Updated: 2021/11/28 20:00:37 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*need;
	size_t	i;
	size_t	j;

	i = 0;
	hay = (char *)haystack;
	need = (char *)needle;
	if (!*need)
		return (hay);
	while (len > i && hay[i])
	{
		j = 0;
		while (hay[i + j] && hay[i + j] == need[j] && len > (i + j))
		{
			if (need[j + 1] == '\0')
				return (&hay[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
