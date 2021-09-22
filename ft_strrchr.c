/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:45:59 by yootaki           #+#    #+#             */
/*   Updated: 2021/05/09 23:22:54 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*ans;

	len = ft_strlen(s);
	ans = NULL;
	i = 0;
	while (i < (len + 1))
	{
		if (s[i] == (char)c)
			ans = (char *)&s[i];
		i++;
	}
	return (ans);
}
