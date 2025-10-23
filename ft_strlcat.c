/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvorley <cvorley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:16:45 by cvorley           #+#    #+#             */
/*   Updated: 2025/10/23 09:26:06 by cvorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;
	size_t	sum;

	i = 0;
	sum = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (n > d_len)
		sum = d_len + s_len;
	else
		sum = s_len + n;
	while (src[i] && n > (d_len + 1))
	{
		dest[d_len] = src[i];
		i++;
		d_len++;
	}
	dest[d_len] = '\0';
	return (sum);
}
