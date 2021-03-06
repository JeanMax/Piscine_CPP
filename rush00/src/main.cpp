// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 18:22:59 by mcanal            #+#    #+#             //
//   Updated: 2015/06/21 21:39:49 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "retro.hpp"

int		main(const int ac, const char **av)
{
    if (ac != 1)
        std::cerr << "Error: " <<  av[0] << " too many arguments." << std::endl;

 	initscr(); //init ncurses
    if (has_colors() == FALSE)
        return (0);
    start_color();
    init_color(COLOR_BLUE, 956, 529, 529);
    init_color(COLOR_MAGENTA, 1000, 974, 533);
    init_color(COLOR_CYAN, 416, 965, 686);
    init_pair(1, COLOR_BLACK, COLOR_RED); //Display Player
    init_pair(2, COLOR_BLACK, COLOR_YELLOW); //DISPLAY ENEMY UNIT
    init_pair(3, COLOR_BLACK, COLOR_GREEN); //DISPLAY ENEMY UNIT MISSILE
    init_pair(4, COLOR_RED, COLOR_BLUE); //DISPLAY OBSTACLE
    init_pair(5, COLOR_YELLOW, COLOR_MAGENTA); //DISPLAY PLAYER MISSILE
	noecho();
    srand(static_cast<unsigned int>(time(0)));
//	raw(); //do not set while debuging or tests
	curs_set(FALSE);
	setlocale(LC_ALL, ""); //handle special symbol as 卐
	timeout(60); //to do set a timeout define
	keypad(stdscr, TRUE);// add special chars as F{1-12}

   
    gameLoop();
	
	endwin(); //end window 
	return (0);
}
