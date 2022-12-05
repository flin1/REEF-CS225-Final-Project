#include "graph.h"
#include <unordered_set>
using namespace std;

/**
 * Dijkstra's Shortest Path Algorithm
 * This function finds the shortest path from the 1st airport to the 2nd airport.
 */
vector<int> Dijkstra(const std::map<int, std::vector<std::pair<ProcessCSV::AirportNode,double> > > &graph, int origin_airport_id, int destination_airport_id, const std::vector<ProcessCSV::AirportNode> & allNodes) {
    // DEFAULT SETUP
    map<int,double> distances; // {neighbor_id, neighbor_distance} Keeps track of distances to each neighbor airport
    distances.insert({origin_airport_id, 0}); // Set distance to starting point as 0.
    for (auto airport : allNodes) {
        distances.insert({airport.id, INFINITY}); // Distances to all other nodes are INFINITY.

    }
    map<int, int> previous; // {previous_airportID, next_airportID} Keeps track of path so we can backtrace later. i.e. Airport1_id -> Airport2_id -> Airport3_id
    vector<bool> visited(graph.size(), false);
    auto comparator = [](pair<double, int> input1, pair<double, int> input2) { return input1.first > input2.first; };
    priority_queue<pair<double,int>, vector<pair<double,int> >, decltype(comparator) > priorityQueue(comparator); // Priority Queue is needed instead of normal queue so that popping from the top will always give us the node w/ smallest distance.
    priorityQueue.push({0,origin_airport_id}); // Push starting node into priority queue. Priority Queue: {airport_distance, airport_id}

    // TRAVERSAL
    while (priorityQueue.top().second != destination_airport_id) {
        int current_airport = priorityQueue.top().second;
        priorityQueue.pop(); // Get next best neighbor w shortest distance
        for (auto neighbor_node : graph.at(current_airport)) {
            int neighbor = neighbor_node.first.id;
            if (visited[neighbor] == false) {
                double neighbor_cost = distances[current_airport] + neighbor_node.second;
                if (neighbor_cost < distances[neighbor]) { // Update cumulative distances to neighbor nodes
                    distances[neighbor] = neighbor_cost;
                    priorityQueue.push({distances[neighbor], neighbor}); // Add to PQ. If that neighbor already existed in PQ, this one will simply take precedence and end up popped first.
                    previous[neighbor] = current_airport;

                }

            }

        }

        visited[current_airport] = true; // Mark current node as visited. Should not be re-added to PQ
    }

    int backtrace_id = destination_airport_id;
    vector<int> path;
    while (backtrace_id != origin_airport_id) {
        path.push_back(backtrace_id);
        backtrace_id = previous[backtrace_id];
    }
    path.push_back(origin_airport_id);

    reverse(path.begin(), path.end());

    // FINAL RESULT: vector holding airport_id's of traversal in order
    return path;
}














/**
 * A star Shortest Path Algorithm
 * This function finds the shortest path from the 1st airport to the 2nd airport.
 * Also accounts for a heuristic--Euclidean distance to end node--when choosing the best next node
 */
// vector<int> Graph::AStar(int origin_airport_id, int destination_airport_id) {
    // vector<double> distances(nodes_.size(), INFINITY);
    // distances[origin_airport_id] = 0;
    // map<int, int> previous;
    // vector<bool> visited(nodes_.size(), false);
    // AirportNode start;
    // for (AirportNode node : nodes_) {
    //     if (node.id == origin_airport_id) {
    //         start = node;
    //         break;
    //     }
    // }

    // priority_queue<pair<double,AirportNode>, vector<pair<double,AirportNode> >, greater<double> > priorityQueue;
    // priorityQueue.push({0,start});

    // while (priorityQueue.top().second.id != destination_airport_id) {
    //     AirportNode current_airport = priorityQueue.top().second;
    //     priorityQueue.pop();
    //     for (AirportNode neighbor : current_airport.neighbors) {
    //         if (visited[neighbor.id] == false) {
    //             // Double check to see if it's correctly including decimals
    //             double heuristic = sqrt(pow(current_airport.latitude - neighbor.latitude,2) + pow(current_airport.longitude - neighbor.longitude,2));
    //             double neighbor_cost = distances[current_airport.id] + neighbor.cost + heuristic;
    //             if (neighbor_cost < distances[neighbor.id]) {
    //                 distances[neighbor.id] = neighbor_cost;
    //                 priorityQueue.push({neighbor_cost, neighbor});
    //                 auto itr = previous.find(neighbor.id);
    //                 if (itr != previous.end()) {
    //                     itr->second = current_airport.id;
    //                 } else {
    //                     previous.insert({neighbor.id, current_airport.id});
    //                 }
    //             }
    //         }
    //     }

    //     visited[current_airport.id] = true;
    // }

    // int backtrace_id = destination_airport_id;
    // vector<int> path;
    // while (backtrace_id != origin_airport_id) {
    //     path.push_back(backtrace_id);
    //     backtrace_id = previous[backtrace_id];
    // }

    // reverse(path.begin(), path.end());
//     return path;
// }


