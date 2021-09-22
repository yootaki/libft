/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:24:13 by yootaki           #+#    #+#             */
/*   Updated: 2021/09/22 17:48:28 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t size)
{
	size_t	len;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	len = ft_strlen(s2);
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (len);
}
