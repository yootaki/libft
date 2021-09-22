/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:25:08 by yootaki           #+#    #+#             */
/*   Updated: 2021/09/22 17:07:58 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	mem_size;
	size_t	*mem;

	mem_size = size * n;
	mem = (size_t *)malloc(mem_size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, mem_size);
	return ((void *)mem);
}
