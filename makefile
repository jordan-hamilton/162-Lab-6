# Source: http://web.engr.oregonstate.edu/~rookert/cs162/03.mp4

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o Menu.o IntNode.o LinkedList.o
SRCS = main.cpp Menu.cpp IntNode.cpp LinkedList.cpp
HEADERS = Menu.hpp IntNode.hpp LinkedList.hpp

lab6: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o lab6

$(OBJS): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.cpp)

clean:
	rm *.o lab6
