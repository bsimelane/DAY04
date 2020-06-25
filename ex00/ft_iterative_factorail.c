/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorail.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsimelan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:51:32 by bsimelan          #+#    #+#             */
/*   Updated: 2020/06/25 17:11:44 by bsimelan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_factorail(int nb)
{
	int i;
	int fact;
	fact = nb;
	i = 1;
	if  (nb == 0 || nb == 1)
		return (1);

	while(i < nb)
	{
		fact = fact * i;
		i++;
	}
	return fact;
}

