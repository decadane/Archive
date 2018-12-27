/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmedhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:09:11 by kmedhurs          #+#    #+#             */
/*   Updated: 2018/09/09 14:05:38 by kmedhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>

int		rush03(char matrix[3][3], int i, int j);
void	ft_create_fst_string(int i, char arr[3][3]);
void	ft_create_nst_string(int i, int j, char arr[3][3]);
void	ft_create_lst_string(int i, int j, char arr[3][3]);
int		comparing(char matrix[3][3], char arr[3][3]);

#endif
