/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:17:38 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/26 11:37:06 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	x;

	i = 0;
	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (x < len)
	{
		if (haystack[x] == needle[i])
			i++;
		else
			i = 0;
		x++;
		if (needle[i] == '\0')
			return ((char *)&haystack[x - i]);
	}
	return (0);
}
