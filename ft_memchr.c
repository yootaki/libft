/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:45:44 by yootaki           #+#    #+#             */
/*   Updated: 2021/09/22 17:38:30 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
