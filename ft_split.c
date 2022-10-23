/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:52:16 by imittous          #+#    #+#             */
/*   Updated: 2022/10/23 17:28:15 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	int	lword;
	int	words;

	lword = 0;
	words = 0;
	while (s[lword])
	{
		if (s[lword] != c && (s[lword + 1] == c || s[lword + 1] == '\0'))
			words++;
		lword++;
	}
	return (words);
}

static char	**free_word(char **s)
{
	while (*s)
		free(*s++);
	free (s);
	return (NULL);
}


char	**ft_split(char const *s, char c)
{
	char	**word;
	int		lwrd;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	word = malloc ((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!word)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		lwrd = 0;
		while (s[lwrd] != c && s[lwrd])
			lwrd++;
		if (*s && lwrd)
			word[j++] = ft_substr(s, 0, lwrd);
		if (lwrd != 0 && !(word[j - 1]))
			return (free_word(word));
		s += lwrd;
	}
	word[j] = NULL;
	return (word);
}
