/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:38:44 by yootaki           #+#    #+#             */
/*   Updated: 2021/09/22 17:48:50 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_check(char const ch, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	int		i;
	int		j;
	int		k;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (ft_trim_check(s1[i], set) && s1[i] != '\0')
		i++;
	if (i == (int)ft_strlen(s1))
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_trim_check(s1[j], set) && j > 0)
		j--;
	ans = (char *)malloc(sizeof(char) * (j - i + 2));
	if (ans == NULL)
		return (NULL);
	k = 0;
	while (i <= j)
		ans[k++] = s1[i++];
	ans[k] = '\0';
	return (ans);
}
