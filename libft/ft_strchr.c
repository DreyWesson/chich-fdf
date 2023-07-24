/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conyejib <conyejib@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:54:56 by conyejib          #+#    #+#             */
/*   Updated: 2022/06/02 07:54:56 by conyejib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char) str[i] == (unsigned char) c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (str[i] == (unsigned char) c)
		return ((char *)(str + i));
	return (NULL);
}
