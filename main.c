/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:58:48 by htavares          #+#    #+#             */
/*   Updated: 2021/04/03 13:22:18 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void rush(int x , int y);

int main(void){
	rush(5, 3);	
	rush(5, 1);	
	rush(1, 1);	
	rush(1, 5);	
	rush(4, 4);	
	
	return(0);
}