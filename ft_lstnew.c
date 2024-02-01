/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:04:49 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/24 11:30:58 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/* int	main(void)
{
	char	*content = "There is content in this node";
	t_list *new_node = ft_lstnew(content);
	if (new_node)
		printf("new node was created successfully\n");
	if (new_node->content)
		printf("content: %s\n", (char *)new_node->content);
	free(new_node);
		return (0);
} */