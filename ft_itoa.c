/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <ahmelamr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:38:39 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/29 22:01:19 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*retstr;

	nbr = n;
	len = ft_numlen(nbr);
	retstr = malloc(len + 1);
	if (!retstr)
		return (NULL);
	retstr[len] = '\0';
	if (nbr < 0)
	{
		retstr[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		retstr[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (!n)
		retstr[0] = '0';
	return (retstr);
}
