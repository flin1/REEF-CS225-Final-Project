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
        std::vector<std::string> Dijkstra(std::string origin_airport, std::string destination_airport);
    private:
    // change to store AirportNodes instead of int
        std::vector<int> nodes_;
};