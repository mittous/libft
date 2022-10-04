/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:27:27 by imittous          #+#    #+#             */
/*   Updated: 2022/10/04 15:41:54 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

	// The ft_tolower() function converts a upper-case letter
	// to the corresponding lower-case letter.
	// The ft_tolower() function return if the argument is a upper-case letter, the corresponding 
	// lower-case letter if there is one; otherwise, the argument is returned unchanged.