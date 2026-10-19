/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:41:30 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/16 20:13:44 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
        const unsigned char     *sptr;

        sptr = (const unsigned char *)s;
        while (n--)
        {
                if (*sptr == (unsigned char)c)
                        return ((void *)sptr);
                sptr++;
        }
        return (NULL);
}
