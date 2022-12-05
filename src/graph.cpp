#include "graph.h"
#include <unordered_set>
#include <list>

using namespace std;

/**
 * Dijkstra's Shortest Path Algorithm
 * This function finds the shortest path from the 1st airport to the 2nd airport.
 */
vector<int> dijkstra(const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > &graph, int origin_airport_id, int destination_airport_id, const std::vector<processCSV::AirportNode> & allNodes) {
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

// DFS traversal. Records time it found that node. Once finished traversing all its neighbors, add to stack.
void fillOrder(int v, map<int, bool> & visited, stack<int> &Stack, const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > &graph)
{
    // Mark the current node as visited
    visited.at(v) = true;
 
    // Recur for all the vertices adjacent to this vertex
    // cout << "Grabbing neighbors for " << v << endl;
    auto neighbors = graph.at(v);
    // for (auto n : neighbors) {
        // cout << n.first.name << endl;
    // }
    for(auto i = neighbors.begin(); i != neighbors.end(); ++i)
        if(!visited[i->first.id])
            fillOrder(i->first.id, visited, Stack, graph);
 
    // All vertices reachable from v are processed by now, push v
    Stack.push(v);
}

std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > getTranspose(const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > &graph, const std::vector<processCSV::AirportNode> & allNodes)
{
    std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > graph_transposed;
    // std::copy(graph.begin(), graph.end(), std::inserter(graph_transposed, graph_transposed.end()));

    for (auto airport : allNodes) {
        std::vector<std::pair<processCSV::AirportNode,double>> airportVect;
        std::pair<int,std::vector<std::pair<processCSV::AirportNode,double>>> pair (airport.id, airportVect); // airport id, adj vector
        graph_transposed.insert(pair);
    }

    for (auto node : allNodes)
    {
        // Recur for all the vertices adjacent to this vertex
        auto neighbors = graph.at(node.id);
        for(auto i = neighbors.begin(); i != neighbors.end(); ++i)
        {
            graph_transposed.at(i->first.id).push_back({node, i->second});
        }
    }
    return graph_transposed;
}

// A recursive function to print DFS starting from v
void dfsUtil(int airport_id, map<int, bool> & visited, const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > &graph)
{
    // Mark the current node as visited and print it
    visited.at(airport_id) = true;
    cout << airport_id << endl;

    // Recur for all the vertices adjacent to this vertex
    auto neighbors = graph.at(airport_id);
    // cout << airport_id << "'s neighbors: ";
    // for (auto n : neighbors) {
    //     cout << n.first.id;
    // }
    // cout << '\n';
    for (auto i = neighbors.begin(); i != neighbors.end(); ++i)
        if (!visited.at(i->first.id))
            dfsUtil(i->first.id, visited, graph);
}

void kosaraju( const std::map<int, std::vector<std::pair<processCSV::AirportNode,double> > > &graph, const std::vector<processCSV::AirportNode> & allNodes) {
    stack<int> Stack;
    // cout << "Starting Kosaraju" << endl;
    for (auto n : allNodes) {
        auto neighbors = graph.at(n.id);
        cout << n.id << "'s neighbors:";
        for (auto p : neighbors) {
            cout << p.first.id;
        }
        cout << '\n';
    }

    // Mark all the vertices as not visited (For first DFS)
    map<int, bool> visited; // { airport_id, IsVisited=true/false }
    for(auto node : allNodes)
        visited.insert({node.id, false});
 
    // for (auto const &pair: visited) {
    //     std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    // }
    // Fill vertices in stack according to their finishing times
    for (auto node : allNodes)
        if(visited[node.id] == false)
            fillOrder(node.id, visited, Stack, graph);
 
    // Create a reversed graph
    auto transpose_graph = getTranspose(graph, allNodes);
 
    // Mark all the vertices as not visited (For second DFS)
    for(auto node : allNodes)
        visited.at(node.id) = false;
 
    // Now process all vertices in order defined by Stack
    while (Stack.empty() == false)
    {
        // Pop a vertex from stack
        int v = Stack.top();
        Stack.pop();
 
        // Print Strongly connected component of the popped vertex
        // cout << "trying to visit: " << v << endl;
        if (visited.at(v) == false)
        {
            dfsUtil(v, visited, transpose_graph);
            cout <<'\n';
        }
    }
}