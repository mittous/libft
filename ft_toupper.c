/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:29:17 by imittous          #+#    #+#             */
/*   Updated: 2022/10/04 15:42:01 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

	// The ft_toupper() function converts a lower-case letter
	// to the corresponding upper-case letter.
	// The ft_toupper() function return if the argument is a lower-case letter, the corresponding 
	// upper-case letter if there is one; otherwise, the argument is returned unchanged.