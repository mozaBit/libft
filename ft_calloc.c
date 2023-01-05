/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:05:33 by bmetehri          #+#    #+#             */
/*   Updated: 2023/01/05 18:35:52 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*returned_value;
	size_t	total_size;

	if (!nmemb && !size)
		return (NULL);
	if (!nmemb || !size)
		return (malloc(0));
	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (NULL);
	returned_value = malloc(total_size);
	if (!returned_value)
		return (NULL);
	ft_bzero(returned_value, total_size);
	return (returned_value);
}
