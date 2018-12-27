/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmedhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:38:41 by kmedhurs          #+#    #+#             */
/*   Updated: 2018/09/08 17:08:53 by kmedhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

typedef struct	s_stack
{
	char		data[30];
	int			size;
}				t_stack;

void	push(t_stack *stack, char data)
{
	stack->data[stack->size] = data;
	stack->size++;
}

void	pop(t_stack *stack)
{
	if (stack->size == 0)
		return ;
	stack->size--;
	return stack->data[stack->size];
}

#endif
