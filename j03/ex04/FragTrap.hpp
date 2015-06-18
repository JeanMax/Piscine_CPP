// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:55:22 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 16:55:43 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP

/*
** defines
*/
# define FRAGTRAP_HPP

/*
** includes
*/
# include "ClapTrap.hpp" //herits

/*
** class
*/
class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string const &name = "FragTrap3000");
		FragTrap(FragTrap const &copy);
		~FragTrap(void);

		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		void			vaulthunter_dot_exe(std::string const &target);

	protected:

};

#endif //FRAGTRAP_HPP
