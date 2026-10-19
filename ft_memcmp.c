/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:42:51 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/16 20:11:01 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
        const unsigned char     *s1ptr;
        const unsigned char     *s2ptr;

        s1ptr = (const unsigned char *)s1;
        s2ptr = (const unsigned char *)s2;
        if (!n)
                return (0);
        while (n--)
        {
                if (*s1ptr == *s2ptr)
                {
                        s1ptr++;
                        s2ptr++;
                }
                else
                        return (*s1ptr - *s2ptr);
        }
        return (0);
}
