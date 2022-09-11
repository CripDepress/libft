/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeawdou <akeawdou@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:25:25 by akeawdou          #+#    #+#             */
/*   Updated: 2022/09/11 13:19:43 by akeawdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr;

	if (!s1)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		ptr[j++] = s2[i++];
	}
	ptr[j] = '\0';
	return (ptr);
}
