#pragma once

#include "data_parse.h"
#include <iostream>
// #include <string>
#include <vector>
#include <map>
#include <queue>
// #include <algorithm>

//Dijkstra's Shortest Path Algorithm
std::vector<int> dijkstra(const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > >& graph, int origin_airport_id, int destination_airport_id,  const std::vector<processCSV::AirportNode>& allNodes);
// std::vector<int> AStar(int origin_airport_id, int destination_airport_id);
void SCCUtil(int u, int disc[], int low[],
                    const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > &graph);
void kosaraju( const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > &graph, const std::vector<processCSV::AirportNode> & allNodes);
void dfsUtil(int airport_id, std::map<int, bool> & visited, const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > &graph);

