# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 10:11:46 by sidrissi          #+#    #+#              #
#    Updated: 2025/12/23 10:11:47 by sidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

FILES = main.cpp Span.cpp
OBJECT = $(FILES:.cpp=.o)
NAME = Span

all: $(NAME)

$(NAME): $(OBJECT)
	$(CC) $(CXXFLAGS) $(OBJECT) -o $(NAME)

%.o: %.cpp easyfind.hpp Span.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(NAME)

re: fclean all