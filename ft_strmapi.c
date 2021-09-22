/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 19:13:07 by yootaki           #+#    #+#             */
/*   Updated: 2021/05/14 15:31:38 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ans;

	if (s == NULL || f == NULL)
		return (NULL);
	ans = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ans[i] = f(i, (char)s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
