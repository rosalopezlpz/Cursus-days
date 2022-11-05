/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:39:13 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/11/04 18:31:54 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!src && !dst)
		return (NULL);
	while (++i < n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}

/*int main(void)
{
		char src[50] = "madrid";
		char dest[50] = "barcelona";
		char *ret;

		ret = ft_memcpy(src+1, src, 3);
		printf("%s", ret);
		return (0);
}*/
