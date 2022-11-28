#include "graph.h"
#include <unordered_set>
using namespace std;

// int main() {
//     return 0;
// }

/**
 * Dijkstra's Shortest Path Algorithm
 * This function finds the shortest path from the 1st airport to the 2nd airport.
 */
vector<int> Graph::Dijkstra(int origin_airport_id, int destination_airport_id) {
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
    //             double neighbor_cost = distances[current_airport.id] + neighbor.cost;
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
    vector<int> path;
    // while (backtrace_id != origin_airport_id) {
    //     path.push_back(backtrace_id);
    //     backtrace_id = previous[backtrace_id];
    // }

    // reverse(path.begin(), path.end());
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

//   extract path from previous
//   return path and distance