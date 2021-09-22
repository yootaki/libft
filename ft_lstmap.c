/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 00:45:23 by yootaki           #+#    #+#             */
/*   Updated: 2021/04/19 18:00:22 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lists;
	t_list	*next_lists;

	new_lists = NULL;
	if (f == NULL)
		return ((void *)0);
	while (lst != NULL)
	{
		next_lists = ft_lstnew(f(lst->content));
		if (next_lists == NULL)
		{
			ft_lstclear(&new_lists, del);
			return ((void *)0);
		}
		ft_lstadd_back(&new_lists, next_lists);
		lst = lst->next;
	}
	return (new_lists);
}
