#pragma once
#include <fstream>
#include <vector>
#include <sstream>
#include <map>
#include <math.h>


class ProcessCSV {
    public: 
    struct AirportNode {
        int id;
        std::string name;
        std::string city;
        std::string country;
        double latitude;
        double longitude;
    };

    struct Route {
        int sourceID;
        int destinationID;
        double distance;
    };
    // takes in a file name to be opened with fstream
    // returns vector of vector of strings that store the CSV info with each line being an index in the vector
    // and each word contained within a vector for that line
    std::vector<std::string> fileToVector (std::string & filename);

    // create vector of structs that fill in the information acquired by the fileToVector function
    void createAirportNode(std::vector<std::string> & data);

    // create vector of structs that fill in the information acquired by the fileToVector function
    void createRoute(std::vector<std::string> & data);

    void createAdjList(std::vector<AirportNode> & allNodes, std::vector<Route> & allEdges);


    std::vector<AirportNode> getNodes() {return allNodes_;};
    std::vector<Route> getEdges() {return allEdges_;};
    std::map<int, std::vector<std::pair<AirportNode,double> > > getGraph() {return adjList_;};
    std::map<int, std::string> getIdToName() {return idToName_;};
    std::map<std::string, int> getNameToId() {return nameToId_;};

    private: 
        std::vector<AirportNode> allNodes_;
        std::vector<Route> allEdges_;
        std::map<int, AirportNode> airportIdMap_; //airport id and corresponding airportnode
        std::map<int, std::vector<std::pair<AirportNode,double> > > adjList_; // airport id, adj vector
        std::map<int, std::string> idToName_; // airport id, airport name
        std::map<std::string, int> nameToId_; // airport name, airport id

};


