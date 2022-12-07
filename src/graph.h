#pragma once

#include "data_parse.h"
#include <iostream>
// #include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

//Dijkstra's Shortest Path Algorithm
std::vector<int> Dijkstra(const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > >& graph, int origin_airport_id, int destination_airport_id,  const std::vector<processCSV::AirportNode>& allNodes);
// std::vector<int> AStar(int origin_airport_id, int destination_airport_id);

