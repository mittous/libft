/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:23:49 by imittous          #+#    #+#             */
/*   Updated: 2022/10/05 08:35:05 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (((char *)s)[len] == (char)c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return (NULL);
}

	//	 The ft_strrchr() function locates the first occurrence of c 
	// (that mean the 'c' character your serching for in the string pointed to by s).
	//	 The ft_strrchr() function return a pointer to the located
    // character, or NULL if the character does not appear in the string.

	//	 The ft_strrchr() function is identical to strchr(), except it locates the last occurrence of c.
	//	(That mean you start serching from the end of your string to the start of
	// 's' until you find the last occurrence of 'c' in your serching process).