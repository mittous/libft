/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:33:09 by imittous          #+#    #+#             */
/*   Updated: 2021/11/28 18:33:32 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbelem, size_t sizeelem)
{
	void	*temp;

	temp = malloc(sizeelem * nbelem);
	if (!temp)
		return (NULL);
	ft_bzero(temp, sizeelem * nbelem);
	return (temp);
}
