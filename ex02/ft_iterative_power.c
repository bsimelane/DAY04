/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsimelan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:43:02 by bsimelan          #+#    #+#             */
/*   Updated: 2020/06/26 08:56:56 by bsimelan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int a;
	power = nb;
	a = 1;

	if (power == 0 || power == 1 || nb == 0 || nb == 1)
		return (1);

	while(power > 0)
	{
		a  = (a * nb);
		power--;
	}
	return (a);
}

