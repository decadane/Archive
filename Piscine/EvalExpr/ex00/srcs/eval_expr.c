/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmedhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 10:20:31 by kmedhurs          #+#    #+#             */
/*   Updated: 2018/09/08 16:49:25 by kmedhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

char	*delete_spaces(char *str)
{
	char	*start;
	char	*new_str;

	new_str = (char*)malloc(ft_strlen(str) + 1);
	start = new_str;
	while (*str)
	{
		if (*str == ' ')
			str++;
		else
		{
			*new_str = *str;
			str++;
			new_str++;
		}
	}
	*new_str = '\0';
	return (start);
}

void	ft_rpn(t_stack stack, char *str)
{
	char	*newstr;

	newstr = str;
	if (*str >= '0' && *str <= '9')
	{
		*newstr = *str;
		newstr++;
		str++;
	}
	if (*str == '%' || *str == '(' || *str == ')' || *str == '*' || *str == '+' || *str == '-' || *str == '/')

}

char	*eval_expr(char *str)
{
	t_stack		stack;
	char		*newstr;

	newstr = str;
	str = delete_spaces(str);
	ft_rpn(stack, newstr);
	return (start);
}

int		main()
{
	char	*str;

	str = "3 * 3";
	printf("%s", eval_expr(str));
	return (0);
}
