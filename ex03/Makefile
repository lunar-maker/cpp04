CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = program
HEADERS = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Ice.hpp MateriaSource.hpp

SRCS = AMateria.cpp Character.cpp Cure.cpp ICharacter.cpp IMateriaSource.cpp Ice.cpp main.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all