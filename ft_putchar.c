/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 00:02:56 by htavares          #+#    #+#             */
/*   Updated: 2021/04/03 00:05:02 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int ft_putchar(char c) {
	write(1 , &c , 1);
	return(0);
}