/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:50:58 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/10/08 17:19:05 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int main(void)
{
	int	c = '5';
	int d = '\0';
	printf("%d \n", ft_isdigit(c));
	printf("%d \n", ft_isdigit(d));
}*/
