/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onasri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:52:38 by onasri            #+#    #+#             */
/*   Updated: 2019/01/23 21:52:40 by onasri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_create_elem(void *data);


void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = ft_create_elem(data);
	if(*begin_list != NULL)
	{
		temp->next = *begin_list;
		*begin_list = temp;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}

}
