/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:53:02 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/14 12:01:53 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	else
		return (c);
}
/* int main()
{
	int before = 'A';
	int after;
	after = ft_tolower(before);
	printf("%c", after);
	return 0;
} */
