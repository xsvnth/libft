/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:40:24 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/16 16:56:26 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
        size_t  i;

        i = 0;
        if (dstsize)
        {
                while (dstsize > 1 && src[i])
                {
                        dest[i] = src[i];
                        i++;
                }
                dest[i] = '\0';
        }
        i = 0;
        while (src[i])
                i++;
        return (i);
}
