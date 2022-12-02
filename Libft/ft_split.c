/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:39:32 by rlopez-l          #+#    #+#             */
/*   Updated: 2022/12/02 22:04:12 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	wordcount(char const *s, char c)
{
	int	w;
	int	i;

	w = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			w++;
		i++;
	}	
	return (w);
}

char	**freemalloc(char **solution, size_t i)
{
	while (i-- > 0)
		free(solution[i]);
	free(solution);
	return (NULL);
}

char	**ft_solution(char **solution, char const *s, char c)
{
	int				i;
	unsigned int	start;
	int				letters;

	i = 0;
	start = 0;
	letters = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			start = (i + 1);
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			solution[letters] = ft_substr(s, start, i - start + 1);
			if (!solution[letters])
			{
				return (freemalloc (solution, letters));
			}
			letters++;
		}
		i++;
	}
	return (solution);
}

char	**ft_split(char const *s, char c)
{
	int		wordnbr;
	char	**solution;

	if (!s)
		return (NULL);
	wordnbr = wordcount(s, c);
	solution = malloc((sizeof(char *)) * (wordnbr + 1));
	if (!solution)
		return (NULL);
	solution[wordnbr] = NULL;
	solution = ft_solution(solution, s, c);
	return (solution);
}

/*int	main(void)
{
	char		**array;
	char const	s[] = "      split       this for   me  !";
	char		c = 't';
	int 		i;

	i = 0;
	printf("string: %s\n", s);
	array = ft_split(s, c);
	printf("result: %s\n", *ft_split(s, c));
	while (i < 4)
	{
		printf("mot [%d] = %s\n", i, array[i]);
		i++;
	}
	return (0);
}*/
