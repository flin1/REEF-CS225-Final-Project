#pragma once
#include <fstream>
#include <vector>
#include <sstream>

class processCSV {
    struct AirportNode {
        int id;
        std::string name;
        std::string city;
        std::string country;
        double longitude;
        double latitude;
    };

    struct Route {
        int id;
        int sourceID;
        int destinationID;
        double distance;
    };
    public: 
    // takes in a file name to be opened with fstream
    // returns vector of vector of strings that store the CSV info with each line being an index in the vector
    // and each word contained within a vector for that line
    std::vector<std::string> fileToVector (std::string & filename);

    // create vector of structs that fill in the information acquired by the fileToVector function
    void createAirportNode(std::vector<std::string> & data);

    // create vector of structs that fill in the information acquired by the fileToVector function
    void createRoute(std::vector<std::string> & data);

    private: 
        std::vector<AirportNode> allNodes;
        std::vector<Route> allEdges;
};


