CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic -O2
LDFLAGS = -ljsoncpp

SRCS = main.cpp Record.cpp Time.cpp GPS.cpp Person.cpp Thing.cpp
OBJS = $(SRCS:.cpp=.o)
MAIN = main

.PHONY: depend clean

all: $(MAIN)

$(MAIN): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(MAIN) $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(MAIN)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it
