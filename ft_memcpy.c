/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvorley <cvorley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 07:59:40 by cvorley           #+#    #+#             */
/*   Updated: 2025/10/23 08:35:05 by cvorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *pdest;
    unsigned char *psrc;

    pdest = (unsigned char*)dest;
    psrc = (unsigned char*)src;
    while (n--)
        *pdest++ = *psrc++;
    return (dest);
}
