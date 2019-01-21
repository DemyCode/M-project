CXX = g++
LINK.o = g++
CXXFLAGS = -Wextra -Wall -Werror -pedantic -std=c++17
LDLIBS = -lSDL2
SOURCE = main.cc
OBJ = $(SOURCE:.cc=.o)
EXEC = $(SOURCE:.cc=)

all: $(EXEC)

obj: $(OBJ)

clean:
	$(RM) $(EXEC) $(OBJ)
