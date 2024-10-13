/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 09:46:06 by deisy             #+#    #+#             */
/*   Updated: 2024/10/12 11:07:58 by deisy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	int		n_bytes;

	n_bytes = nitems * size;
	if (size && (n_bytes / size) != nitems)
		return (0);
	ptr = malloc(n_bytes);
	if (!ptr)
		return (0);
	ft_bzero(ptr, n_bytes);
	return (ptr);
}
