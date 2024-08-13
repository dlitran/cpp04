/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:30:30 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/13 17:40:52 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
	public:
		Brain();
		Brain(const Brain &src);
		Brain &operator=(Brain const &rhs);
		~Brain();
		
	protected:
		std::string _ideas[100];
};

#endif