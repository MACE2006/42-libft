/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvorley <cvorley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:00:01 by cvorley           #+#    #+#             */
/*   Updated: 2025/10/23 12:09:34 by cvorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *pstr)
{
	int	sum;
	int	operator;

	sum = 0;
	operator = 1;
	while (*pstr == ' ' || (*pstr >= 9 && *pstr <= 13))
		pstr++;
	while (*pstr == '-' || *pstr == '+')
	{
		if (*pstr == '-')
			operator *= -1;
		pstr++;
	}
	while (*pstr >= '0' && *pstr <= '9')
	{
		sum = (sum * 10) + (*pstr - '0');
		pstr++;
	}
	return (operator * sum);
}
