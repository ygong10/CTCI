CXX = g++

CXXFLAGS = -std=c++1y -c -g -O0 -Wall -Wextra
LDFLAGS = -std=c++1y

OBJECTS = main.o

all: $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o main

main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

clean:
	-rm -f *.o main

