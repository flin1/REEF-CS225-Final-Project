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
std::vector<int> BFSTraversal( int startVertex, std::map<int, std::vector<std::pair<ProcessCSV::AirportNode,double> > > adjList);
