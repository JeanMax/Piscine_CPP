// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AStuff.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 18:21:44 by mcanal            #+#    #+#             //
//   Updated: 2015/06/24 01:03:55 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ASTUFF_CLASS_HPP

/*
** defines
*/
# define ASTUFF_CLASS_HPP

# define DEBUG 0

# define NB_ENEMY 16 //TODO: edit value
# define NB_OBSTACLE 16 //TODO: edit value
# define NB_MISSILE 16 //TODO: edit value

# define WIDTH 70 //Edit
# define HEIGHT 35 //Edit

# define FRAME 100 //miliseconds

# define LEFT 'q'
# define RIGHT 'd'
# define UP 'z'
# define DOWN 's'
# define SHOOT ' '

/*
** includes
*/
# include <iostream>
# include <ncurses.h>
# include <cstdlib>

/*
** class
*/
class AStuff
{
	public:
		AStuff(char img = 'S');
		AStuff(AStuff const &copy);
		virtual ~AStuff(void);
		virtual AStuff		&operator=(AStuff const &copy);

		int					getX(void)		const;
		int					getY(void)		const;
		char				getImg(void)	const;
		bool				getAlive(void)	const;
		void				setX(int x);
		void				setY(int y);
		void				setImg(char img);
		void				setAlive(bool alive);

		virtual void		move(char direction = RIGHT) = 0;
		virtual void		debug(std::string s) const;

	protected:
		char	_img;
		int		_x;
		int		_y;
		bool	_alive;
};

#endif //ASTUFF_CLASS_HPP
