/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:52:04 by bmetehri          #+#    #+#             */
/*   Updated: 2023/01/03 16:24:07 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	do_stuff(long n, char *str, long *length)
{
	long	nb;

	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	if (nb >= 0 && nb <= 9)
		str[*length] = nb + 48;
	if (nb > 9)
	{
		do_stuff(nb % 10, str, length);
		(*length)--;
		do_stuff(nb / 10, str, length);
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	long	length;
	char	*str;

	length = 0;
	if (n <= 0)
		length++;
	nb = n;
	while (nb)
	{
		nb /= 10;
		length++;
	}
	str = malloc((length + 1) * sizeof(char));
	str[length] = '\0';
	length--;
	do_stuff((long)n, str, &length);
	return (str);
}
