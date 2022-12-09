#include "BFS.h"
#include "data_parse.h"

std::vector<int> BFSTraversal(int startVertex, std::map<int, std::vector<std::pair<ProcessCSV::AirportNode,double> > > adjList) { 
  std::map<int, bool > mapVisited; //{airportId : true/false}
  mapVisited.clear();
  std::vector<int> result;
  std::queue<int> q; 
  //marks the starting node as vistited and pushes it to queue
  q.push(startVertex); 
  mapVisited[startVertex] = true;
  int curr = 0;

  while(!q.empty()) { 
    curr = q.front(); 
    q.pop(); 

    result.push_back(curr);

    std::vector<std::pair<ProcessCSV::AirportNode,double> > adj = adjList[curr];
  
    for (auto& it : adj) { 
      if (mapVisited[it.first.id] == false) { 
        mapVisited[it.first.id] = true; 
        q.push(it.first.id); 
      } 
    } 
  } 
  return result;
} 