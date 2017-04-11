# Makefile for Programming Languages Assignment 3
#
# Name: Travis Weaver
# Date: Febuary 25, 2017
#

build:
	make buildc
	make buildcpp
	make buildarr

buildc: question1.c
	gcc -Wall -o question1c $<

buildcpp: question1.cpp
	g++ -Wall -o question1cpp $<

buildarr: question2.c
	gcc -o question2 $<

runc:
	./question1c

runcpp:
	./question1cpp

runarr:
	./question2

clean:
	-rm question1c
	-rm question1cpp
	-rm question2