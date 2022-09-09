/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeawdou <akeawdou@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:18:11 by akeawdou          #+#    #+#             */
/*   Updated: 2022/09/09 15:09:23 by akeawdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	b;
	void	*ptr;

	b = nmemb * size;
	if (nmemb == 0 || size == 0 || b / nmemb != size)
		return (malloc(1));
	ptr = malloc(b);
	if (ptr != NULL)
		ft_memset(ptr, 0, b);
	return (ptr);
}
