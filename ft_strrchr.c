/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:13:21 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/20 10:54:01 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	temp = NULL;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			temp = (char *)&s[i];
		i++;
	}
	if (temp != NULL)
		return (temp);
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/* int	main(void)
{
	printf("%s\n", strrchr("melancias", 'a'));
	printf("%s\n", ft_strrchr("melancias", 'a'));
	return (0);
} */