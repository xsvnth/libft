/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destptr;
	const char	*srcptr;

	destptr = (char *)dest;
	srcptr = (const char *)src;
	while (n)
	{
		*destptr = *srcptr;
		destptr++;
		srcptr++;
		n--;
	}
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
