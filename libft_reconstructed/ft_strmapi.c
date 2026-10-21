/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			slen;
	char			*retstr;
	char			*retstrhead;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	retstr = malloc(slen + 1);
	if (!retstr)
		return (NULL);
	retstrhead = retstr;
	i = 0;
	while (*s)
		*retstr++ = f(i++, (char)*s++);
	*retstr = '\0';
	return (retstrhead);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
