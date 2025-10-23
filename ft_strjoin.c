/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvorley <cvorley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:50:10 by cvorley           #+#    #+#             */
/*   Updated: 2025/10/23 14:07:15 by cvorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*jstr;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	jstr = (char *) malloc(sizeof(char) * (s1len + s2len + 1));
	if (!jstr)
		return (NULL);
	ft_memcpy(jstr, s1, s1len);
	ft_memcpy(jstr + s1len, s2, s2len);
	jstr[s1len + s2len] = '\0';
	return (jstr);
}
