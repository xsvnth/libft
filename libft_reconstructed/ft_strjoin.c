/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*headret;

	if (!s1 || !s2)
		return (NULL);
	ret = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
