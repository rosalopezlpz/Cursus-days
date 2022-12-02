/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:19:24 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/11/11 19:07:32 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The strlcpy() and strlcat() functions copy and concatenate strings
  with the same input parameters and output result as snprintf(3).
  strlcpy() and strlcat() take the full size of the destination buffer 
  and guarantee NUL-termination if there is room.
  Note that room for the NUL should be included in dstsize = n.
  strlcat() appends string src to the end of dst.
  It will append at most dstsize - strlen(dst) - 1 characters.
  It will then NUL-terminate, unless dstsize is 0 or the original dst string 
  was longer than dstsize = n (in practice this should not happen 
  as it means that either dstsize is incorrect or 
  that dst is not a proper string).*/

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n <= ft_strlen(dst))
		return (n + ft_strlen(src));
	i = ft_strlen(dst);
	while (src[j] != '\0' && i + 1 < n)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

/*int	main(void)
{
	char	src[] = "barcelona";
	char	dst[] = "madrid";
	printf("%d es la longitud de la concatenacion", ft_strlcat(dst, src, 4));
	return (0);
}*/
