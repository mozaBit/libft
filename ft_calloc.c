/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:05:33 by bmetehri          #+#    #+#             */
/*   Updated: 2023/01/05 18:58:30 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*returned_value;

	if (!(returned_value = malloc(size * nmemb)))
		return (NULL);
	ft_bzero(returned_value, size * nmemb);
	return (returned_value);
}
