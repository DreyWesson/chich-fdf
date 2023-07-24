/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conyejib <conyejib@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:10:13 by conyejib          #+#    #+#             */
/*   Updated: 2022/08/22 13:10:13 by conyejib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numb_count(unsigned long nbr);

char	*ft_put_ptr(unsigned long n)
{
	char	*str;
	int		digit;
	int		temp;

	digit = numb_count(n);
	str = malloc ((digit + 1) * sizeof (char));
	str [digit] = '\0';
	if (str == NULL)
		str = NULL;
	while (digit >= 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			str [digit -1] = temp + 48;
			digit--;
		}
		else
		{
			str [digit - 1] = temp + 87;
			digit--;
		}
		n = n / 16;
	}
	return (str);
}
