/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmedhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 10:24:04 by kmedhurs          #+#    #+#             */
/*   Updated: 2018/09/08 11:36:29 by kmedhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
char	*addition(int nb1, int nb2);
char	*substraction(int nb1, int nb2);
char	*division(int nb1, int nb2);
char	*multiplication(int nb1, int nb2);
char	*modulo(int nb1, int nb2);

#endif
