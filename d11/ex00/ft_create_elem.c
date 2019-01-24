/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onasri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 21:52:40 by onasri            #+#    #+#             */
/*   Updated: 2019/01/22 21:52:42 by onasri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list *temp;

	temp = (t_list*)malloc(sizeof(t_list));
	temp -> data = data;
	temp -> next = NULL;
	return (temp);
}
