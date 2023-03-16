# Makefile
# Include -g flag to get debugging information
# valgrind: memory check and produces a report
# @author: Prof. Mirza
all: arpa
CXXFLAGS = -g --std=c++11

arpa: arpanet.o main.o
	g++  ${CXXFLAGS} arpanet.o main.o -o arpa

arpanet.o: arpanet.cpp arpanet.h
	g++  ${CXXFLAGS} arpanet.cpp -c

main.o: main.cpp
	g++  ${CXXFLAGS} main.cpp -c

clean:
	rm -f arpa
	rm -f *.o
