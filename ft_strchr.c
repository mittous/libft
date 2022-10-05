/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:18:11 by imittous          #+#    #+#             */
/*   Updated: 2022/10/05 09:16:43 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == (char)c)
		return ((char *)s);
	while (*s++)
		if (*s == (char)c)
			return ((char *)s);
	return (NULL);
}

	//	 The ft_strchr() function locates the first occurrence of c 
	// (that mean the 'c' character your serching for in the string pointed to by s).
	//	 The ft_strchr() function return a pointer to the located
    // character, or NULL if the character does not appear in the string.

	//	 The ft_strchr() function is identical to ft_strrchr(), except it locates the first occurrence of c.
	//	 (That mean you start serching from the start of your string to the end of
	// 's' until you find the first occurrence of 'c' in your serching process).