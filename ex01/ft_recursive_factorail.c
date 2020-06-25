/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorail.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsimelan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:21:14 by bsimelan          #+#    #+#             */
/*   Updated: 2020/06/25 17:12:21 by bsimelan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_recursive_factorail(int nb)
{
	int i;
	int fact;
	fact = nb;
	i = 0;

	if (nb == 0 || nb == 1)
		return (1);
	return (fact * ft_recursive_factorail(fact - 1));
}

