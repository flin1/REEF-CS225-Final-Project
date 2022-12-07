# REEF-CS225-Final-Project
CS225 Final Project FA22 

**Developers:** 
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

Welcome to REEF airlines! How may we be of assistance? Using the data given by the CS 225 repository, our group has decided to help travelers find the quickest, easiest path from one airport to another. Our goal for this project was to use concepts we learned in CS225 to create a program that allows us to efficiently search for short paths within a graphical representation of our data. Each node being an airport in the world, and each edge being a flight connecting the two airports. 

Our team decided to use Dijkstra's Shortest Path Algorithm to analyze different paths between nodes and find the shortest one connecting them. 
[INCLUDE MORE DETAIL]

We will also be using Kosaraju's algorithm to find strongly connected components. Strongly connected components are airports that can all be accessed by any other airports in the component. 
[INCLUDE MORE DETAIL]

A breadth-first search traversal will also be used as it can find a node regardless of the size of the tree. This can be used by the traveler to reach any point on the graph. For instance, they could choose a starting location and they will be able to see all the possible airports  Our graph will be able to accommodate for new airports and flights added as the world is ever increasing in size and travel methods. Thank you for riding with us and we hope you enjoyed your flight!

## File Structure
The raw data and cleaned data are located within the data directory in a .csv format. Raw data is identifiable using the "old" prefix. 

The results.md file is located in the main directory alongside the README.md.

The results.md file contains a written description of our function outputs and success in making the functions work, as well as how well we answered the leading question.

All code is located in the src directory:
- The convert.py file cleans the data and removes unnecessary/bad data using python pandas
- The data_parse.h and data_parse.cpp files create a processCSV class to go through the .csv files and converts them to c++ nodes and edges. These nodes and edges are then organized in the form of an adjacency list to be used by the BFS and shortest path algoritms
- The graph.h and graph.cpp files hold the Dijkstra's algorithm (used to find the shortest path between any given set of two airports) and Kosaraju's algorithm (which locates strongly connected components). 
- The BFS.h and BFS.cpp files store the BFS traversal algorithm to traverse through all the nodes within our graph.

## Running Instructions
  - All inputted items will be separated by spaces. Begin command line argument with "./main"
  - Input name graph algorithm you want to use
    - Possible Graph Algorithms
      - BFS: type "BFS", insert only 1 airport name
      - Dijkstra's: type "Dijkstra", insert name of 2 airports
      - Kosaraju's: type "Kosaraju", no airport names needed
  **If airport names are more than one word, put entire name of an airport inside double quotes**
  - Hit "enter" and then run!


**Example of Using BFS in the Command Line:**
  * using Nadzab Airport as our start airport
  ./main BFS "Nadzab Airport"

**Example of Using Dijkstra Algorithm in the Command Line:** 
  * using Nadzab Airport and Tofino as our start airport and end airport
  ./main Dijkstra "Nadzab Airport" Tofino


[INCLUDE KOSARAJU INSTRUCTIONS]

## Tests 
 
Test cases for this codebase are located within the tests directory and can be found in the test_unit.cpp file. Within this file are test cases that test:
- file reading
- data conversion into node and edges
- organization into an adjacency list
- Dijkstra's algorithm functionality + correct output
- BFS traversal functionality + correct output
- Kosaraju's algorithm functionality + correct output

**The tests can be executed using the following commands:** 
```
make tests
./tests
```