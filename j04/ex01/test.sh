# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcanal <zboub@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/19 13:26:08 by mcanal            #+#    #+#              #
#    Updated: 2015/06/19 14:30:22 by mcanal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# < : diff from tested file
# > : diff from control file

VERBOSE=0; # 0, 1, 2

while true;
do
	make;
	echo "";
	if [ "$VERBOSE" != 0 ]; then
		./zboub > output.test && diff output.test output.control > output.diff;
		FILE_SIZE=$(du output.diff | awk '{ print $1 }');
		if [ "$FILE_SIZE" = 0 ]; then
			echo "\033[37;01mTesting ex00 : \033[32;01mOK\033[0m";
		else
			echo "\033[37;01mTesting ex00 : \033[31;01mKO\033[0m";
			echo "\033[37;01mdiff:\033[0m ('<':test, '>':control)";
			cat output.diff;
			if [ "$VERBOSE" == 2 ]; then
				echo "\033[37;01m\ntest:\033[0m";
				cat output.test;
				echo "\033[37;01m\ncontrol:\033[0m";
				cat output.control;
			fi
		fi
		rm -f output.test output.diff;
	fi
	sleep 3;
	clear;
done
