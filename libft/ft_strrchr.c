/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conyejib <conyejib@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:57:48 by conyejib          #+#    #+#             */
/*   Updated: 2022/06/02 07:57:48 by conyejib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			j = i;
		}
		i++;
	}
	if ((unsigned char) str[i] == (unsigned char) c)
		return ((char *)(str + i));
	if (j == 0 && (unsigned char) str[0] != (unsigned char) c)
		return (NULL);
	return ((char *)(str + j));
}
