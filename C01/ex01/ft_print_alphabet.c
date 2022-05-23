/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklay-de <aklay-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 08:16:16 by aklay-de          #+#    #+#             */
/*   Updated: 2022/04/21 08:16:19 by aklay-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	letter;

	letter = "a";
	while (letter <= "z")
	{
		write(1, &letter, 1);
		letter++;
	}
}

int main(void)
{
	ft_print_alphabet(letter);
}
