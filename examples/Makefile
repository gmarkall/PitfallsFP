CC=gcc
CXX=g++

FLAGS= -g -Werror -Wall -Wextra
CFLAGS=-std=c99 $(FLAGS)
CXXFLAGS=-std=c++11 $(FLAGS)


EXAMPLES=ex1 ex2 ex3 ex4 ex5 ex6

%: %.c
	$(CC) $(CFLAGS) $< -o $@ -lm

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@ -lm

all: $(EXAMPLES)

clean:
	rm -rf $(EXAMPLES)
