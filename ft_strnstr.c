/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:25:57 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/14 12:00:15 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0' && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *) &big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/* int	main(void)
{
	printf("%s\n", strnstr("lalaoiela", "ela", 15));
	printf("%s\n", ft_strnstr("lalaoiela", "ela", 15));
	return (0);
} */