/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:37:14 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/12/03 19:06:38 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + i);
	while (i > 0)
	{
		i--;
		if (s[i] == (char) c)
			return ((char *)s + i);
	}
	return (NULL);
}

/*int	main(void)	
{
	char	*str = "Manuelua";
	int		c = 'u';

	printf("%s\n", ft_strrchr(str, c));
	return (0);	
}*/
