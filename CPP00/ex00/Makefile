# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/27 15:50:07 by ddo-carm          #+#    #+#              #
#    Updated: 2025/07/23 15:35:16 by ddo-carm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		   ________________________________________________        
#  _______|                                               |_______
# \       |                 NAMES & PATHS                 |      /
#  \      |                                               |     /
#  /      |_______________________________________________|     \ 
# /__________)                                        (__________\ 


NAME = megaphone
SRCS_D = .

#source files
SRC = $(SRCS_D)/megaphone.cpp \
		

#object files
OBJ = $(SRC:.cpp=.o)

#		   ________________________________________________
#  _______|                                               |_______
# \       |                FLAGS & COMMANDS               |      /
#  \      |                                               |     /
#  /      |_______________________________________________|     \ 
# /__________)                                        (__________\ 


COMP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
GDB = -g
RM = rm -f
VAL = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

#          ________________________________________________
# ________|                                               |_______
# \       |                    LIB RULES                  |      /
#  \      |                                               |     /
#  /      |_______________________________________________|     \ 
# /__________)                                        (__________\ 

all: $(NAME) 

$(NAME): $(OBJ)
	$(COMP) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo $(BGRN)"✨Compilation completed✨"$(RES)

%.o: %.cpp
	@$(COMP) $(CPPFLAGS) -c $< -o $@
	@echo $(BMAG)"Compiling..."$(RES)

#          ________________________________________________
# ________|                                               |_______
# \       |                  CLEAN RULES                  |      /
#  \      |                                               |     /
#  /      |_______________________________________________|     \ 
# /__________)                                        (__________\ 

#remove .o
clean:
	@$(RM) $(OBJ)
	@echo $(BMAG)"✨Objects removed" $(BGRN)"successfully✨"$(RES)

#clean and remove
fclean: clean
	@$(RM) $(NAME)
	@echo $(BMAG)"✨Program removed" $(BGRN)"successfully✨"$(RES)

#remake
re: fclean all
	@echo $(BMAG)"✨Re-compile was" $(BGRN)"successfull✨"$(RES)

#Phony targets to avoid clashes
.PHONY: all clean fclean re

#          ________________________________________________
# ________|                                               |_______
# \       |                    COLORS                     |      /
#  \      |                                               |     /
#  /      |_______________________________________________|     \ 
# /__________)                                        (__________\ 

#color list for foreground
#bash -c 'for c in {0..255}; do tput setaf $c; tput setaf $c | cat -v; echo =$c; done'

RED		= "\033[0;31m"
GRN		= "\033[0;32m"  
YEL		= "\033[0;33m"
BLU		= "\033[0;34m"
BLA		= "\033[0;30m"
CYA		= "\033[0;36m"
GREY	= "\033[0;90m"
BBLA	= "\033[30;1m"
BRED 	= "\033[31;1m"
BGRN	= "\033[32;1m"
BYEL	= "\033[33;1m"
BBLU	= "\033[34;1m"
BMAG	= "\033[35;1m"
BCYA	= "\033[36;1m"
BWHI	= "\033[37;1m"
RES		= "\033[0m"

# Background colors
BGRED	= "\033[41m"
BGGRN	= "\033[42m"
BGYEL	= "\033[43m"
BGBLU	= "\033[44m"
BGMAG	= "\033[45m"
BGCYA	= "\033[46m"
BGWHI	= "\033[47m"
BGBLA	= "\033[40m"

# Bright (bold/high intensity) background colors
BGBRED	= "\033[101m"
BGBGRN	= "\033[102m"
BGBYEL	= "\033[103m"
BGBBLU	= "\033[104m"
BGBMAG	= "\033[105m"
BGBCYA	= "\033[106m"
BGBWHI	= "\033[107m"
