# EXEC = make

# # executable will be called main & recompile each time it changes
# main: main.o src/graph.o data/data_parse.o test/test.o
# 	$(CC) $(CFLAGS) -o main main.o src/graph.o data/data_parse.o test/test.o
# # g++ main.o src/graph.o data/data_parse.o test/test.o -o main

# # compile into object file
# main.o: main.cpp
# 	g++ -c main.cpp

# test: test.o src/graph.o data/data_parse.o
# # g++ test/test.cpp -o test
# 	g++ test/test.o src/graph.o data/data_parse.o main.o -o test

# test.o: test/test.cpp
# 	g++ -c test/test.cpp

# # test:
# #     make -C ./test/test.cpp

# src/graph.o: src/graph.cpp src/graph.h
# 	g++ -c src/graph.cpp

# # remove anything ending with .o or output
# clean:
# 	rm *.o output


CC = g++
CFLAGS = -Wall -g -w

main: src/main.o src/data_parse.o src/graph.o
	$(CC) $(CFLAGS) -o main src/main.o src/data_parse.o src/graph.o

tests: test/test_unit.o src/data_parse.o src/graph.o
	$(CC) $(CFLAGS) -o tests test/test_unit.o src/data_parse.o src/graph.o

data_parse.o: src/data_parse.h src/data_parse.cpp
	$(CC) $(CFLAGS) -c src/data_parse.cpp

graph.o: src/graph.h src/graph.cpp
	$(CC) $(CFLAGS) -c src/graph.cpp

clean:
	rm -f core *.o src/main test/test_unit