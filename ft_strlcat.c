/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeawdou <akeawdou@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:53:42 by akeawdou          #+#    #+#             */
/*   Updated: 2022/09/09 23:34:27 by akeawdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n_dst;
	size_t	n_src;

	n_dst = ft_strlen(dst);
	n_src = ft_strlen(src);
	i = 0;
	j = n_dst;
	if (n_dst < size - 1 && size > 0)
	{
		while (src[i] && n_dst + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (n_dst >= size)
		n_dst = size;
	return (n_dst + n_src);
}
