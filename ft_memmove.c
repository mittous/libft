/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:42:29 by imittous          #+#    #+#             */
/*   Updated: 2021/11/28 19:42:33 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!(unsigned char *)dst && !(unsigned char *)src)
		return (NULL);
	else if ((unsigned char *)dst < (unsigned char *)src)
	{
		while (len--)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len--)
		((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	return (dst);
}
