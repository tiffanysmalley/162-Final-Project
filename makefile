
##########################################
# File: makefile
# Desription: a makefile for the final assignment 
# Name: Tiffany Smalley
###########################################

#Executable names
PROGS := myst
all: $(PROGS)

myst: Mystery.cpp Room.hpp Room.cpp Passenger.hpp Passenger.cpp Conductor.hpp Conductor.cpp Dining.hpp Dining.cpp Player.hpp Player.cpp
	g++ -g Mystery.cpp -o myst

clean: 
	rm -f $(PROGS) *.o *~
	 
