/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onasri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:35:20 by onasri            #+#    #+#             */
/*   Updated: 2019/01/23 22:35:22 by onasri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = begin_list;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
