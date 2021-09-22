/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:00:41 by yootaki           #+#    #+#             */
/*   Updated: 2021/09/22 17:50:50 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(char const *str, char ch)
{
	unsigned int	i;
	int				count;

	count = 0;
	i = 0;
	while (str[i] != ch && str[i] != '\0')
		i++;
	if (i != 0)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] == ch && str[i + 1] != ch && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static void	ft_strcpy(char *str, char *src, int len)
{
	int	i;

	i = -1;
	while (src[++i] != '\0' && len--)
		str[i] = src[i];
	str[i] = '\0';
}

static int	memfree(char **ans, int i)
{
	while (i >= 0)
	{
		free(ans[i]);
		ans[i] = NULL;
		i--;
	}
	free(ans);
	ans = NULL;
	return (0);
}

static int	setstr(char **ans, char const *s, char c, unsigned int cnt)
{
	unsigned int	i;
	char			*now;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c && i < cnt)
		{
			now = (char *)s;
			while (*s != c && *s != '\0')
				s++;
			ans[i] = (char *)malloc(sizeof(char) * (s - now + 1));
			if (ans[i] == NULL)
				return (memfree(ans, i));
			ft_strcpy(ans[i++], now, s - now);
		}
		s++;
	}
	ans[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	cnt;
	char			**ans;

	if (s == NULL)
		return (NULL);
	cnt = len(s, c);
	ans = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (ans == NULL)
		return (NULL);
	if (!setstr(ans, s, c, cnt))
		return (NULL);
	return (ans);
}
