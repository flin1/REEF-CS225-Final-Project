#include "data_parse.h"

// takes in a file name to be opened with fstream
// returns vector of vector of strings that store the CSV info with each line being an index in the vector
// and each word contained within a vector for that line
std::vector<std::string> processCSV::fileToVector (std::string & filename){
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
void processCSV::createAirportNode(std::vector<std::string> & data) {
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
        airport.city = airportComponents[2];
        airport.country = airportComponents[3];
        airport.longitude = std::stod(airportComponents[4]);
        airport.latitude = std::stod(airportComponents[5]);
        nodes.push_back(airport);
    }
    allNodes = nodes;
}

// create vector of structs that fill in the information acquired by the fileToVector function
void processCSV::createRoute(std::vector<std::string> & data) {
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
        route.id = std::stoi(routeComponents[0]);
        route.sourceID = std::stoi(routeComponents[1]); 
        route.destinationID = std::stoi(routeComponents[2]);
        // uses Haversine formula from G4G 
        // divide the values of longitude and latitude of both the points by 180/pi. 
        // The value of pi is 22/7. The value of 180/pi is approximately 57.29577951. 
        // If we want to calculate the distance between two places in miles, use the value 3,963, which is the radius of Earth.
        edges.push_back(route);
    }
    allEdges = edges;
}
