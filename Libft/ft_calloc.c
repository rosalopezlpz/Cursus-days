/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:58:28 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/12/03 19:09:43 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*   The calloc() function contiguously allocates enough space
 *   for count objects that are size bytes of memory each and 
 *   returns a pointer to the allocated memory. The allocated
 *   memory is filled with bytes of value zero.*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	else
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
}

/*int	main(void)
{
	printf("%p es la direccion de memoria que estoy reservando", ft_calloc(9, 6));
	return (0);
}*/
