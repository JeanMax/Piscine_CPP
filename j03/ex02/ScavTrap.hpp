// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:57:59 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 15:19:57 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP

/*
** defines
*/
# define SCAVTRAP_HPP

/*
** includes
*/
# include "ClapTrap.hpp" //herits

/*
** class
*/
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string const &name = "ScavTrap3000");
		ScavTrap(ScavTrap const &copy);
		~ScavTrap(void);

		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		void			challengeNewcomer(void);

		
	protected:

};

#endif //SCAVTRAP_HPP
