/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:04:36 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/24 14:41:56 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n--)
	{
		*s1++ = c1;
	}
	return (s);
}

/* #include <string.h>
#include <stdio.h>

 int	main(void)
 {
	int array[5];
    ft_memset(array, 0, sizeof(array));
    for (int i = 0; i < 5; i++)
	{
        printf("%d ", array[i]);
    }
    return 0;
 } */
