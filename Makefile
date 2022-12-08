CC = clang++
CFLAGS = -Wall -g -w -std=c++1y -c
LDFLAGS = -std=c++1y
#-stdlib=libc++ -lc++abi

main: main.o data_parse.o graph.o bfs.o
	$(CC) main.o data_parse.o graph.o bfs.o $(LDFLAGS) -o main

main.o: src/main.cpp
	$(CC) $(CFLAGS) src/main.cpp


tests: test_unit.o data_parse.o graph.o bfs.o
	$(CC) test_unit.o data_parse.o graph.o bfs.o $(LDFLAGS) -o tests

test_unit.o : test/test_unit.cpp test/catch/catch.hpp
	$(CC) $(CFLAGS) test/test_unit.cpp

data_parse.o: src/data_parse.cpp
	$(CC) $(CFLAGS) -c src/data_parse.cpp

graph.o: src/graph.h src/graph.cpp
	$(CC) $(CFLAGS) -c src/graph.cpp

bfs.o: src/BFS.h src/BFS.cpp
	$(CC) $(CFLAGS) -c src/BFS.cpp

clean:
	rm -f core *.o src/main test/test_unit