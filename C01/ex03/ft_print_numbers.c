/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklay-de <aklay-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:00:50 by aklay-de          #+#    #+#             */
/*   Updated: 2022/04/22 03:00:53 by aklay-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nbr;

	nbr = 48;
	while (nbr <= 57)
	{
		write(1, &nbr, 1);
		nbr++;
	}
}

int main(void)
{
	ft_print_reverse_alphabet(letter);
}
