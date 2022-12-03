/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:05:54 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/12/03 18:12:52 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char	*str = "Es el primer aniversario de 42Barcelona";

	printf("%zu\n", ft_strlen("Supercalifragilisticoespialidoso"));
	printf("El valor de length %zu\n", ft_strlen(str));
	return (0);
}*/
