/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:19:07 by yootaki           #+#    #+#             */
/*   Updated: 2021/04/24 11:48:25 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lists;

	lists = (t_list *)malloc(sizeof(t_list));
	if (lists == NULL)
		return ((void *)0);
	lists->content = content;
	lists->next = NULL;
	return (lists);
}
