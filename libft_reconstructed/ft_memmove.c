/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destmover;
	const unsigned char	*srcmover;

	if (!dest || !src)
		return (NULL);
	if (!n || dest == src)
		return (dest);
	destmover = (unsigned char *)dest;
	srcmover = (const unsigned char *)src;
	if (destmover < srcmover)
	{
		while (n--)
			*destmover++ = *srcmover++;
	}
	else
	{
		destmover += n;
		srcmover += n;
		while (n--)
			*--destmover = *--srcmover;
	}
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
