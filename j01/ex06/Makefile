#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcanal <zboub@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/03 17:48:18 by mcanal            #+#    #+#              #
#    Updated: 2015/06/16 10:01:50 by mcanal           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =	zboub
C_SRC =	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
INC =	HumanA.hpp HumanB.hpp Weapon.hpp
I_DIR = -I.
O_DIR =	obj
VPATH =	.
SRCC = 	$(C_SRC:%.cpp=$(VPATH)/%.cpp)
SRCO =	$(C_SRC:%.cpp=$(O_DIR)/%.o)
CC =	clang++
RM =	rm -rf
MKDIR = mkdir -p
CFLAGS = -Wall -Werror -Wextra -Wpedantic -Wold-style-cast -Woverloaded-virtual -Wfloat-equal -Wwrite-strings -Wcast-qual -Wcast-align -Wconversion -Wshadow -Weffc++ -Wredundant-decls -Winit-self -Wswitch-default -Wswitch-enum -Wundef -Winline -O2

.PHONY: all lib soft clean fclean re

all: 
	@$(MKDIR) $(O_DIR)
	@$(MAKE) $(NAME)

$(NAME): $(SRCO) $(INC)
	$(CC) $(CFLAGS) $(I_DIR) $(SRCO) $(LIB) -o $@

$(O_DIR)/%.o: %.cpp
	@$(RM) $(NAME)
	$(CC) $(CFLAGS) $(I_DIR) -c $^ -o $@

soft:
	@$(RM) $(NAME)
	@$(CC) $(I_DIR) $(SRCC) $(LIB) -o $(NAME)

clean:
	@$(RM) $(O_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
