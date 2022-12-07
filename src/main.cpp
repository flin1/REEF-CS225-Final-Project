#include <iostream>
#include <fstream>
#include <vector>
#include "data_parse.h"
#include "graph.h"

// #include "../data/airports.csv"
// #include "../data/routes.csv"

#include <typeinfo>
#include <string_view>

int main(int numArgs, char *arcv[]) {
    // numArgs = num strings in array argv
    // argv = array of command-line argument strings]

    // std::cout << "main()" << std::endl;
    // std::ofstream output;
    // output.open("output.txt");


    if (numArgs == 1) {
        std::cout << "Input command line arguments please!" << std::endl;
        std::cout << "Type \"./main instructions\" for more instructions!" << std::endl;
        return 0;

    } else if (strcmp(arcv[1], "instructions") == 0) {
        // printf("Instructions here!\n");
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
        std::cout << "  ./main Dijkstra \"Nadzab Airport\" Tofino" << std::endl;
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

        // if (strcmp(arcv[1], "BFS") == 0) {
        //     std::cout << "BFS()" << std::endl;
        //     return 0;
        // }
        if (strcmp(arcv[1], "Dijkstra") == 0) {
            // ./main Dijkstra "Narsarsuaq Airport" "Talladega Municipal Airport"

            //  ./main Dijkstra "Arxan Yi'ershi Airport" "Talladega Municipal Airport"
            // ./main Dijkstra "Philadelphia International Airport" "Denver International Airport"
            std::cout << "Dijkstra()" << std::endl;
            std::map<std::string, int> name_to_id = data_.getNameToId();
            std::string start_node = arcv[2];
            std::string end_node = arcv[3];
            std::cout << "Starting Airport: " << arcv[2] << std::endl;
            std::cout << "Ending Airport: " << arcv[3] << std::endl;
            std::cout << "Start Node: " << name_to_id[arcv[2]] << std::endl;
            std::cout << "End Node: " << name_to_id[arcv[3]] << std::endl;
            std::vector<int> Dij_ = dijkstra(graph_, name_to_id[start_node], name_to_id[end_node], nodes_);
            if (Dij_.size() != 0) {
                std::cout << Dij_.size() << std::endl;
                std::cout << "Total Number of Airports (Including Start and End Airports): " << Dij_.size() << std::endl;
                std::map<int, std::string> id_to_name = data_.getIdToName();
                int i = 1;
                for (auto item: Dij_) {
                    std::cout << "Airport " << i << ": " << id_to_name[item] << std::endl;
                    i++;
                }
            } else {
                std::cout << "no path :(" << std::endl;
            }
            return 0;
        }
        if (strcmp(arcv[1], "Kosaraju") == 0) {
            std::cout << "Kos" << std::endl;
            std::map<int, std::string> id_to_name = data_.getIdToName();
            std::cout << "after map" << std::endl;
            std::vector<std::vector<int>> Kosaraju_ = kosaraju(graph_, nodes_);
            std::cout << "after function" << std::endl;
            for (auto vect : Kosaraju_) {
                std::cout << "Strongly Connected Component: ";
                for (auto item: vect) {
                    std::cout << id_to_name[item] << ", ";
                }
                std::cout << "\n";
            }
        }

        // if (strcmp(arcv[1], "A-star") == 0) {
        //     std::cout << "Astar()" << std::endl;
        //     return 0;
        // }

        myfile.close();

    }
    return 0;
}