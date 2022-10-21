/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:37:08 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/10/15 19:45:21 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = (char)c;
	while (s != i && s != '\0')
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	char *str = "Manuela";
	int c = 117;
	printf("%s\n", ft_strchr(str,c));
	return (0);
}*/
