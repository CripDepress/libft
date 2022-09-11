/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeawdou <akeawdou@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:43:06 by akeawdou          #+#    #+#             */
/*   Updated: 2022/09/11 13:23:42 by akeawdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	*ptr = '\0';
	if (!s)
		return (ptr);
	if (!len)
		return (ptr);
	if (start > ft_strlen(s))
		return (ptr);
	ptr = ft_memcpy(ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}
