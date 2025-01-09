NAME = 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME) 

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

obj/%.o: %.cpp 
	@mkdir -p obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(NAME)
	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re