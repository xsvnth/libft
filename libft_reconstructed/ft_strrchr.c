/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*saver;

	saver = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			saver = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (saver);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
