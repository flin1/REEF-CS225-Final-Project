#include "BFS.h"

BFS::BFS(int vertex) {
  numVertices = vertex;
  adjacency_list = new std::vector<int>[vertex];
  mapVisited.clear();
}

BFS::~BFS() {
  if (adjacency_list != NULL){
    delete[] adjacency_list; 
  }
}

//add dest to source's adjacency_list
void BFSGraph::addEdge(int source, int destination) {
  adjacency_list[source].push_back(destination);
}

std::vector<std::string> BFSGraph::BFS(int startVertex, string airport_file, string route_file) { 
   graph g();
    std::vector<Vertex> vec = g.getVertices();
    std::vector<std::string> result;
    std::queue<int> q; 
    //marks the starting node as vistited and pushes it to queue
    q.push(startVertex); 
    mapVisited[startVertex] = true;

    int curr = 0;
  
    while(!q.empty()) { 
        curr = q.front(); 
        q.pop(); 

        result.push_back(vec[curr]);
       //std::cout << vec[curr] << std::endl; 
        std::vector<int> adj = adjacency_list[curr];
  
        for (auto& it : adj) { 
            if (mapVisited[it] == false) { 
              mapVisited[it] = true; 
              q.push(it); 
            } 
        } 
    } 
    return result;
} 