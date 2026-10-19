/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:39:13 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/16 22:48:22 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t  dstlen;
        size_t  srclen;
        size_t  i;

        dstlen = 0;
        while (dstlen < size && dst[dstlen])
                dstlen++;
        srclen = ft_strlen(src);
        if (dstlen == size)
                return (size + srclen);
        i = 0;
        while (src[i] && dstlen + i + 1 < size)
        {
                dst[dstlen + i] = src[i];
                i++;
        }
        dst[dstlen + i] = '\0';
        return (dstlen + srclen);
}
