/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:29:23 by imittous          #+#    #+#             */
/*   Updated: 2022/10/01 17:06:26 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

	// The ft_isdigit() function tests for a decimal digit character.
	// this includes the following characters only :
	// {'1', '2', '3', '4', '5', '6', '7', '8', '9'}