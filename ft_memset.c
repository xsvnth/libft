/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:50:59 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/13 12:48:28 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
        char    *ptr;

        ptr = (char *)s;
        while (n)
        {
                *ptr = (unsigned char)c;
                ptr++;
                n--;
        }
        return (s);
}
