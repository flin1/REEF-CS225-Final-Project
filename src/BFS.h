#pragma once

#include <iterator>
#include <cmath>
#include <list>
#include <queue>
#include <vector>
#include "graph.h"
#include "data_parse.h"
#include <map>

//https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/

//represents a directed graph to perform bfs traversal on
class BFS {

   public:
    std::vector<int> BFS( int startVertex, string, string);

  private:
    std::map<int, bool> mapVisited;
};