# REEF-CS225-Final-Project
CS225 Final Project FA22 

Developers:
- Rachel Tin
- Emily Ho
- Esther Lee 
- Fay Lin

## Video Presentation 
[ADD LINK]

## Project Proposal Document

https://docs.google.com/document/d/1ET2rXG5EWV01dRvoGY7M5GKtDvS1ptP5P8KgomLalBA/edit?usp=sharing

## Dataset Source
https://openflights.org/data.html (OpenFlights Airport and Route datasets)


## Leading Question

Welcome to REEF airlines! How may we be of assistance! Using the data given by the CS 225 repository, our group has decided to help travelers find the quickest, easiest path from one airport to another. Our goal for this project was to use concepts we learned in 225 to create a program that allows us to efficiently search for short paths within a graphical representation of our data. Each node being an airport in the world, and each edge being a flight connecting the two airports. Our team decided to use Dijkstra's Shortest Path Algorithm and A* algorithm to analyze different paths between nodes and find the shortest one connecting them. A* is well-rounded  and checks every node within its reach, while also optimizing the time spent analyzing each path. We will also be using Dijkstra’s shortest path algorithm which is self explanatory. A breadth-first search traversal will also be used as it can find a node regardless of the size of the tree. This can be used by the traveler to reach any point on the graph. For instance, they could choose a starting location and they will be able to see all the possible airports  Our graph will be able to accommodate for new airports and flights added as the world is ever increasing in size and travel methods. Thank you for riding with us and we hope you enjoyed your flight!

## File Structure
The raw data and cleaned data are located within the data directory in a .csv format. Raw data is identifiable using the "old" prefix. 
The results.md file is located in the main directory alongside the README.md.

All code is located in the src directory:
- The convert.py file cleans the data and removes unnecessary/bad data using python pandas
- The data_parse.h and data_parse.cpp files create a processCSV class to go through the .csv files and converts them to c++ nodes and edges. These nodes and edges are then organized in the form of an adjacency list to be used by the BFS and shortest path algoritms
- The graph.h and graph.cpp files hold the Dijkstra's and A star algorithms used to find the shortest path between any given set of two airports. 
- The BFS.h and BFS.cpp files store the BFS traversal algorithm to traverse through all the nodes within our graph.



## Running Instructions



## Tests 
 
Test cases for this codebase are located within the tests directory and can be found in the test_unit.cpp file. Within this file are test cases that test:
- file reading
- data conversion into node and edges
- organization into an adjacency list
- Dijkstra's algorithm functionality
- BFS traversal functionality
- A star algorithm functionality

The tests can be executed using the following commands:
```
make tests
./tests
```