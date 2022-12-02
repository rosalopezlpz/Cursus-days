/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:29:41 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/11/18 16:59:33 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (i < ft_strlen(s))
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*int main(void) {
  char	s[] = "barCELONA";
  char	f(unsigned int i,char c)
    {
    i = 0;
    if ( c >= 65 && c <=90)
        c = c + 32;
        i++;
    return(c);
}
  printf("%s\n", ft_strmapi(s, f));
  return (0);
}*/
