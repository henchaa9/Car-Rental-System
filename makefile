car: main.o car.o system.o
	g++ main.o car.o system.o -o car

main.o: main.cpp
	g++ -c main.cpp

car.o: car.cpp
	g++ -c car.cpp

system.o: system.cpp
	g++ -c system.cpp

clean:
	rm *.o car
