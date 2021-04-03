/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:53:59 by htavares          #+#    #+#             */
/*   Updated: 2021/04/03 00:08:14 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c);

void rush(int x, int y) {
    int linha;
    int coluna;

    linha = 0;
    while (++linha <= y && (x > 0 && y > 0) ) {
        coluna = 0;
        while (++coluna <= x) {
            if(linha == 1 || linha == y) {
                if (coluna == 1) {
                    ft_putchar('A');                    
                } else if (coluna == x){
                    ft_putchar('C');
                } else {
                    ft_putchar('B');
                }
            } else if (coluna == 1 || coluna == x) {
                ft_putchar('B');
            } else {
                ft_putchar(' ');
            }
            
        }
		ft_putchar('\n');
    }
}