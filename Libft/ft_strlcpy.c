/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:08:29 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/11/05 13:38:16 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The strlcpy() and strlcat() functions copy and concatenate strings
  with the same input parameters and output result as snprintf(3).
  strlcpy() and strlcat() take the full size of the destination buffer
  and guarantee NUL-termination if there is room.
  Note that room for the NUL should be included in dstsize = n.
  strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
  NUL-terminating the result if dstsize = n is not 0.*/

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] != '\0' && i < (n - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	src[] = "barcelona";
	char	dst[] = "madrid";
	printf (" prueba del strlcpy %zu\n", ft_strlcpy(src, dst, 6));
	return (0);
}*/
