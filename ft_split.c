/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeawdou <akeawdou@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:17:23 by akeawdou          #+#    #+#             */
/*   Updated: 2022/09/10 22:19:25 by akeawdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words(char const *s, char c)
{
	int	n;

	if (s == NULL || *s == '\0' || *s == c)
		return (0);
	n = 1;
	while (*s)
	{
		if (*s == c && *(s + 1) != '\0')
			n++;
		s++;
	}
	return (n);
}

int	ft_wlen(char const *s, char c)
{
	int	n;

	n = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		n++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*pw;
	int		i;
	int		j;
	int		wl;

	ptr = (char **)malloc (ft_words(s, c) * sizeof (char *));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (*s)
	{
		wl = ft_wlen(s, c);
		pw = (char *)malloc (wl * sizeof (char));
		i = 0;
		while (i < wl)
			pw[i++] = *(s++);
		pw[i] = '\0';
		ptr[j++] = pw;
	}
	ptr[j] = '\0';
	return (ptr);
}
