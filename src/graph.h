#pragma once

#include "data_parse.h"
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <stack>

//Dijkstra's Shortest Path Algorithm
std::vector<int> dijkstra(const std::map<int, std::vector<std::pair<ProcessCSV::AirportNode,double> > >& graph, int origin_airport_id, int destination_airport_id,  const std::vector<ProcessCSV::AirportNode>& allNodes);
//Kosaraju's Strongly Connected Components Algorithm
void SCCUtil(int u, int disc[], int low[],
                    const std::map<int, std::vector<std::pair<ProcessCSV::AirportNode,double> > > &graph);
std::vector<std::vector<int>> kosaraju( const std::map<int, std::vector<std::pair<ProcessCSV::AirportNode,double> > > &graph, const std::vector<ProcessCSV::AirportNode> & allNodes);
void dfsUtil(int airport_id, std::map<int, bool> & visited, const std::map<int, std::vector<std::pair<ProcessCSV::AirportNode,double> > > &graph, std::vector<int> & connected_component);
