/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:59:31 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/21 18:03:17 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_l(int n)
{
	int j;
	int div;
	int res;

	res = n;
	div = 1;
	j = 1;
	while (res > 1 || res < -1)
	{
		res = n / (div * 10);
		div = div * 10;
		j++;
	}
	if (n >= -9 && n <= 9)
		j = 1;
	else
		j--;
	return (j);
}

static char		*itoa_positive(int n, char *str)
{
	int i;

	i = 0;
	while (n != 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char		*itoa_negative(int n, char *str)
{
	int i;

	i = 0;
	while (n != 0)
	{
		str[i] = ((n % 10) * -1) + 48;
		n = n / 10;
		i++;
	}
	str[i] = '-';
	str[i + 1] = '\0';
	return (str);
}

static char		*itoa_reverse(char *str)
{
	int		i;
	int		j;
	char	*strrev;

	j = 0;
	i = ft_strlen(str);
	if (!(strrev = (char *)malloc(sizeof(str))))
		return (NULL);
	while (str[j] != '\0')
	{
		strrev[j] = str[j];
		j++;
	}
	j = 0;
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		str[i] = strrev[j];
		i--;
		j++;
	}
	free(strrev);
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		l;

	if (n == 0)
		return (ft_strdup("0"));
	l = find_l(n);
	if (n < 0)
		l = l + 1;
	if (!(str = (char *)malloc(sizeof(char) * l + 1)))
		return (NULL);
	if (n < 0)
		str = itoa_negative(n, str);
	else
		str = itoa_positive(n, str);
	str = itoa_reverse(str);
	return (str);
}
