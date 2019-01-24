/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onasri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 13:14:44 by onasri            #+#    #+#             */
/*   Updated: 2019/01/23 13:14:46 by onasri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list 		*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = *begin_list;
	if (begin_list == 0 || *begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ft_create_elem(data);
	}
}

