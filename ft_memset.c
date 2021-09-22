/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:15:20 by yootaki           #+#    #+#             */
/*   Updated: 2021/09/22 17:40:17 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int chr, size_t len)
{
	unsigned char	c;
	unsigned char	*ptr;
	size_t			i;

	c = (unsigned char)chr;
	ptr = (unsigned char *)str;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}
