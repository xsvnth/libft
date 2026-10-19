/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:47:27 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/14 22:46:25 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
        char    *dest;
        char    *headest;
        size_t  len;

        len = 0;
        while (s[len])
                len++;
        dest = malloc(len + 1);
        if (!dest)
                return (NULL);
        headest = dest;
        while (*s)
                *dest++ = *s++;
        *dest = '\0';
        return (headest);
}
