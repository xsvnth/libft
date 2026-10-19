/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:46:20 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/16 20:49:01 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        while (n--)
        {
                if ((unsigned char)*s1 != (unsigned char)*s2)
                        return ((unsigned char)*s1 - (unsigned char)*s2);
                if (!*s1)
                        return (0);
                s1++;
                s2++;
        }
        return (0);
}
