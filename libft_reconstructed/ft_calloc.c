/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	total = nmemb * size;
	if (!nmemb || !size)
		return (malloc(1));
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
