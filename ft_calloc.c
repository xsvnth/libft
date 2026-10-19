/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:41:07 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/16 22:56:04 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
        void    *ptr;
        size_t  total;

        if (size != 0 && nmemb > (size_t)-1 / size)
                return (NULL);
        total = nmemb * size;
        ptr = malloc(total);
        if (ptr == NULL)
                return (NULL);
        ft_bzero(ptr, total);
        return (ptr);
}
