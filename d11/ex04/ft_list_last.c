/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onasri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:40:38 by onasri            #+#    #+#             */
/*   Updated: 2019/01/23 22:40:40 by onasri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list *temp;

	temp = begin_list;
	if(!(temp))
		return NULL;
	else
	{
		while(temp->next)
			temp = temp->next;
		return (temp);
	}
}
