#include <iostream>
#include <fstream>
#include <vector>
#include "data_parse.h"
#include "graph.h"
#include "BFS.h"


#include <typeinfo>
#include <string_view>

int main(int numArgs, char *arcv[]) {

    if (numArgs == 1) {
        std::cout << "Input command line arguments please!" << std::endl;
        std::cout << "Type \"./main instructions\" for more instructions!" << std::endl;
        return 0;

    } else if (strcmp(arcv[1], "instructions") == 0) {
        std::cout << "" << std::endl;
        std::cout << "INSTRUCTIONS:" << std::endl;
        std::cout << "  - All inputted items will be separated by spaces. Begin command line argument with \"./main\"" << std::endl;
        std::cout << "  - Input name graph algorithm you want to use" << std::endl;
        std::cout << "    - Possible Graph Algorithms" << std::endl;
        std::cout << "      - BFS: type \"BFS\", insert only 1 airport name" << std::endl;
        std::cout << "      - Dijkstra's: type \"Dijkstra\", insert name of 2 airports" << std::endl;
        std::cout << "      - OTHER ONE: type \"NAME OF OTHER\", insert name of 2 airports" << std::endl;
        std::cout << "  ** If airport names are more than one word, put entire name of an airport inside double quotes" << std::endl;
        std::cout << "  - Hit \"enter\" and then run!" << std::endl;
            
        std::cout << "" << std::endl;
        std::cout << "" << std::endl;

        std::cout << "Example of Using BFS in the Command Line:" << std::endl;
        std::cout << "  * using Nadzab Airport as our start airport" << std::endl;
        std::cout << "  ./main BFS \"Nadzab Airport\"" << std::endl;

        std::cout << "" << std::endl;

        std::cout << "Example of Using Dijkstra Algorithm in the Command Line:" << std::endl;
        std::cout << "  * using Nadzab Airport and Tofino as our start airport and end airport" << std::endl;
        std::cout << "  ./main Dijkstra \"Philadelphia International Airport\" \"Denver International Airport\"" << std::endl;
        std::cout << "" << std::endl;
        return 0;

    } else {
        ProcessCSV data_;
        std::string airports_directory_ = "data/airports.csv";
        std::vector<std::string> airports_vector_ = data_.fileToVector(airports_directory_);
        data_.createAirportNode(airports_vector_);
        std::string routes_directory_ = "data/routes.csv";
        std::vector<std::string> routes_vector_ = data_.fileToVector(routes_directory_);
        data_.createRoute(routes_vector_);
        std::vector<ProcessCSV::AirportNode> nodes_ = data_.getNodes();
        std::vector<ProcessCSV::Route> edges_ = data_.getEdges();
        data_.createAdjList(nodes_, edges_);
        std::map<int, std::vector<std::pair<ProcessCSV::AirportNode,double>>> graph_ = data_.getGraph();

        std::ofstream myfile;
        myfile.open ("output.txt");

        if (strcmp(arcv[1], "BFS") == 0) {
            if (numArgs != 3) {
                std::cout << "Invalid number of arguments. Put in the name of graph algorithm (BFS) followed by the name of 1 airport name." << std::endl;
                return 0;
            }
            std::string start_node = arcv[2];
            myfile << "BFS Algorithm:" << std::endl;
            myfile << "Starting Airport: " << start_node << std::endl;
            myfile << "" << std::endl;
            std::map<std::string, int> name_to_id = data_.getNameToId();
            std::map<int, std::string> id_to_name = data_.getIdToName();
            std::vector<int> BFS_ = BFSTraversal(name_to_id[start_node], graph_);
            if (BFS_.size() == 1) {
                myfile << "No connected airports found. Try again with another airport name." << std::endl;
            } else {
                for (unsigned i = 0; i < BFS_.size(); i++) {
                    myfile << "Airport " << i << ": " << id_to_name[BFS_.at(i)] << std::endl;
                }
            }
        }
        if (strcmp(arcv[1], "Dijkstra") == 0) {
            std::map<std::string, int> name_to_id = data_.getNameToId();
            if (numArgs != 4) {
                std::cout << "Invalid number of arguments. Put in the name of graph algorithm (Dijkstra) followed by the name of 2 airport names." << std::endl;
                return 0;
            }
            std::string start_node = arcv[2];
            std::string end_node = arcv[3];
            myfile << "Dijkstra's Algorithm:" << std::endl;
            myfile << "Starting Airport: " << arcv[2] << std::endl;
            myfile << "Ending Airport: " << arcv[3] << std::endl;
            myfile << "" << std::endl;
            std::vector<int> Dij_ = dijkstra(graph_, name_to_id[start_node], name_to_id[end_node], nodes_);
            if (Dij_.size() != 0) {
                std::map<int, std::string> id_to_name = data_.getIdToName();
                int i = 1;
                myfile << "Total Number of Airports (Including Starting and Ending Airports): " << Dij_.size() << std::endl;
                for (auto item: Dij_) {
                    myfile << "Airport " << i << ": " << id_to_name[item] << std::endl;
                    i++;
                }
                
            } else {
                myfile << "No path was found. Try again with other airports" << std::endl;
            }
        }
        if (strcmp(arcv[1], "Kosaraju") == 0) {
            myfile << "Kosaraju's Algorithm" << std::endl;
            std::map<int, std::string> id_to_name = data_.getIdToName();
            std::vector<std::vector<int>> Kosaraju_ = kosaraju(graph_, nodes_);
            if (Kosaraju_.size() != 0) {
                for (auto vect : Kosaraju_) {
                    myfile << "Strongly Connected Component: ";
                    for (auto item: vect) {
                        myfile << id_to_name[item] << ", ";
                    }
                    myfile << "\n";
                }
            } else {
                myfile << "No connected components found." << std::endl;
            }
        }
        std::cout << "" << std::endl;
        std::cout << "The graph algorithm has been run. Look at \"output.txt\" for the output." << std::endl;
        myfile.close(); 
    }
    return 0;
}