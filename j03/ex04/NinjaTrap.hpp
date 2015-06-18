// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:59:11 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 16:55:55 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP

/*
** defines
*/
# define NINJATRAP_HPP

/*
** includes
*/
# include "ClapTrap.hpp" //herits
# include "FragTrap.hpp" //shoebox
# include "ScavTrap.hpp" //shoebox

/*
** class
*/
class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(std::string const &name = "NinjaTrap3000");
		NinjaTrap(NinjaTrap const &copy);
		~NinjaTrap(void);

		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		void			ninjaShoebox(ClapTrap const &target);
		void			ninjaShoebox(FragTrap const &target);
		void			ninjaShoebox(ScavTrap const &target);
		void			ninjaShoebox(NinjaTrap const &target);

	protected:

};

#endif //NINJATRAP_HPP
