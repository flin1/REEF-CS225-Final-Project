#pragma once

#include <iterator>
#include <cmath>
#include <list>
#include <queue>
#include <vector>
#include "graph.h"
#include "airportGraph.h"
#include <map>

//https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/

//represents a directed graph to perform bfs traversal on
class BFS {

   public:
    BFS(int);
    ~BFS();
    void addEdge(int source, int destination);
    std::vector<std::string> BFS( int startVertex, string, string);

  private:
    int numVertices;
    std::vector<int> *adjacency_list;
    std::map<int, bool> mapVisited;
};