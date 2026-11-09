/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <ahmelamr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:55:43 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/26 22:55:42 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destmover;
	const char	*srcmover;

	destmover = (char *)dest;
	srcmover = (const char *)src;
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
