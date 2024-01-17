CC = g++
CFLAGS = -std=c++11
SRC = main.cpp Vector.cpp Vector.hpp
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = main

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
    $(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ) $(EXECUTABLE)
