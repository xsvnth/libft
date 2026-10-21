/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*makeword(char const *start, size_t len)
{
	char	*word;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, start, len);
	word[len] = '\0';
	return (word);
}

static void	freesplitted(char **splitted, size_t count)
{
	while (count > 0)
		free(splitted[--count]);
	free(splitted);
}

static char	**fillsplitted(char **splitted, char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			splitted[i] = makeword(s, len);
			if (!splitted[i])
			{
				freesplitted(splitted, i);
				return (NULL);
			}
			i++;
			s += len;
		}
	}
	splitted[i] = NULL;
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	char		**splitted;
	char const	*smover;
	size_t		wordcounter;

	if (!s)
		return (NULL);
	smover = s;
	wordcounter = 0;
	while (*smover)
	{
		if (*smover != c && (smover == s || smover[-1] == c))
			wordcounter++;
		smover++;
	}
	splitted = malloc(sizeof(char *) * (wordcounter + 1));
	if (!splitted)
		return (NULL);
	return (fillsplitted(splitted, s, c));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
