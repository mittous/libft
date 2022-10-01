/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:10:33 by imittous          #+#    #+#             */
/*   Updated: 2022/10/01 17:01:12 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
		return (1);
	return (0);
}

	// The ft_isalpha() function tests for any character for which 
	// isupper((arg >= 'A' && arg <= 'Z')) or islower((arg >= 'a' && arg <= 'z')) is true.
	// The ft_isalpha() function returns zero if the character tests false
	// and returns non-zero if the character tests true.