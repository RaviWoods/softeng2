OBJS = source.o point.o intvector.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

lab4 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o lab4



source.o : source.cpp point.hpp
	$(CC) $(CFLAGS) source.cpp

point.o : point.hpp point.cpp
	$(CC) $(CFLAGS) point.cpp

intvector.o : intvector.hpp intvector.cpp
	$(CC) $(CFLAGS) intvector.cpp
