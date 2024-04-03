main : Circle.o main.o
	g++ Circle.o main.o -o main

Circle.o : Circle.cpp
	g++ -c Circle.cpp

main.o : main.cpp
	g++ -c main.cpp

clean :
	rm *.o main