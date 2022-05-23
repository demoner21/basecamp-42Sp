/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklay-de <aklay-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:43:23 by aklay-de          #+#    #+#             */
/*   Updated: 2022/04/23 00:45:08 by aklay-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	i;

	a = *tab;
	b = size;
	i = 0;
	while (size < &tab[i])
	{
		i++;
	}
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4};
	int size = 4;
	int i = 0;
	
	printf("%d\n", ft_rev_int_tab(tab[i]));
}
 */
 