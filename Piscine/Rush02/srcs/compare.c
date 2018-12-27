/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmedhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 16:50:04 by kmedhurs          #+#    #+#             */
/*   Updated: 2018/09/09 14:05:32 by kmedhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int		()
{
	int		i = 3;
	int		j = 3;
	char	matrix[i][j];
	int		result;

	result = 0;
	result = rush03(matrix, 3, 3);
	printf("%d", result);
	return (0);
}
