/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:23:28 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/14 11:47:06 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		i++;
		s++;
	}
	return (NULL);
}
/* int	main(void)
{
	const void *s;
	int c;
	unsigned char *result;
	unsigned char *result2;
	s = "sofia";
	c = 102;
	result = memchr(s, c, 5);
	result2 = ft_memchr(s, c, 5);
	printf("%s\n", result);
	printf("%s\n", result2);
	return(0);
} */