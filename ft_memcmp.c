/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:20:21 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/14 11:48:34 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (str1[i] < str2[i])
			return (-1);
		if (str1[i] > str2[i])
			return (1);
		if (str1[i] == str2[i])
			i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d\n", memcmp("", "lala", 4));
	printf("%d\n", ft_memcmp("", "lala", 4));
	return(0);
} */