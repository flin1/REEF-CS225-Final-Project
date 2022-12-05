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
        std::cout << "else statment and setting up" << std::endl;
        processCSV data_;
        std::string airports_directory_ = "data/airports.csv";
        std::vector<std::string> airports_vector_ = data_.fileToVector(airports_directory_);
        data_.createAirportNode(airports_vector_);

        for (auto i : airports_vector_) {
            std::cout << i << std::endl;
        }

        std::string routes_directory_ = "data/routes.csv";
        std::vector<std::string> routes_vector_ = data_.fileToVector(routes_directory_);
        data_.createRoute(routes_vector_);

        std::vector<processCSV::AirportNode> nodes_ = data_.getNodes();
        std::vector<processCSV::Route> edges_ = data_.getEdges();
        data_.createAdjList(nodes_, edges_);

        std::map<int, std::vector<std::pair<processCSV::AirportNode,double>>> graph_ = data_.getGraph();

        std::ofstream myfile;
        myfile.open ("output.txt");

        if (strcmp(arcv[1], "BFS") == 0) {
            std::cout << "BFS()" << std::endl;
            return 0;
        }
        if (strcmp(arcv[1], "Dijkstra") == 0) {
            // ./main Dijkstra "Narsarsuaq Airport" "Talladega Municipal Airport"
            std::cout << "Dijkstra()" << std::endl;

            // auto start_node = arcv[2];
            // auto end_node = arcv[3];
            // for(int i = 0; i < numArgs; ++i) {
            //     std::cout << arcv[i] << '\n';
            // }
            
            // std::cout << arcv[0] << '\n';
            // std::cout << arcv[1] << '\n';
            // std::cout << arcv[2] << '\n';
            // std::cout << arcv[3] << '\n';
            // std::cout << typeid(arcv[2]).name() << std::endl;
            std::map<std::string, int> name_to_id = data_.getNameToId();
            std::cout << arcv[2] << std::endl;
            std::cout << arcv[3] << std::endl;
            std::cout << "start: " << name_to_id[arcv[2]] << std::endl;
            std::cout << "end: " << name_to_id[arcv[3]] << std::endl;
            // std::vector<int> Dij_ = Dijkstra(graph_, name_to_id[start_node], name_to_id[end_node], nodes_);

            // for (auto item: Dij_) {
            //     std::cout << std::to_string(item) << std::endl;
            // }
            return 0;
        }

        if (strcmp(arcv[1], "A-star") == 0) {
            std::cout << "Astar()" << std::endl;
            return 0;
        }

        myfile.close();

    }
    return 0;
}