#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcanal <zboub@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/03 17:48:18 by mcanal            #+#    #+#              #
#    Updated: 2015/06/24 06:35:22 by mcanal           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =	indentify
C_SRC =	main.cpp
INC =  	
I_DIR = -I.
O_DIR =	obj
VPATH =	.
SRCC = 	$(C_SRC:%.cpp=$(VPATH)/%.cpp)
SRCO =	$(C_SRC:%.cpp=$(O_DIR)/%.o)
CC =	clang++
RM =	rm -rf
MKDIR = mkdir -p
CFLAGS = -Wall -Werror -Wextra -Wpedantic -Wold-style-cast -Woverloaded-virtual -Wfloat-equal -Wwrite-strings -Wcast-qual -Wcast-align -Wconversion -Wshadow -Weffc++ -Wredundant-decls -Winit-self -Wswitch-default -Wswitch-enum -Wundef -Winline -O2

COLOR_WHITE = \033[37;01m
COLOR_RED = \033[31;01m
COLOR_GREEN =  \033[32;01m
COLOR_BLUE =  \033[34;01m
COLOR_OFF = \033[0m

.PHONY: all lib soft clean fclean re

all: 
	@$(MKDIR) $(O_DIR)
	@$(MAKE) $(NAME)

$(NAME): $(SRCO) $(INC)
	@$(CC) $(CFLAGS) $(I_DIR) $(SRCO) $(LIB) -o $@
	@echo "$(COLOR_BLUE)$(SRCO) $(COLOR_WHITE)->$(COLOR_RED) $@ $(COLOR_OFF)"
#	@echo "\n$(COLOR_WHITE)flags:$(COLOR_OFF) $(CFLAGS)"
#	@echo "$(COLOR_WHITE)compi:$(COLOR_OFF) $(CC)"

$(O_DIR)/%.o: %.cpp
	@$(RM) $(NAME)
	@$(CC) $(CFLAGS) $(I_DIR) -c $^ -o $@
	@echo "$(COLOR_WHITE)$^\t->$(COLOR_BLUE) $@ $(COLOR_OFF)"

soft:
	@$(RM) $(NAME)
	@$(CC) $(I_DIR) $(SRCC) $(LIB) -o $(NAME)

clean:
	@$(RM) $(O_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
