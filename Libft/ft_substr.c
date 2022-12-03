/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:51:09 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/12/03 19:11:00 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (slen < start)
		return (ft_strdup(""));
	if (slen < start + len)
		len = slen - start;
	new = (char *)malloc(sizeof(*s) * len + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, s + start, len);
		new[len] = '\0';
	return (new);
}

/*int	main(void)
{
	char *s = "barcelona";
	printf("%s\n", ft_substr(s, 3, 5));
	return (0);
}*/
