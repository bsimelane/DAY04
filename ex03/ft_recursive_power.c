/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsimelan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:10:39 by bsimelan          #+#    #+#             */
/*   Updated: 2020/06/25 17:14:35 by bsimelan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{	
	if (!nb || power < 0)
	return 0;
	if (!power)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}

