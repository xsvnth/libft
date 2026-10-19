/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:49:34 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/16 22:23:18 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
        char    *ret;
        char    *headret;
        size_t  len1;
        size_t  len2;

        len1 = ft_strlen(s1);
        len2 = ft_strlen(s2);
        ret = malloc(len1 + len2 + 1);
        if (!ret)
                return (NULL);
        headret = ret;
        while (*s1)
                *ret++ = *s1++;
        while (*s2)
                *ret++ = *s2++;
        *ret = '\0';
        return (headret);
}
