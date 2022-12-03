/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:04:55 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/12/03 19:10:18 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strdup() function allocates sufficient memory 
 * for a copy of the string s1, does the copy, and 
 * returns a pointer to it.  The pointer may subsequently 
 * be used as an argument to the function free(3).*/

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc(sizeof(*s1) *(ft_strlen(s1)+1));
	if (!s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int	main(void)
{
	printf("%p es lo que nos devuelve esta funcion", 
	ft_strdup("esta es la prueba de que guarda"));
	return (0);
}*/
