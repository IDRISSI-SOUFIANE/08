# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 10:11:49 by sidrissi          #+#    #+#              #
#    Updated: 2025/12/28 12:41:11 by sidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

FILES = main.cpp MutantStack.cpp
OBJECT = $(FILES:.cpp=.o)
NAME = Easyfind

all: $(NAME)

$(NAME): $(OBJECT)
	$(CC) $(CXXFLAGS) $(OBJECT) -o $(NAME)

%.o: %.cpp MutantStack.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(NAME)

re: fclean all