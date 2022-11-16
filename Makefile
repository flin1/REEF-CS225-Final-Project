# executable will be called main & recompile each time it changes
main: main.o src/graph.o data/data_parse.o
	g++ main.o src/graph.o data/data_parse.o -o main

# compile into object file
main.o: main.cpp
	g++ -c main.cpp

src/graph.o: src/graph.cpp src/graph.h
	g++ -c src/graph.cpp

# remove anything ending with .o or output
clean:
	rm *.o output
