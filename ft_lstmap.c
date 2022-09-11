/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeawdou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:39:17 by akeawdou          #+#    #+#             */
/*   Updated: 2022/09/11 13:10:24 by akeawdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*ans;
	t_list	*ptr;

	if (!lst || !f || !del)
		return (NULL);
	ans = NULL;
	while (lst)
	{
		ptr = ft_lstnew((*f)(lst));
		if (!ptr)
		{
			ft_lstclear(&ans, del);
			return (NULL);
		}
		ft_lstadd_back(&ans, ptr);
		lst = lst->next;
	}
	return (ans);
}


