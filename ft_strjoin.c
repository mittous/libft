/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:56:31 by imittous          #+#    #+#             */
/*   Updated: 2021/11/28 19:56:34 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	k;

	if (!s1 || !s2)
		return (NULL);
	tmp = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!tmp)
		return (NULL);
	k = 0;
	while (*s1)
		tmp[k++] = *s1++;
	while (*s2)
		tmp[k++] = *s2++;
	tmp[k] = '\0';
	return (tmp);
}
