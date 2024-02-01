/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:01:35 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/14 12:02:46 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -= 32);
	else
		return (c);
}

/* #include <stdio.h>
int	main(void)
{
	int before = 'a';
	int after;
	after = ft_toupper(before);
	printf("%c", after);
	return 0;
} */
