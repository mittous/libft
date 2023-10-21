/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:19:40 by imittous          #+#    #+#             */
/*   Updated: 2021/11/11 16:21:09 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	dlen = ft_strlen(dst);
	if (dlen < dstsize)
	{
		while (src[i] && dlen < (dstsize - 1))
			dst[dlen++] = src[i++];
		dst[dlen] = '\0';
		return ((dlen - i) + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
}
