/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:09:29 by imittous          #+#    #+#             */
/*   Updated: 2021/11/28 19:09:35 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counter(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	size_t	k;
	long	nb;

	nb = n;
	if (nb == 0)
		return (ft_strdup("0"));
	k = ft_counter(nb);
	tmp = malloc(sizeof(char) * (k + 1));
	if (!tmp)
		return (NULL);
	if (nb < 0)
	{
		tmp[0] = '-';
		nb *= -1;
	}
	tmp[k] = '\0';
	while (nb > 0)
	{
		tmp[--k] = (nb % 10) + 48;
		nb /= 10;
	}
	return (tmp);
}
