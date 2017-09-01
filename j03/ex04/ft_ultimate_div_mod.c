/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:43:21 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/11 10:50:21 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div1;
	int div2;

	div1 = *a;
	div2 = *b;
	*a = div1 / div2;
	*b = div1 % div2;
}
