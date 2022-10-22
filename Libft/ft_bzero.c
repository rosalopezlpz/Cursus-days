/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:57:57 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/10/22 16:22:09 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *st, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)st)[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char st[] = "unatardedemayo";
	size_t n = 8;

	ft_bzero(st, n);
	printf ("Bzero me da: %s\n");
	return (0);
}*/
