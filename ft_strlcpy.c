/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <ahmelamr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:40:24 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/30 15:39:11 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (!size)
		return (lensrc);
	while (--size && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (lensrc);
}
