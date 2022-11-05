/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:50:05 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/11/05 15:37:09 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*   The strnstr() function locates the first occurrence of the 
 *   null-terminated string needle in the string haystack,
 *   where not more than len characters are searched.
 *   Characters that appear after a `\0' character are not searched.
 *   Since the strnstr() function is a FreeBSD specific API,
 *   it should only be used when portability is not a concern.*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				if (needle[j + 1] == '\0')
					return ((char *)(haystack + i));
			j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char h[] = "Esta es la prueba para buscar la aguja en el pajar";
	char n[] = "prueba";
	printf("%s es el resultado de strnstr", ft_strnstr(h, n, 9));
	return (0);
}*/
