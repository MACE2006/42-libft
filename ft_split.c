/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvorley <cvorley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:23:38 by cvorley           #+#    #+#             */
/*   Updated: 2025/10/23 14:46:05 by cvorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}


char	**ft_split(char const *s, char c)
{
	int	i;
	char **words;

	words = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words || !s)
		return (NULL);
}