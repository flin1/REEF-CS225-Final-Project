#define CATCH_CONFIG_MAIN
#include <iostream>

#include "../src/data_parse.h"
// #include "../src/graph.h"
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
    // REQUIRE(tester_nodes[1].latitude == 40.7386016846);
    // REQUIRE(tester_nodes[1].longitude == 114.930000305);
    REQUIRE(tester_nodes[1].name == "Zhangjiakou Ningyuan Airport");
}

TEST_CASE("ParseInAirportRoutes", "[dataparse]") {
    processCSV p;
    string filename = "test/dummyroutes.csv"; // path should be from EXECUTABLE (so where "tests" is--currently in main directory)
    vector<string> tester_data = p.fileToVector(filename);
    vector<string> ans =
    { "10939,10940,0",
    "10941,10942,0",
    "10951,10949,0",
    "10951,10952,0" };
    REQUIRE(tester_data == ans);

    p.createRoute(tester_data);
    auto tester_edges = p.getEdges();
    REQUIRE(tester_edges[1].destinationID == 10942);
    REQUIRE(tester_edges[1].sourceID == 10941);
    REQUIRE(tester_edges[1].id == 10940);
    // REQUIRE(tester_nodes[1].latitude == 40.7386016846);
    // REQUIRE(tester_nodes[1].longitude == 114.930000305);
    REQUIRE(tester_edges[1].name == "Zhangjiakou Ningyuan Airport");
}


