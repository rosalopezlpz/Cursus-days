/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:14:07 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/12/03 19:20:13 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (s != NULL && f != NULL)
	{
		j = ft_strlen(s);
		while (i < j)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
/*int main(void) 
{
  char	s[] = "barCELONA";
  void	f(unsigned int i,char *c)
    {
    	i = 0;
    	if ( (int)c >= 65 && (int)c <=90)
        	c = c + 32;
        	i++;
    	return (c);
	}	
  printf("%s\n", ft_striteri(s, f));
  return (0);
  As a void function it won't return anything 
  neither ft_striteri neither my void f function.
}*/
