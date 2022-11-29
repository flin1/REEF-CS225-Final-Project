#define CATCH_CONFIG_MAIN
#include <iostream>

#include "../src/data_parse.h"
#include "../src/graph.h"
#include "./catch/catch.hpp"

using namespace std;

TEST_CASE("a dummy test") {
    cout << "TEST CASE !" << endl;
    REQUIRE(3==3);
}

TEST_CASE("ParseInAirportNodes", "[dataparse]") {
    processCSV p;
    string filename = "test/dummyairports.csv"; // path should be from EXECUTABLE (so where tests is, currently in main directory)
    vector<string> tester_data = p.fileToVector(filename);
    vector<string> ans =
    { "10939,Shennongjia Hongping Airport,Shennongjia,China,31.626,110.34",
        "10940,Zhangjiakou Ningyuan Airport,Zhangjiakou,China,40.7386016846,114.930000305",
        "10941,Arxan Yi'ershi Airport,Arxan,China,47.3106,119.9117",
        "10942,Hengyang Nanyue Airport,Hengyang,China,26.9053,112.627998",
        "10943,Hongyuan Airport,Ngawa,China,32.53154,102.35224",
        "10949,Wonsan Kalma International Airport,Wonsan,North Korea,39.166801,127.486",
        "10951,Mestia Queen Tamar Airport,Mestia,Georgia,43.053597,42.749012",
        "10952,Magas Airport,Magas,Russia,43.3222999573,45.0125999451",
        "11004,Talladega Municipal Airport,Talladega,United States,33.569900512699995,-86.05090332030001" };
    REQUIRE(tester_data == ans);

    p.createAirportNode(tester_data);
    auto tester_nodes = p.getNodes();
    REQUIRE(tester_nodes[1].city == "Zhangjiakou");
    REQUIRE(tester_nodes[1].country == "China");
    REQUIRE(tester_nodes[1].id == 10940);
    REQUIRE(tester_nodes[1].latitude == 40.7386016846);
    REQUIRE(tester_nodes[1].longitude == 114.930000305);
    REQUIRE(tester_nodes[1].name == "Zhangjiakou Ningyuan Airport");

}

TEST_CASE("ParseInAirportRoutes", "[dataparse]") {
    processCSV p;

    string filename1 = "test/dummyairports.csv";
    vector<string> tester_data_airport = p.fileToVector(filename1);
    p.createAirportNode(tester_data_airport);

    string filename = "test/dummyroutes.csv"; // path should be from EXECUTABLE (so where "tests" is--currently in main directory)
    vector<string> tester_data = p.fileToVector(filename);
    vector<string> ans =
    { "10939,10940,0",
    "10941,10942,0",
    "10942,11004,0",
    "10951,10949,0",
    "10951,10952,0" };
    REQUIRE(tester_data == ans);

    p.createRoute(tester_data);
    auto tester_edges = p.getEdges();
    REQUIRE(tester_edges[1].sourceID == 10941);
    REQUIRE(tester_edges[1].destinationID == 10942);
    REQUIRE(std::abs(tester_edges[1].distance - 469.4285829148) < 0.001);

}

TEST_CASE("CreateAdjListGraph", "[dataparse]") {
    processCSV p;
    string filename1 = "test/dummyairports.csv";
    vector<string> tester_data_airport = p.fileToVector(filename1);
    p.createAirportNode(tester_data_airport);
    auto tester_nodes = p.getNodes();

    string filename2 = "test/dummyroutes.csv";
    vector<string> tester_data_routes = p.fileToVector(filename2);
    p.createRoute(tester_data_routes);
    auto tester_edges = p.getEdges();
    // segfault -> likely in data_parse.cpp line 94 because distance doesn't exist
    p.createAdjList(tester_nodes, tester_edges);

    auto test_graph = p.getGraph();
    auto node10951_neighbor1 = test_graph.at(10951)[0];
    REQUIRE(node10951_neighbor1.first.id == 10949);
    REQUIRE(std::abs(node10951_neighbor1.second - 7195.4643184578) < 0.001);
    auto node10951_neighbor2 = test_graph.at(10951)[1];
    REQUIRE(node10951_neighbor2.first.id == 10952);
    REQUIRE(std::abs(node10951_neighbor2.second - 5.1960316645) < 0.001);

}


TEST_CASE("Dijkstras", "[traversal]") {
    processCSV p;
    string filename1 = "test/dummyairports.csv";
    vector<string> tester_data_airport = p.fileToVector(filename1);
    p.createAirportNode(tester_data_airport);
    auto tester_nodes = p.getNodes();

    string filename2 = "test/dummyroutes.csv";
    vector<string> tester_data_routes = p.fileToVector(filename2);
    p.createRoute(tester_data_routes);
    auto tester_edges = p.getEdges();

    p.createAdjList(tester_nodes, tester_edges);
    auto graph = p.getGraph();

    vector<int> shortest_path = Dijkstra(graph, 10941, 11004, tester_nodes);

    REQUIRE(shortest_path[0] == 10941);
    REQUIRE(shortest_path[1] == 10942);
    REQUIRE(shortest_path[2] == 11004);

}