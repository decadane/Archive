/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 14:39:49 by fmarks            #+#    #+#             */
/*   Updated: 2018/09/09 14:05:34 by kmedhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_create_fst_string(int i, char arr[3][3])
{
	int		o;
	int		p;

	o = 1;
	p = 1;
	if (i > 0)
	{
		arr[0][o - 1] = 'A';
		while (o < (i - 1))
		{
			arr[0][o] = 'B';
			o++;
		}
		if (i > 1)
		{
			arr[0][o] = 'C';
		}
	}
}

void	ft_create_nst_string(int i, int j, char arr[3][3])
{
	int		o;
	int		p;

	p = 1;
	while (p < j - 1)
	{
		o = 1;
		if (j > 1)
		{
			arr[p][o - 1] = 'B';
			while (o < (i - 1))
			{
				arr[p][o] = ' ';
				o++;
			}
			o = 1;
			if (i > 1)
			{
				arr[p][j - 1] = 'B';
			}
		}
		p++;
	}
}

void	ft_create_lst_string(int i, int j, char arr[3][3])
{
	int		o;
	int		p;

	o = 1;
	p = 1;
	if (j > 1)
	{
		arr[o][j] = 'A';
		while (o < (i - 1))
		{
			arr[o + 1][p] = 'B';
			o++;
		}
		if (i > 1)
		{
			arr[o][p + 1] = 'C';
		}
	}
}

int		comparing(char matrix[3][3], char arr[3][3])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (!(matrix[i][j] == arr[i][j]))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		rush03(char matrix[3][3], int i, int j)
{
	char	arr[3][3];

	if (i < 1 || j < 1)
	{
		return (0);
	}
	ft_create_fst_string(i, arr);
	ft_create_nst_string(i, j, arr);
	ft_create_lst_string(i, j, arr);
	return (comparing(matrix, arr));
}
