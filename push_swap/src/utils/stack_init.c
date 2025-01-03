/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <rboland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:17:31 by rboland           #+#    #+#             */
/*   Updated: 2025/01/03 13:17:31 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_lstnew(int nb)
{
	t_stack	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->nb = nb;
	new->next = NULL;
	return (new);
}

int	stack_init(t_stack stack_a, char *argv[], int nb_arg)
{
	
}
