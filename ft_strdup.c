/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:49:54 by yootaki           #+#    #+#             */
/*   Updated: 2021/09/22 17:43:58 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*heap;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	heap = (char *)malloc(sizeof(char) * (len + 1));
	if (heap == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		heap[i] = (char)s[i];
		i++;
	}
	heap[i] = '\0';
	return (heap);
}
