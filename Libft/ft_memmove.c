/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:40:34 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/11/04 19:06:47 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The memmove() function copies n(lenth) bytes 
 from string src to string dst.  
 The two strings may overlap; the copy 
 is always done in a non-destructive manner.*/

void	*ft_memmove(void *dst, const void *scr, size_t n)
{
	if (!scr && !dst)
		return (NULL);
	if (dst > scr)
	{
		while (n--)
		{
			((unsigned char *)dst)[n] = ((unsigned char *)scr)[n];
		}
	}
	else
	{
		ft_memcpy(dst, scr, n);
	}
	return (dst);
}

/*int	main(void)
{
		char	hola[20] = "barcelona";
		char	bye[20] = "barcelona";
		printf("   MEMMOVE %s\n", ft_memmove(hola+3, hola, 5));
		printf("   MEMCPY %s\n", ft_memcpy(bye+3, bye, 5));
		return (0);
}*/
