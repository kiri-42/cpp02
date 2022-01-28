# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/28 16:57:20 by tkirihar          #+#    #+#              #
#    Updated: 2022/01/28 17:00:22 by tkirihar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out

SRCS		=	main.cpp \
				Fixed.cpp

OBJS		= $(SRCS:.cpp=.o)

CPPC		= clang++

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPPC) $(CPPFLAGS) $^ -o $@

%.o:		%.cpp
			$(CPPC) $(CPPFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all