/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:07:21 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/16 13:20:48 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	value = 32;
// 	int	result;
// 	result = ft_isprint(value);
// 	printf("%d\n", result);
// 	result = isprint(value);
// 	printf("%d", result);
// }
