/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmedhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:01:16 by kmedhurs          #+#    #+#             */
/*   Updated: 2018/09/02 18:39:13 by kmedhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putnbr(int nb);

int        ft_putchar(char a);

void    ft_putstr(char *str);

void    ft_print_sudoku(int sudoku[9][9])
{
    int        i;
    int        j;
    
    i = 0;
    j = 0;
    while (i < 9)
    {
        while (j < 9)
        {
            ft_putnbr(sudoku[i][j]);
            ft_putchar(' ');
            j++;
        }
        j = 0;
        ft_putchar('\n');
        i++;
    }
}

int        ft_check_in(int sudoku[9][9], int i, int j)
{
    int        o;
    int        p;
    
    o = 0;
    p = 0;
    while (o != 9)
    {
        if (i == o)
        {
            o++;
            continue;
        }
        if (sudoku[o][j] == sudoku[i][j])
        {
            return (0);
        }
        o++;
    }
    o = 0;
    while (p != 9)
    {
        if (p == j)
        {
            p++;
            continue;
        }
        if (sudoku[i][p] == sudoku[i][j])
        {
            return (0);
        }
        p++;
    }
    o = i / 3 * 3;
    while (o <= i / 3 * 3 + 2)
    {
        p = j / 3 * 3;
        while (p <= j / 3 * 3 + 2)
        {
            if (i == o && j == p)
            {
                p++;
                continue;
            }
            if (sudoku[i][j] == sudoku[o][p])
                return (0);
            p++;
        }
        o++;
    }
    /*o = 0;
     p = 0;
     while (p < 3)
     {
     o = 0;
     while (o < 3)
     {
     if (sudoku[i - (i % 3) + p][j - (j % 3) + o] == sudoku[i][j])
     return (0);
     o++;
     }
     p++;
     }*/
    return (1);
}

int        ft_step_forward(int access[9][9], int *i, int *j)
{
    *j += 1;
    if (*j == 9)
    {
        *i += 1;
        *j = 0;
        return (1);
    }
    if (access[*i][*j] == 1)
    {
        if (*j == 9)
        {
            *i += 1;
            *j = 0;
            if (*j == 9)
                return (0);
            return (1);
        }
        return (1);
    }
    else
    {
        ft_step_forward(access, i, j);
        return (0);
    }
}

int        ft_step_backward(int access[9][9], int *i, int *j)
{
    *j -= 1;
    if (*j == -1)
    {
        *i -= 1;
        *j = 8;
        return (1);
    }
    if (access[*i][*j] == 1)
    {
        if (*j == -1)
        {
            *i -= 1;
            *j = 8;
            if (*i == -1)
                return (0);
            return (1);
        }
        return (1);
    }
    else
    {
        ft_step_backward(access, i, j);
        return (0);
    }
}

int        main(int argc, char *argv[])
{
    int        sudoku[9][9];
    int        access[9][9];
    int        i;
    int        j;
    
    i = 1;
    j = 0;
    if (argc != 10)
    {
        ft_putstr("Error");
        ft_putchar('\n');
        return (0);
    }
    while (i < argc)
    {
        while (argv[i][j])
        {
            if (argv[i][j] == '.')
                argv[i][j] = '0';
            sudoku[i - 1][j] = argv[i][j] - '0';
            if (sudoku[i - 1][j] == 0)
                access[i - 1][j] = 1;
            else
                access[i - 1][j] = 0;
            j++;
        }
        j = 0;
        i++;
    }
    i = 0;
    j = 0;
    while (i != 9)
    {
        if (access[i][j])
        {
            sudoku[i][j]++;
            if (sudoku[i][j] == 10)
            {
                sudoku[i][j] = 0;
                ft_step_backward(access, &i, &j);
                continue;
            }
            if (ft_check_in(sudoku, i, j))
            {
                ft_step_forward(access, &i, &j);
                continue;
            }
        }
        else
            ft_step_forward(access, &i, &j);
    }
    ft_print_sudoku(sudoku);
}

