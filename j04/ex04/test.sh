# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcanal <zboub@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/19 13:26:08 by mcanal            #+#    #+#              #
#    Updated: 2015/06/20 12:30:31 by mcanal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

if [ -n "$1" ]; then
	VERBOSE=$1;
fi;

while true;
do
	make;
	echo "";
	if [ "$VERBOSE" != 0 ]; then
		./zboub > output.test 2>/dev/null && diff output.test output.control > output.diff 2>/dev/null;
		FILE_SIZE=$(du output.diff | awk '{ print $1 }') 2>/dev/null;
		if [ "$FILE_SIZE" = 0 ]; then
			echo "\033[37;01mTesting stuff : \033[32;01mOK\033[0m";
		else
			echo "\033[37;01mTesting stuff : \033[31;01mKO\033[0m";
			if [ -f output.diff ]; then
				echo "\033[37;01mdiff:\033[0m ('<':test, '>':control)";
				cat output.diff;
			fi;
			if [ "$VERBOSE" = 2 ]; then
				echo "\033[37;01m\ntest:\033[0m";
				cat output.test;
				echo "\033[37;01m\ncontrol:\033[0m";
				cat output.control;
				exit;
			fi
		fi
		rm -f output.test output.diff;
	fi
	sleep 3;
	clear;
done
