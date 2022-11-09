#include "graph.h"

using namespace std;
//Dijkstra's Shortest Path Algorithm
vector<string> Graph::Dijkstra(string origin_airport, string destination_airport) {
    vector<int> distances(nodes_.size());
    map<string, string> previous;
    priority_queue<int> priorityQueue;
    bool visited[nodes_.size()];

    while (priority_queue.top())
}
// Dijkstra(Graph, source, destination):

//   initialize distances  // initialize tentative distance value
//   initialize previous   // initialize a map that maps current node -> its previous node
//   initialize priority_queue   // initialize the priority queue
//   initialize visited

//   while the top of priority_queue is not destination:
//       get the current_node from priority_queue
//       for neighbor in current_node's neighbors and not in visited:
//           if update its neighbor's distances:
//               previous[neighbor] = current_node
//       save current_node into visited

//   extract path from previous
//   return path and distance


#hi