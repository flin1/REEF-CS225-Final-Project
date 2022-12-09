# Written Report of the Project

## Algorithms Output/Correctness
### BFS
```./main BFS "Unalaska Airport"```

The above command will output the following:

Unalaska Airport

ID: 3860

Unalaska Airport

Atka Airport

Nikolski Air Station

Akutan Seaplane Base

This is an example of the BFS traversal finding all the connected airports to the user inputted one. As shown, you can get to Atka, Nikolski, or Akutan from the Unalaska Airport. With the help of the BFS, a user can then see all the airports they can possibly reach from their starting point to help plan their trip. The BFS traversal was tested on the dummy dataset ("dummyaiarports.csv", "dummyroutes.csv") and passed all test cases which checked to see if the traversal from airport_id=10939, 10941, 10951 all outputted a vector traversing the correct nodes.


### Dijkstra's 
```./main Dijkstra "La Guardia Airport" "Chicago O'Hare International Airport"``` 

The above command will output the following: 

Airport 1: La Guardia Airport

Airport 2: Philadelphia International Airport

Airport 3: Harrisburg International Airport

Airport 4: Washington Dulles International Airport

Airport 5: Pittsburgh International Airport

Airport 6: Detroit Metropolitan Wayne County Airport

Airport 7: Kalamazoo Battle Creek International Airport

Airport 8: Chicago O'Hare International Airport

This is an example of finding the shortest path between two airports using this algorithm. Testing was initially done on a smaller, dummy dataset (test case is named "Dijkstras Small".) It was also tested on the entire, actual airport dataset (test case is named "Dijkstras Large".) They both finished running and outputted a list of airports which seemed reasonable for being the shortest path.


### Kosaraju's Strongly Connected Components 
```./main Kosaraju```

This is an example of finding all the strongly connected components. This will output a long list. Taking a look at line 888 shows us "Strongly Connected Component: Zhangjiakou Ningyuan Airport, Shijiazhuang Daguocun International Airport, Taiwan Taoyuan International Airport, ..." which means they are all airports with routes reachable to every single other airport in that cluster. Some other airports, such as "Thurrock Airfield" in line 905 are shown as its own SCC, which means it's not strongly connected to any other airports


## Answer to Leading Question 
Our Leading Question was "How can travelers find the quickest, easiest path from one airport to another?"

### Our Discoveries:
BFS: We discovered that certain airports are useful in getting anywhere around the world. For example, running BFS on "Chicago O'Hare International Airport" returned 3000+ airports in the BFS. This means a traveler can make a safe bet that if they search for tickets from O'Hare, they can get pretty much anywhere they'd like to. In addition, if a user is in an airport such as "Unalaska Airport", they can see what options they have to go to.

Dijkstra's: We discovered the shortest (by distance) path from one airport to another airport. This will allow the traveler to hop between flights that will require the shortest distance, hopefully shortening their travel time.

Kosaraju's Strongly Connected Components: We discovered that certain airports are parts of dense routes and strongly connected with one another. By identifying such components, a traveler can predict it would be very easy to find any flights to get around any of those locations within 1 component.

### Conclusion:
In conclusion, we answered our question by showing the user different possible routes to fit their needs--whether it be seeing which airports are currently reachable from their location, finding the flights with the shortest distance, or finding the most well-connected airports to allow several options. 

