/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:22:19 by imittous          #+#    #+#             */
/*   Updated: 2021/11/11 16:23:41 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *) s1;
	s22 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s11[i] && s22[i] && s11[i] == s22[i] && i < (n - 1))
		i++;
	return (s11[i] - s22[i]);
}
