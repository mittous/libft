/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:07:16 by imittous          #+#    #+#             */
/*   Updated: 2022/10/01 17:03:08 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

	// The ft_isascii() function tests for an ASCII character, 
	// which is any character between 0 and octal 0177 inclusive.
	// The ft_isascii() function returns zero if the character tests false
	// and returns non-zero if the character tests true.
	