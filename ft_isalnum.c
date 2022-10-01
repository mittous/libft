/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:03:08 by imittous          #+#    #+#             */
/*   Updated: 2022/10/01 16:16:11 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

	// *The isalnum() function tests for any character
	// for which ft_isalpha(check "ft_isalpha.c" file) 
	// or isdigit(check "ft_isdigit.c" file) is true.
	// *The ft_isalnum() function returns zero if the character tests false 
	// and returns non-zero if the character tests true.
	