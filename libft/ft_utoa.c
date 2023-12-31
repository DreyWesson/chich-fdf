/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conyejib <conyejib@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:12:33 by conyejib          #+#    #+#             */
/*   Updated: 2022/08/22 13:12:33 by conyejib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(unsigned int nbr)
{
	int	digit;

	digit = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		digit++;
		nbr /= 10;
	}
	return (digit);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		digit;

	digit = count(n);
	str = malloc((digit + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	str[digit] = '\0';
	while (digit > 0)
	{
		str[digit - 1] = (n % 10) + 48;
		n /= 10;
		digit--;
	}
	return (str);
}
