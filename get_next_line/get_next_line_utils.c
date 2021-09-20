/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <igoikoet@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:56:49 by igoikoet          #+#    #+#             */
/*   Updated: 2021/09/20 19:06:31 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	l1;
	size_t	l2;

	l1 = 0;
	l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	str = (char *)malloc(l1 + l2 + 1);
	if (!s1 || !s2 || !str)
		return (NULL);
	l1 = 0;
	while (s1[l1])
	{
		str[l1] = s1[l1];
		l1++;
	}
	l2 = 0;
	while (s2[l2])
		str[l1++] = s2[l2++];
	str[l1] = '\0';
	return (str);
}

char	*ft_strdup(const char *str)
{
	char	*s2;
	size_t	i;
	size_t	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	s2 = (char *)malloc((j) + 1);
	if (!s2)
		return (NULL);
	i = -1;
	while (str[++i])
		s2[i] = str[i];
	return (ft_memcpy(s2, str, j + 1));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*srt;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s || len < 0)
		return (NULL);
	srt = (char *)malloc(len + 1);
	if (!srt)
		return (NULL);
	j = 0;
	while (s[j] != '\0')
		j++;
	while (start < j && i < len)
	{
		srt[i] = s[start];
		i++;
		start++;
	}
	srt[i] = '\0';
	return (srt);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == dst || !n)
		return (dst);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
