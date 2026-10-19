/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:55:43 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/17 15:56:40 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char           *destmover;
        const unsigned char     *srcmover;

        if (!n || dest == src)
                return (dest);
        if (!dest || !src)
                return (NULL);
        destmover = (unsigned char *)dest;
        srcmover = (const unsigned char *)src;
        if ((unsigned long)destmover < (unsigned long)srcmover)
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
