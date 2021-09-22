/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 09:33:05 by yootaki           #+#    #+#             */
/*   Updated: 2021/09/22 17:11:19 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ifminus(int nb)
{
	if (nb < 0)
		return (1);
	else
		return (0);
}

static void	conversion(char *ans, int sign, int count, long ln)
{
	if (ln < 0)
		ln *= -1;
	while (ln / 10 > 0)
	{
		count--;
		ans[sign + count] = ln % 10 + '0';
		ln /= 10;
	}
	if (ln <= 9)
		ans[sign] = ln + '0';
	if (sign)
		ans[0] = '-';
}

char	*ft_itoa(int n)
{
	int		sign;
	int		count;
	char	*ans;
	long	ln;

	ln = (long)n;
	sign = ft_ifminus(ln);
	if (ln < 0)
		ln *= -1;
	count = 1;
	while (ln / 10 > 0)
	{
		ln /= 10;
		count++;
	}
	ans = (char *)malloc(sizeof(char) * (sign + count + 1));
	if (ans == NULL)
		return (NULL);
	ans[sign + count] = '\0';
	ln = (long)n;
	conversion(ans, sign, count, ln);
	return (ans);
}
