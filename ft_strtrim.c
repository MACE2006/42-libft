/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvorley <cvorley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:08:18 by cvorley           #+#    #+#             */
/*   Updated: 2025/10/24 09:22:48 by cvorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	sublen;
	char	*trim;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	j = len - 1;
	while (j > i && ft_is_set(s1[j], set))
		j--;
	sublen = j - i;
	trim = (char *) malloc(sizeof(char) * (sublen + 2));
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1 + i, sublen + 1);
	trim[sublen + 1] = '\0';
	return (trim);
}
