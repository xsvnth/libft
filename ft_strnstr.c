/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:47:38 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/17 16:16:48 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t  i;
        size_t  j;

        if (little[0] == '\0')
                return ((char *)big);
        i = 0;
        while (i < len && big[i])
        {
                j = 0;
                while (j < len - i && big[i + j] == little[j])
                {
                        j++;
                        if (little[j] == '\0')
                                return ((char *)big + i);
                }
                i++;
        }
        return (NULL);
}
