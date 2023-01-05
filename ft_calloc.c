/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:05:33 by bmetehri          #+#    #+#             */
/*   Updated: 2023/01/05 19:23:49 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*returned_value;

	returned_value = (void *)malloc(size * nmemb);
	if (!returned_value)
		return (NULL);
	ft_bzero(returned_value, size * nmemb);
	return (returned_value);
}
