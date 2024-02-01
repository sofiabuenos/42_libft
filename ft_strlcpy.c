/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:26:01 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/14 11:57:24 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while (src[j] != '\0' && (j < (size - 1)))
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}

/* #include <bsd/string.h>
#include <bsd/bsd.h>
// compilar com -lbsd
int	main(void)
{
	char dst[4];
	printf("%zu\n", strlcpy(dst, "hello ", 4));
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcpy(dst, "hello ", 4));
	printf("%s", dst);
	return (0);
}	 */
