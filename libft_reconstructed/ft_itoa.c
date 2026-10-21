/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
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
	if (n == 0)
		retstr[0] = '0';
	return (retstr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
