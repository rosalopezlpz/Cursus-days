/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:37:08 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/12/03 19:25:18 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = (const char)c;
	while (*s != i && *s != '\0')
		s++;
	if (*s == i)
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	char 	*str = "Manuela";
	int		c = 117;

	printf("%s\n", ft_strchr(str,c));
	return (0);
}*/
