#pragma once

#include <iostream>
// #include <string>
#include <vector>
#include <map>
#include <queue>
// #include <algorithm>


class Graph
{
    public:
        //empty constructor
        Graph();
        //Dijkstra's Shortest Path Algorithm
        std::vector<int> Dijkstra(int origin_airport_id, int destination_airport_id);
    private:
    // change to store AirportNodes instead of int
        std::vector<AirportNode> nodes_;
};