/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:02:43 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/12/03 19:07:24 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char )c))
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*int main(void)
{
		char *s = "barcelona";
		
		printf("%s",ft_memchr(s, 'c', 6));
		return (0);
}*/
