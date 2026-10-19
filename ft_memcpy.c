/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:19:36 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/16 20:16:28 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        char            *destptr;
        const char      *srcptr;

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
