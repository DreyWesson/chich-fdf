/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conyejib <conyejib@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:54:43 by conyejib          #+#    #+#             */
/*   Updated: 2022/06/02 07:54:43 by conyejib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const	*s, char c)
{
	int	count;
	int	i;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const	*s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	arr = (char **)ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (!arr || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start != i)
		{
			arr[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	return (arr);
}
