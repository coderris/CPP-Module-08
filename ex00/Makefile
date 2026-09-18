NAME = easy
CXXFLAGS = -Werror -Wextra -Wall -std=c++98
CXX = c++
SRCS = main.cpp
OBJS = $(SRCS:%.cpp=%.o)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: flcean all

.PHONY: all clean fclean re