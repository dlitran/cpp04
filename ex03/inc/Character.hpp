/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlitran <dlitran@student.42barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 01:46:14 by dlitran           #+#    #+#             */
/*   Updated: 2024/08/15 01:46:14 by dlitran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Character: public ICharacter
{
	private:
		Materia _inventory[4];
		std::string _name;
	public:
		Character();
		Character(std:string name);
		Character(Character const &src);
		Character &operator=(Character const &rhs); //copy must be deep. (1 Previous materias must be deletd. (2 new materias created.

		virtual ~ICharacter() {}
		virtual std::string const & getName();
		virtual void equip(AMateria* m); //if inventory full, nothing.
		virtual void unequip(int idx); //Doesen't delete the materia (copy address?)
		virtual void use(int idx, ICharacter& target); //llama a la función use de materia.

};
