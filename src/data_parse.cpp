#include "data_parse.h"
#include <iostream>

// takes in a file name to be opened with fstream
// returns vector of vector of strings that store the CSV info with each line being an index in the vector
// and each word contained within a vector for that line
std::vector<std::string> ProcessCSV::fileToVector(std::string & filename) {
    std::ifstream input;
    input.open(filename);
    std::string line;
    std::vector<std::string> data;
    if (input.good()) {
        while (getline(input, line)) {
            data.push_back(line);
        }
    }
    input.close();
    return data;
}

// create vector of structs that fill in the information acquired by the fileToVector function
void ProcessCSV::createAirportNode(std::vector<std::string> & data) {
    std::vector<struct AirportNode> nodes;
    for (std::string line : data) {
        AirportNode airport;
        std::vector<std::string> airportComponents;
        std::stringstream ss(line);
        std::string out;
        while (ss.good()) {
            // fills string with characters until it reaches the comma, takes in stream as input
            getline(ss, out, ',');
            airportComponents.push_back(out);
        }
        // set airport for each value in the vector
        airport.id = std::stoi(airportComponents[0]);
        airport.name = airportComponents[1]; 
        airport.country = airportComponents[2];
        airport.latitude = std::stod(airportComponents[3]);
        airport.longitude = std::stod(airportComponents[4]);
        nodes.push_back(airport);
        airportIdMap_.insert(std::pair<int, struct AirportNode>(airport.id, airport));
        idToName_.insert(std::pair<int, std::string>(airport.id, airport.name));
        nameToId_.insert(std::pair<std::string, int>(airport.name, airport.id));
    }
    allNodes_ = nodes;
}

// create vector of structs that fill in the information acquired by the fileToVector function
void ProcessCSV::createRoute(std::vector<std::string> & data) {
    std::vector<struct Route> edges;
    for (std::string line : data) {
        Route route;
        std::vector<std::string> routeComponents;
        std::stringstream ss(line);
        std::string out;
        while (ss.good()) {
            // fills string with characters until it reaches the comma, takes in stream as input
            getline(ss, out, ',');
            routeComponents.push_back(out);
        }
        // set route for each value in the vector
        route.sourceID = std::stoi(routeComponents[0]); 
        route.destinationID = std::stoi(routeComponents[1]);

        // check if source and destination in route are in allnodes 
        if (idToName_.find(route.sourceID) != idToName_.end() && idToName_.find(route.destinationID) != idToName_.end()) {
            // add route if both nodes exist
            // add distance (pythagorean theorem) (long1-long2)^2 + (lat1-lat2)^2
            AirportNode source = airportIdMap_[route.sourceID];
            AirportNode dest = airportIdMap_[route.destinationID];
            double sourceLong = source.longitude;
            double sourceLat = source.latitude;
            double destLong = dest.longitude;
            double destLat = dest.latitude;
            route.distance = pow((sourceLong-destLong), 2) + pow((sourceLat-destLat), 2);
            edges.push_back(route);
        }
    }
    allEdges_ = edges;
}

void ProcessCSV::createAdjList(std::vector<struct AirportNode> & allNodes, std::vector<struct Route> & allEdges) {
    // pre load adjList with keys and empty vectors
    // set every key in adjList to be an airportNode
    for (AirportNode airport : allNodes) {
        std::vector<std::pair<AirportNode,double>> airportVect;
        std::pair<int,std::vector<std::pair<AirportNode,double>>> pair (airport.id, airportVect); // airport id, adj vector
        adjList_.insert(pair);
    }
    // traverse vector of edges 
    for (unsigned i = 0; i < allEdges.size(); i++) {
        // get destination node based on ID 
        AirportNode destination = airportIdMap_[allEdges[i].destinationID];

        // find vector in adjList that corresponds to the source airport
        std::vector<std::pair<AirportNode,double>> & neighbors = adjList_[allEdges[i].sourceID];
        // add destination node to the vector of the source airport
        std::pair<AirportNode, double> pair (destination, allEdges[i].distance);
        neighbors.push_back(pair);
    }
}