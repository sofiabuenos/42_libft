/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:40:31 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/20 10:51:07 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*cpy;

	len = ft_strlen(s);
	cpy = (char *)malloc(sizeof (char) * (len + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/* int	main(void)
{
	printf("%s\n", strdup("lalala"));
	printf("%s\n", ft_strdup("lalala"));
} */