/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped;
	void	*newcontent;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	mapped = NULL;
	while (lst)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if (!newnode)
		{
			del(newcontent);
			ft_lstclear(&mapped, del);
			return (NULL);
		}
		ft_lstadd_back(&mapped, newnode);
		lst = lst->next;
	}
	return (mapped);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
