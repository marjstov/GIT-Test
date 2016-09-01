main.o:  main.cpp
	g++ -c main.cpp

Default: main
	g++ -o main main.cpp

clean:
	rm *.o main
