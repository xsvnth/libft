/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head;
	size_t	tail;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	head = 0;
	tail = ft_strlen(s1);
	while (s1[head] && ft_strchr(set, s1[head]))
		head++;
	while (tail > head && ft_strchr(set, s1[tail - 1]))
		tail--;
	trim = malloc(tail - head + 1);
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1 + head, tail - head);
	trim[tail - head] = '\0';
	return (trim);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
