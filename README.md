# REEF-CS225-Final-Project
CS225 Final Project FA22 

**Developers:** 
- Rachel Tin
- Emily Ho
- Esther Lee 
- Fay Lin

## Video Presentation 
[ADD LINK]

## Project Proposal Document

https://docs.google.com/document/d/1ET2rXG5EWV01dRvoGY7M5GKtDvS1ptP5P8KgomLalBA/edit?usp=sharing

## Dataset Source
https://openflights.org/data.html (OpenFlights Airport and Route datasets)

## Leading Question

Welcome to REEF airlines!✈️☁️ How may we be of assistance?

Using the data given by the CS 225 repository, our group has decided to help travelers find the **quickest, easiest path from one airport to another**. Our goal for this project was to use concepts we learned in CS225 to create a program that allows us to efficiently search for short paths within a graphical representation of our data. Each node being an airport in the world, and each edge being a flight connecting the two airports. 

Our team decided to use Dijkstra's Shortest Path Algorithm to analyze different paths between nodes and find the shortest one connecting them. 
[INCLUDE MORE DETAIL]

We will also be using Kosaraju's algorithm to find strongly connected components. Strongly connected components are airports that can all be accessed by any other airports in the component. 
[INCLUDE MORE DETAIL]

A breadth-first search traversal will also be used as it can find a node regardless of the size of the tree. This can be used by the traveler to reach any point on the graph. For instance, they could choose a starting location and they will be able to see all the possible airports  Our graph will be able to accommodate for new airports and flights added as the world is ever increasing in size and travel methods. Thank you for riding with us and we hope you enjoyed your flight!

## File Structure
The raw data and cleaned data are located within the data directory in a .csv format. Raw data is identifiable using the "old" prefix. 

The results.md file is located in the main directory alongside the README.md.

The results.md file contains a written description of our function outputs and success in making the functions work, as well as how well we answered the leading question.

All code is located in the src directory:
- The convert.py file cleans the data and removes unnecessary/bad data using python pandas
- The data_parse.h and data_parse.cpp files create a processCSV class to go through the .csv files and converts them to c++ nodes and edges. These nodes and edges are then organized in the form of an adjacency list to be used by the BFS and shortest path algoritms
- The graph.h and graph.cpp files hold the Dijkstra's algorithm (used to find the shortest path between any given set of two airports) and Kosaraju's algorithm (which locates strongly connected components). 
- The BFS.h and BFS.cpp files store the BFS traversal algorithm to traverse through all the nodes within our graph.

## Running Instructions
  - Begin by running ```make clean```
  - All inputted items will be separated by spaces. Begin command line argument with "./main"
  - Input name graph algorithm you want to use
  - Hit "enter" and then run!
  
Possible Graph Algorithms:

[ MUST USE AN AIRPORT NAME FROM TABLE. SEE BOTTOM OF THIS PAGE ]

**Using BFS in the Command Line:** ```./main BFS "airport_name"```

  * Example: using Nadzab Airport as our start airport: ```./main BFS "Nadzab Airport"```

**Using Dijkstra Algorithm in the Command Line:** ```./main Dijkstra "airport1_name" "airport2_name"```
      
  * Example: Nadzab Airport and Tofino as our start airport and end airport: ```./main Dijkstra "Thule Air Base" "Kangerlussuaq Airport"```
  
**Using Kosaraju Algorithm in the Command Line:** ```./main Kosaraju```

[ IF AIRPORT NAMES ARE MORE THAN ONE WORD, PUT ENTIRE NAME OF AN AIRPORT INSIDE DOUBLE QUOTES ]



## Tests 
 
Test cases for this codebase are located within the tests directory and can be found in the test_unit.cpp file. Within this file are test cases that test:
- file reading
- data conversion into node and edges
- organization into an adjacency list
- Dijkstra's algorithm functionality + correct output
- BFS traversal functionality + correct output
- Kosaraju's algorithm functionality + correct output

**The tests can be executed using the following commands:** 
```
make tests
./tests
```




| POSSIBLE AIRPORT NAMES                                                   |
| ------------------------------------------------------------------------ |
| Goroka Airport                                                           |
| Madang Airport                                                           |
| Mount Hagen Kagamuga Airport                                             |
| Nadzab Airport                                                           |
| Port Moresby Jacksons International Airport                              |
| Wewak International Airport                                              |
| Narsarsuaq Airport                                                       |
| Godthaab / Nuuk Airport                                                  |
| Kangerlussuaq Airport                                                    |
| Thule Air Base                                                           |
| Akureyri Airport                                                         |
| Egilsstair Airport                                                       |
| Hornafjrur Airport                                                       |
| Hsavk Airport                                                            |
| safjrur Airport                                                          |
| Keflavik International Airport                                           |
| Patreksfjrur Airport                                                     |
| Reykjavik Airport                                                        |
| Siglufjrur Airport                                                       |
| Vestmannaeyjar Airport                                                   |
| Sault Ste Marie Airport                                                  |
| Winnipeg / St. Andrews Airport                                           |
| Halifax / CFB Shearwater Heliport                                        |
| St. Anthony Airport                                                      |
| Tofino / Long Beach Airport                                              |
| Kugaaruk Airport                                                         |
| Baie Comeau Airport                                                      |
| CFB Bagotville                                                           |
| Baker Lake Airport                                                       |
| Campbell River Airport                                                   |
| Brandon Municipal Airport                                                |
| Cambridge Bay Airport                                                    |
| Nanaimo Airport                                                          |
| Castlegar/West Kootenay Regional Airport                                 |
| Miramichi Airport                                                        |
| Charlo Airport                                                           |
| Kugluktuk Airport                                                        |
| Coronation Airport                                                       |
| Chilliwack Airport                                                       |
| Clyde River Airport                                                      |
| Coral Harbour Airport                                                    |
| Dawson City Airport                                                      |
| Burwash Airport                                                          |
| Princeton Airport                                                        |
| Deer Lake Airport                                                        |
| Dease Lake Airport                                                       |
| Dauphin Barker Airport                                                   |
| Dawson Creek Airport                                                     |
| Edmonton International Airport                                           |
| Arviat Airport                                                           |
| Estevan Airport                                                          |
| Edson Airport                                                            |
| Eureka Airport                                                           |
| Inuvik Mike Zubko Airport                                                |
| Iqaluit Airport                                                          |
| Fredericton Airport                                                      |
| Forestville Airport                                                      |
| Flin Flon Airport                                                        |
| Fort Resolution Airport                                                  |
| Fort Simpson Airport                                                     |
| Kingston Norman Rogers Airport                                           |
| La Grande Rivire Airport                                                 |
| Gasp (Michel-Pouliot) Airport                                            |
| Geraldton Greenstone Regional Airport                                    |
| les-de-la-Madeleine Airport                                              |
| Hudson Bay Airport                                                       |
| Dryden Regional Airport                                                  |
| Ulukhaktok Holman Airport                                                |
| Gjoa Haven Airport                                                       |
| John C. Munro Hamilton International Airport                             |
| Montral / Saint-Hubert Airport                                           |
| Hay River / Merlyn Carter Airport                                        |
| Halifax / Stanfield International Airport                                |
| Atikokan Municipal Airport                                               |
| Pond Inlet Airport                                                       |
| St Jean Airport                                                          |
| Stephenville Airport                                                     |
| Kamloops Airport                                                         |
| Waterloo Airport                                                         |
| Schefferville Airport                                                    |
| Kindersley Airport                                                       |
| Buttonville Municipal Airport                                            |
| Chapleau Airport                                                         |
| Meadow Lake Airport                                                      |
| Lloydminster Airport                                                     |
| Alert Airport                                                            |
| Kelowna International Airport                                            |
| Mayo Airport                                                             |
| Moose Jaw Air Vice Marshal C. M. McEwen Airport                          |
| Fort McMurray Airport                                                    |
| Moosonee Airport                                                         |
| Maniwaki Airport                                                         |
| Montreal International (Mirabel) Airport                                 |
| Natashquan Airport                                                       |
| Ottawa / Gatineau Airport                                                |
| Matagami Airport                                                         |
| Old Crow Airport                                                         |
| CFB Cold Lake                                                            |
| High Level Airport                                                       |
| Ottawa Macdonald-Cartier International Airport                           |
| Prince Albert Glass Field                                                |
| Peace River Airport                                                      |
| Southport Airport                                                        |
| Pitt Meadows Airport                                                     |
| Pickle Lake Airport                                                      |
| Port Menier Airport                                                      |
| Peterborough Airport                                                     |
| Prince Rupert Airport                                                    |
| Fort Chipewyan Airport                                                   |
| Muskoka Airport                                                          |
| Quebec Jean Lesage International Airport                                 |
| Red Deer Regional Airport                                                |
| Windsor Airport                                                          |
| Watson Lake Airport                                                      |
| Kenora Airport                                                           |
| Lethbridge County Airport                                                |
| Greater Moncton International Airport                                    |
| Comox Airport                                                            |
| Regina International Airport                                             |
| Thunder Bay Airport                                                      |
| Grande Prairie Airport                                                   |
| Yorkton Municipal Airport                                                |
| North Battleford Airport                                                 |
| Gander International Airport                                             |
| Sydney / J.A. Douglas McCurdy Airport                                    |
| Quesnel Airport                                                          |
| Resolute Bay Airport                                                     |
| Rivire-du-Loup Airport                                                   |
| Roberval Airport                                                         |
| Rocky Mountain House Airport                                             |
| Rankin Inlet Airport                                                     |
| Sudbury Airport                                                          |
| Sherbrooke Airport                                                       |
| Saint John Airport                                                       |
| Fort Smith Airport                                                       |
| Nanisivik Airport                                                        |
| Summerside Airport                                                       |
| Sachs Harbour (David Nasogaluak Jr. Saaryuaq) Airport                    |
| Cape Dorset Airport                                                      |
| Thompson Airport                                                         |
| CFB Trenton                                                              |
| Timmins/Victor M. Power                                                  |
| Billy Bishop Toronto City Centre Airport                                 |
| Tuktoyaktuk Airport                                                      |
| Montreal / Pierre Elliott Trudeau International Airport                  |
| Repulse Bay Airport                                                      |
| Hall Beach Airport                                                       |
| Rouyn Noranda Airport                                                    |
| La Ronge Airport                                                         |
| Vermilion Airport                                                        |
| Qikiqtarjuaq Airport                                                     |
| Val-d'Or Airport                                                         |
| Kuujjuaq Airport                                                         |
| Norman Wells Airport                                                     |
| Vancouver International Airport                                          |
| Buffalo Narrows Airport                                                  |
| Wiarton Airport                                                          |
| Petawawa Airport                                                         |
| Winnipeg / James Armstrong Richardson International Airport              |
| Wabush Airport                                                           |
| Williams Lake Airport                                                    |
| Wrigley Airport                                                          |
| Cranbrook/Canadian Rockies International Airport                         |
| Edmonton City Centre (Blatchford Field) Airport                          |
| Saskatoon John G. Diefenbaker International Airport                      |
| Medicine Hat Airport                                                     |
| Fort St John Airport                                                     |
| Sioux Lookout Airport                                                    |
| Pangnirtung Airport                                                      |
| Earlton (Timiskaming Regional) Airport                                   |
| Prince George Airport                                                    |
| Northwest Regional Airport Terrace-Kitimat                               |
| London Airport                                                           |
| Abbotsford Airport                                                       |
| Whitehorse / Erik Nielsen International Airport                          |
| North Bay Jack Garland Airport                                           |
| Calgary International Airport                                            |
| Smithers Airport                                                         |
| Fort Nelson Airport                                                      |
| Penticton Airport                                                        |
| Charlottetown Airport                                                    |
| Taloyoak Airport                                                         |
| Victoria International Airport                                           |
| Lynn Lake Airport                                                        |
| Swift Current Airport                                                    |
| Churchill Airport                                                        |
| Goose Bay Airport                                                        |
| St. John's International Airport                                         |
| Kapuskasing Airport                                                      |
| Armstrong Airport                                                        |
| Mont Joli Airport                                                        |
| Lester B. Pearson International Airport                                  |
| Downsview Airport                                                        |
| Gore Bay Manitoulin Airport                                              |
| Yellowknife Airport                                                      |
| Slave Lake Airport                                                       |
| Sandspit Airport                                                         |
| Chris Hadfield Airport                                                   |
| Port Hardy Airport                                                       |
| Whitecourt Airport                                                       |
| Sept-les Airport                                                         |
| Teslin Airport                                                           |
| CFB Greenwood                                                            |
| Faro Airport                                                             |
| Fort Mcpherson Airport                                                   |
| Blida Airport                                                            |
| Bou Saada Airport                                                        |
| Soummam Airport                                                          |
| Houari Boumediene Airport                                                |
| Djanet Inedbirene Airport                                                |
| Boufarik Airport                                                         |
| Reggane Airport                                                          |
| Illizi Takhamalt Airport                                                 |
| Ain Oussera Airport                                                      |
| Aguenar  Hadj Bey Akhamok Airport                                        |
| Jijel Ferhat Abbas Airport                                               |
| Mecheria Airport                                                         |
| Relizane Airport                                                         |
| Rabah Bitat Airport                                                      |
| Mohamed Boudiaf International Airport                                    |
| Cheikh Larbi Tbessi Airport                                              |
| Hassi R'Mel Airport                                                      |
| Bou Chekif Airport                                                       |
| Bou Sfer Airport                                                         |
| Tindouf Airport                                                          |
| Ech Cheliff Airport                                                      |
| Tafaraoui Airport                                                        |
| Zenata  Messali El Hadj Airport                                          |
| Es Senia Airport                                                         |
| Sidi Bel Abbes Airport                                                   |
| Ghriss Airport                                                           |
| Touat Cheikh Sidi Mohamed Belkebir Airport                               |
| Biskra Airport                                                           |
| El Golea Airport                                                         |
| Noumrat - Moufdi Zakaria Airport                                         |
| Oued Irara Airport                                                       |
| In Salah Airport                                                         |
| Touggourt Sidi Madhi Airport                                             |
| Laghouat Airport                                                         |
| Timimoun Airport                                                         |
| Ain el Beida Airport                                                     |
| In Amnas Airport                                                         |
| Cadjehoun Airport                                                        |
| Ouagadougou Airport                                                      |
| Bobo Dioulasso Airport                                                   |
| Kotoka International Airport                                             |
| Tamale Airport                                                           |
| Wa Airport                                                               |
| Sunyani Airport                                                          |
| Takoradi Airport                                                         |
| Port Bouet Airport                                                       |
| Bouak Airport                                                            |
| Daloa Airport                                                            |
| Korhogo Airport                                                          |
| Man Airport                                                              |
| San Pedro Airport                                                        |
| Yamoussoukro Airport                                                     |
| Nnamdi Azikiwe International Airport                                     |
| Akure Airport                                                            |
| Benin Airport                                                            |
| Margaret Ekpo International Airport                                      |
| Akanu Ibiam International Airport                                        |
| Gusau Airport                                                            |
| Ibadan Airport                                                           |
| Ilorin International Airport                                             |
| Yakubu Gowon Airport                                                     |
| Kaduna Airport                                                           |
| Mallam Aminu International Airport                                       |
| Maiduguri International Airport                                          |
| Makurdi Airport                                                          |
| Murtala Muhammed International Airport                                   |
| Minna Airport                                                            |
| Port Harcourt International Airport                                      |
| Sadiq Abubakar III International Airport                                 |
| Yola Airport                                                             |
| Zaria Airport                                                            |
| Maradi Airport                                                           |
| Diori Hamani International Airport                                       |
| Tahoua Airport                                                           |
| Mano Dayak International Airport                                         |
| Dirkou Airport                                                           |
| Diffa Airport                                                            |
| Zinder Airport                                                           |
| Monastir Habib Bourguiba International Airport                           |
| Tunis Carthage International Airport                                     |
| Sidi Ahmed Air Base                                                      |
| Remada Air Base                                                          |
| Gafsa Ksar International Airport                                         |
| Gabs Matmata International Airport                                       |
| Borj El Amri Airport                                                     |
| Djerba Zarzis International Airport                                      |
| El Borma Airport                                                         |
| Sfax Thyna International Airport                                         |
| Tozeur Nefta International Airport                                       |
| Niamtougou International Airport                                         |
| Lom-Tokoin Airport                                                       |
| Antwerp International Airport (Deurne)                                   |
| Beauvechain Air Base                                                     |
| Kleine Brogel Air Base                                                   |
| Brussels Airport                                                         |
| Jehonville Air Base                                                      |
| Brussels South Charleroi Airport                                         |
| Chivres Air Base                                                         |
| Koksijde Air Base                                                        |
| Florennes Air Base                                                       |
| Wevelgem Airport                                                         |
| Lige Airport                                                             |
| Ostend-Bruges International Airport                                      |
| Zutendaal Air Base                                                       |
| Brustem Airfield Sint Truiden                                            |
| Saint Hubert Air Base                                                    |
| Ursel Air Base                                                           |
| Weelde Air Base                                                          |
| Zoersel (Oostmalle) Airfield                                             |
| Flugplatz Bautzen                                                        |
| Altenburg-Nobitz Airport                                                 |
| Dessau Airfield                                                          |
| Eisenhttenstadt Airfield                                                 |
| Groenhain Airport                                                        |
| Merseburg Airport                                                        |
| Halle-Oppin Airport                                                      |
| Riesa-Ghlis Airport                                                      |
| Rechlin-Lrz Airport                                                      |
| Strausberg Airport                                                       |
| Schnhagen Airport                                                        |
| Barth Airport                                                            |
| Jena-Schngleina Airfield                                                 |
| Kyritz Airport                                                           |
| Magdeburg City Airport                                                   |
| Rothenburg/Grlitz Airport                                                |
| Anklam Airfield                                                          |
| Cottbus-Drewitz Airport                                                  |
| Kamenz Airport                                                           |
| Berlin-Schnefeld Airport                                                 |
| Dresden Airport                                                          |
| Erfurt Airport                                                           |
| Frankfurt am Main Airport                                                |
| Mnster Osnabrck Airport                                                  |
| Hamburg Airport                                                          |
| Berlin-Tempelhof International Airport                                   |
| Cologne Bonn Airport                                                     |
| Dsseldorf Airport                                                        |
| Munich Airport                                                           |
| Nuremberg Airport                                                        |
| Leipzig/Halle Airport                                                    |
| Saarbrcken Airport                                                       |
| Stuttgart Airport                                                        |
| Berlin-Tegel Airport                                                     |
| Hannover Airport                                                         |
| Bremen Airport                                                           |
| Frankfurt-Egelsbach Airport                                              |
| Frankfurt-Hahn Airport                                                   |
| Mannheim-City Airport                                                    |
| Allendorf/Eder Airport                                                   |
| Worms Airport                                                            |
| Mainz-Finthen Airport                                                    |
| Eisenach-Kindel Airport                                                  |
| Siegerland Airport                                                       |
| Hamburg-Finkenwerder Airport                                             |
| Kiel-Holtenau Airport                                                    |
| Lbeck Blankensee Airport                                                 |
| Flugplatz Dahlemer Binz                                                  |
| Meinerzhagen Airport                                                     |
| Arnsberg-Menden Airport                                                  |
| Essen Mulheim Airport                                                    |
| Bielefeld Airport                                                        |
| Mnchengladbach Airport                                                   |
| Paderborn Lippstadt Airport                                              |
| Stadtlohn-Vreden Airport                                                 |
| Dortmund Airport                                                         |
| Augsburg Airport                                                         |
| Biberach a.d. Ri Airfield                                                |
| Eggenfelden Airport                                                      |
| Mindelheim-Mattsies Airfield                                             |
| Oberpfaffenhofen Airport                                                 |
| Straubing Airport                                                        |
| Vilshofen Airport                                                        |
| Leutkirch-Unterzeil Airport                                              |
| Friedrichshafen Airport                                                  |
| Schwerin Parchim Airport                                                 |
| Stendal-Borstel Airport                                                  |
| Aalen-Heidenheim/Elchingen Airport                                       |
| Bayreuth Airport                                                         |
| Burg Feuerstein Airport                                                  |
| Hof-Plauen Airport                                                       |
| Hafurt-Schweinfurt Airport                                               |
| Koblenz-Winningen Airfield                                               |
| Trier-Fhren Airport                                                      |
| Speyer Airfield                                                          |
| Zweibrcken Airport                                                       |
| Donaueschingen-Villingen Airport                                         |
| Freiburg i. Br. Airport                                                  |
| Mengen-Hohentengen Airport                                               |
| Adolf Wrth Airport                                                       |
| Finsterwalde/Schacksdorf Airport                                         |
| Braunschweig-Wolfsburg Airport                                           |
| Kassel-Calden Airport                                                    |
| Hildesheim Airport                                                       |
| Bremerhaven Airport                                                      |
| Emden Airport                                                            |
| Leer-Papenburg Airport                                                   |
| Wilhelmshaven-Mariensiel Airport                                         |
| Borkum Airport                                                           |
| Norderney Airport                                                        |
| Flensburg-Schferhaus Airport                                             |
| Rendsburg-Schachtholm Airport                                            |
| Westerland Sylt Airport                                                  |
| mari Air Base                                                            |
| Krdla Airport                                                            |
| Kuressaare Airport                                                       |
| Prnu Airport                                                             |
| Lennart Meri Tallinn Airport                                             |
| Tartu Airport                                                            |
| Enontekio Airport                                                        |
| Eura Airport                                                             |
| Halli Airport                                                            |
| Helsinki Malmi Airport                                                   |
| Helsinki Vantaa Airport                                                  |
| Hameenkyro Airport                                                       |
| Hanko Airport                                                            |
| Hyvink Airfield                                                          |
| Kiikala Airport                                                          |
| Immola Airport                                                           |
| Kitee Airport                                                            |
| Ivalo Airport                                                            |
| Joensuu Airport                                                          |
| Jyvaskyla Airport                                                        |
| Kauhava Airport                                                          |
| Kemi-Tornio Airport                                                      |
| Kajaani Airport                                                          |
| Kauhajoki Airport                                                        |
| Kokkola-Pietarsaari Airport                                              |
| Kemijarvi Airport                                                        |
| Kuusamo Airport                                                          |
| Kittil Airport                                                           |
| Kuopio Airport                                                           |
| Lahti Vesivehmaa Airport                                                 |
| Lappeenranta Airport                                                     |
| Mariehamn Airport                                                        |
| Menkijarvi Airport                                                       |
| Mikkeli Airport                                                          |
| Nummela Airport                                                          |
| Oulu Airport                                                             |
| Piikajarvi Airport                                                       |
| Pori Airport                                                             |
| Pudasjrvi Airport                                                        |
| Pyhsalmi Airport                                                         |
| Raahe Pattijoki Airport                                                  |
| Rantasalmi Airport                                                       |
| Rovaniemi Airport                                                        |
| Rayskala Airport                                                         |
| Savonlinna Airport                                                       |
| Selanpaa Airport                                                         |
| Sodankyla Airport                                                        |
| Tampere-Pirkkala Airport                                                 |
| Teisko Airport                                                           |
| Turku Airport                                                            |
| Utti Air Base                                                            |
| Vaasa Airport                                                            |
| Varkaus Airport                                                          |
| Ylivieska Airfield                                                       |
| Belfast International Airport                                            |
| St Angelo Airport                                                        |
| George Best Belfast City Airport                                         |
| City of Derry Airport                                                    |
| Birmingham International Airport                                         |
| Coventry Airport                                                         |
| Leicester Airport                                                        |
| Gloucestershire Airport                                                  |
| Wolverhampton Halfpenny Green Airport                                    |
| Cotswold Airport                                                         |
| Turweston Airport                                                        |
| Wellesbourne Mountford Airport                                           |
| Manchester Airport                                                       |
| Manchester Woodford Airport                                              |
| Royal Marines Base Chivenor Airport                                      |
| Newquay Cornwall Airport                                                 |
| RAF Lyneham                                                              |
| MoD Boscombe Down Airport                                                |
| RNAS Culdrose                                                            |
| MoD St. Athan                                                            |
| RNAS Yeovilton                                                           |
| Haverfordwest Airport                                                    |
| Cardiff International Airport                                            |
| Swansea Airport                                                          |
| Bristol Airport                                                          |
| Liverpool John Lennon Airport                                            |
| London Luton Airport                                                     |
| Plymouth City Airport                                                    |
| Bournemouth Airport                                                      |
| Southampton Airport                                                      |
| Lasham Airport                                                           |
| Alderney Airport                                                         |
| Guernsey Airport                                                         |
| Jersey Airport                                                           |
| Shoreham Airport                                                         |
| London Biggin Hill Airport                                               |
| London Gatwick Airport                                                   |
| London City Airport                                                      |
| Farnborough Airport                                                      |
| Chalgrove Airport                                                        |
| Blackbushe Airport                                                       |
| London Heathrow Airport                                                  |
| Southend Airport                                                         |
| Lydd Airport                                                             |
| Kent International Airport                                               |
| Brough Airport                                                           |
| Carlisle Airport                                                         |
| Retford Gamston Airport                                                  |
| Blackpool International Airport                                          |
| Humberside Airport                                                       |
| Barrow Walney Island Airport                                             |
| Leeds Bradford Airport                                                   |
| Warton Airport                                                           |
| Hawarden Airport                                                         |
| Isle of Man Airport                                                      |
| Newcastle Airport                                                        |
| Durham Tees Valley Airport                                               |
| East Midlands Airport                                                    |
| Llanbedr Airport                                                         |
| RAF Ternhill                                                             |
| RAF Shawbury                                                             |
| RAF Woodvale                                                             |
| Kirkwall Airport                                                         |
| Sumburgh Airport                                                         |
| Wick Airport                                                             |
| Aberdeen Dyce Airport                                                    |
| Inverness Airport                                                        |
| Glasgow International Airport                                            |
| Edinburgh Airport                                                        |
| Islay Airport                                                            |
| Glasgow Prestwick Airport                                                |
| Benbecula Airport                                                        |
| Scatsta Airport                                                          |
| Dundee Airport                                                           |
| Stornoway Airport                                                        |
| Tiree Airport                                                            |
| RAF Leuchars                                                             |
| RAF Lossiemouth                                                          |
| Cambridge Airport                                                        |
| Peterborough Business Airport                                            |
| Norwich International Airport                                            |
| London Stansted Airport                                                  |
| North Weald Airport                                                      |
| Sheffield City Heliport                                                  |
| Cranfield Airport                                                        |
| Exeter International Airport                                             |
| Bristol Filton Airport                                                   |
| Oxford (Kidlington) Airport                                              |
| RAF Benson                                                               |
| RAF Lakenheath                                                           |
| RAF Mildenhall                                                           |
| RAF Wattisham                                                            |
| RAF Wyton                                                                |
| RAF Fairford                                                             |
| RAF Brize Norton                                                         |
| RAF Odiham                                                               |
| DCAE Cosford Air Base                                                    |
| RAF Northolt                                                             |
| RAF Coningsby                                                            |
| RAF Dishforth                                                            |
| Leeming Airport                                                          |
| Leeds East Airport                                                       |
| RAF Honington                                                            |
| RAF Cottesmore                                                           |
| RAF Scampton                                                             |
| RAF Wittering                                                            |
| RAF Linton-On-Ouse                                                       |
| RAF Waddington                                                           |
| RAF Topcliffe                                                            |
| RAF Cranwell                                                             |
| RAF Barkston Heath                                                       |
| RAF Marham                                                               |
| Mount Pleasant Airport                                                   |
| Amsterdam Airport Schiphol                                               |
| Budel Airfield Kempen                                                    |
| Maastricht Aachen Airport                                                |
| Deelen Air Base                                                          |
| Drachten Airport                                                         |
| Eindhoven Airport                                                        |
| Eelde Airport                                                            |
| Gilze Rijen Air Base                                                     |
| De Kooy Airport                                                          |
| Lelystad Airport                                                         |
| Leeuwarden Air Base                                                      |
| Rotterdam The Hague Airport                                              |
| Soesterberg Air Base                                                     |
| Twente Airport                                                           |
| Valkenburg Naval Air Base                                                |
| Woensdrecht Air Base                                                     |
| Cork Airport                                                             |
| Galway Airport                                                           |
| Dublin Airport                                                           |
| Ireland West Knock Airport                                               |
| Kerry Airport                                                            |
| Casement Air Base                                                        |
| Shannon Airport                                                          |
| Sligo Airport                                                            |
| Waterford Airport                                                        |
| Aarhus Airport                                                           |
| Billund Airport                                                          |
| Copenhagen Kastrup Airport                                               |
| Esbjerg Airport                                                          |
| Grnholt Hillerd Airport                                                  |
| Karup Airport                                                            |
| Ls Airport                                                               |
| Lolland Falster Maribo Airport                                           |
| Odense Airport                                                           |
| Krus-Padborg Airport                                                     |
| Copenhagen Roskilde Airport                                              |
| Bornholm Airport                                                         |
| Snderborg Airport                                                        |
| Skrydstrup Air Base                                                      |
| Skive Airport                                                            |
| Thisted Airport                                                          |
| Kolding Vamdrup Airfield                                                 |
| Vagar Airport                                                            |
| Vesthimmerlands Flyveplads                                               |
| Stauning Airport                                                         |
| Aalborg Airport                                                          |
| Luxembourg-Findel International Airport                                  |
| lesund Airport                                                           |
| Andya Airport                                                            |
| Alta Airport                                                             |
| Bmoen Airport                                                            |
| Brnnysund Airport                                                        |
| Bod Airport                                                              |
| Bergen Airport Flesland                                                  |
| Btsfjord Airport                                                         |
| Kristiansand Airport                                                     |
| Geilo Airport Dagali                                                     |
| Bardufoss Airport                                                        |
| Harstad/Narvik Airport Evenes                                            |
| Leirin Airport                                                           |
| Flor Airport                                                             |
| Oslo Lufthavn                                                            |
| Haugesund Airport                                                        |
| Hasvik Airport                                                           |
| Kristiansund Airport (Kvernberget)                                       |
| Kjeller Airport                                                          |
| Kirkenes Airport (Hybuktmoen)                                            |
| Lista Airport                                                            |
| Molde Airport                                                            |
| Mosjen Airport (Kjrstad)                                                 |
| Banak Airport                                                            |
| Notodden Airport                                                         |
| rland Airport                                                            |
| Rros Airport                                                             |
| Moss Airport Rygge                                                       |
| Svalbard Airport Longyear                                                |
| Skien Airport                                                            |
| Stord Airport                                                            |
| Sandnessjen Airport (Stokka)                                             |
| Troms Airport                                                            |
| Sandefjord Airport Torp                                                  |
| Trondheim Airport Vrnes                                                  |
| Stavanger Airport Sola                                                   |
| Babice Airport                                                           |
| Gdask Lech Wasa Airport                                                  |
| Krakw John Paul II International Airport                                 |
| Muchowiec Airport                                                        |
| Katowice International Airport                                           |
| Mielec Airport                                                           |
| Pozna-awica Airport                                                      |
| Rzeszw-Jasionka Airport                                                  |
| Szczecin-Goleniw Solidarno Airport                                       |
| Redzikowo Air Base                                                       |
| Swidwin Military Air Base                                                |
| Warsaw Chopin Airport                                                    |
| Copernicus Wrocaw Airport                                                |
| Zielona Gra-Babimost Airport                                             |
| Malmen Air Base                                                          |
| Brvalla Air Base                                                         |
| Uppsala Airport                                                          |
| Ronneby Airport                                                          |
| Rda Air Base                                                             |
| Gothenburg-Landvetter Airport                                            |
| Jnkping Airport                                                          |
| Falkping Airport                                                         |
| Lidkping-Hovby Airport                                                   |
| Gothenburg City Airport                                                  |
| Skvde Airport                                                            |
| Trollhttan-Vnersborg Airport                                             |
| Karlsborg Air Base                                                       |
| Stens Air Base                                                           |
| Barkarby Airport                                                         |
| Karlskoga Airport                                                        |
| Mora Airport                                                             |
| Stockholm Skavsta Airport                                                |
| Arvika Airport                                                           |
| Emmaboda Airfield                                                        |
| Feringe Airport                                                          |
| Kristianstad Airport                                                     |
| Landskrona Airport                                                       |
| Oskarshamn Airport                                                       |
| Anderstorp Airport                                                       |
| Kalmar Airport                                                           |
| Malm Sturup Airport                                                      |
| Halmstad Airport                                                         |
| Hagshult Air Base                                                        |
| Vxj Kronoberg Airport                                                    |
| Hallviken Airport                                                        |
| Hedlanda Airport                                                         |
| Sveg Airport                                                             |
| Gllivare Airport                                                         |
| Hudiksvall Airport                                                       |
| Jokkmokk Airport                                                         |
| Kramfors Sollefte Airport                                                |
| Lycksele Airport                                                         |
| Optand Airport                                                           |
| Sundsvall-Hrnsand Airport                                                |
| rnskldsvik Airport                                                       |
| Pite Airport                                                             |
| Kiruna Airport                                                           |
| Orsa Airport                                                             |
| Skellefte Airport                                                        |
| Sttna Airport                                                            |
| Ume Airport                                                              |
| Vilhelmina Airport                                                       |
| Arvidsjaur Airport                                                       |
| rebro Airport                                                            |
| Stockholm Vsters Airport                                                 |
| Lule Airport                                                             |
| Vidsel Air Base                                                          |
| Arboga Airport                                                           |
| Stockholm-Arlanda Airport                                                |
| Stockholm-Bromma Airport                                                 |
| Borlange Airport                                                         |
| Hultsfred Airport                                                        |
| Gvle Sandviken Airport                                                   |
| Linkping City Airport                                                    |
| Norrkping Airport                                                        |
| Eskilstuna Airport                                                       |
| Visby Airport                                                            |
| Kalixfors Airport                                                        |
| Spangdahlem Air Base                                                     |
| Ramstein Air Base                                                        |
| [Duplicate] Giebelstadt Army Air Field                                   |
| Bckeburg Air Base                                                        |
| Celle Airport                                                            |
| Rheine Bentlage Air Base                                                 |
| Fritzlar Airport                                                         |
| Laupheim Air Base                                                        |
| Mendig Airfield                                                          |
| Niederstetten Army Air Base                                              |
| Roth Airport                                                             |
| Fassberg Air Base                                                        |
| Grafenwohr Army Air Field                                                |
| Hanau Army Air Field                                                     |
| Hohenfels Army Air Field                                                 |
| Flugplatz Kitzingen                                                      |
| Nordholz Naval Airbase                                                   |
| Diepholz Air Base                                                        |
| Geilenkirchen Air Base                                                   |
| Hohn Air Base                                                            |
| Jever Air Base                                                           |
| Rostock-Laage Airport                                                    |
| Nrvenich Air Base                                                        |
| Schleswig Air Base                                                       |
| Wittmundhafen Airport                                                    |
| Wunstorf Air Base                                                        |
| Vilseck Army Air Field                                                   |
| Coleman Army Air Field                                                   |
| Wiesbaden Army Airfield                                                  |
| Landsberg Lech Air Base                                                  |
| Bchel Air Base                                                           |
| Erding Airport                                                           |
| Frstenfeldbruck Air Base                                                 |
| Holzdorf Air Base                                                        |
| Ingolstadt Manching Airport                                              |
| Lechfeld Air Base                                                        |
| Neuburg AFB                                                              |
| Gtersloh Air Base                                                        |
| Alexander Bay Airport                                                    |
| Aggeneys Airport                                                         |
| Brakpan Airport                                                          |
| Bisho Airport                                                            |
| Bram Fischer International Airport                                       |
| Bethlehem Airport                                                        |
| Hendrik Potgieter Airport                                                |
| Cape Town International Airport                                          |
| Calvinia Airport                                                         |
| King Shaka International Airport                                         |
| Ben Schoeman Airport                                                     |
| Ermelo Airport                                                           |
| Ficksburg Sentraoes Airport                                              |
| Grand Central Airport                                                    |
| George Airport                                                           |
| Graaff Reinet Airport                                                    |
| Grahamstown Airport                                                      |
| Greytown Airport                                                         |
| Harmony Airport                                                          |
| Harrismith Airport                                                       |
| Hoedspruit Air Force Base Airport                                        |
| Gariep Dam Airport                                                       |
| OR Tambo International Airport                                           |
| P C Pelser Airport                                                       |
| Kimberley Airport                                                        |
| Krugersdorp Airport                                                      |
| Kroonstad Airport                                                        |
| Johan Pienaar Airport                                                    |
| Kleinsee Airport                                                         |
| Lanseria Airport                                                         |
| Lichtenburg Airport                                                      |
| Makhado Air Force Base Airport                                           |
| Langebaanweg Airport                                                     |
| Ladysmith Airport                                                        |
| Middelburg Airport                                                       |
| Margate Airport                                                          |
| Marble Hall Airport                                                      |
| Majuba Power Station Airport                                             |
| Riverside Airport                                                        |
| Morningside Farm Airport                                                 |
| Mkuze Airport                                                            |
| Newcastle Airport                                                        |
| Nylstroom Airfield                                                       |
| Overberg Airport                                                         |
| Oudtshoorn Airport                                                       |
| Port Elizabeth Airport                                                   |
| Plettenberg Bay Airport                                                  |
| Hendrik Van Eck Airport                                                  |
| Pietersburg Municipal Airport                                            |
| Port St Johns Airport                                                    |
| Pietermaritzburg Airport                                                 |
| Pilanesberg International Airport                                        |
| Polokwane International Airport                                          |
| Potchefstroom Airport                                                    |
| Parys Airport                                                            |
| Queenstown Airport                                                       |
| Richards Bay Airport                                                     |
| Rustenburg Airport                                                       |
| Robertson Airport                                                        |
| Springbok Airport                                                        |
| Secunda Airport                                                          |
| Saldanha /Vredenburg Airport                                             |
| Springs Airfield                                                         |
| Swartkop Air Force Base                                                  |
| Sishen Airport                                                           |
| Hendrik Swellengrebel Airport                                            |
| Skukuza Airport                                                          |
| Tommys Field Airport                                                     |
| New Tempe Airport                                                        |
| Tutuka Power Station Airport                                             |
| Tzaneen Airport                                                          |
| Prince Mangosuthu Buthelezi Airport                                      |
| Pierre Van Ryneveld Airport                                              |
| K. D. Matanzima Airport                                                  |
| Vryburg Airport                                                          |
| Virginia Airport                                                         |
| Vredendal Airport                                                        |
| Vereeniging Airport                                                      |
| Wonderboom Airport                                                       |
| Witbank Airport                                                          |
| Waterkloof Air Force Base                                                |
| Welkom Airport                                                           |
| Ysterplaat Air Force Base                                                |
| Zeerust Airport                                                          |
| Francistown Airport                                                      |
| Jwaneng Airport                                                          |
| Kasane Airport                                                           |
| Maun Airport                                                             |
| Sir Seretse Khama International Airport                                  |
| Selebi Phikwe Airport                                                    |
| Maya-Maya Airport                                                        |
| Owando Airport                                                           |
| Ouesso Airport                                                           |
| Pointe Noire Airport                                                     |
| Matsapha Airport                                                         |
| Bangui M'Poko International Airport                                      |
| Berbrati Airport                                                         |
| Bata Airport                                                             |
| Malabo Airport                                                           |
| RAF Ascension Island                                                     |
| Sir Seewoosagur Ramgoolam International Airport                          |
| Sir Charles Gaetan Duval Airport                                         |
| Diego Garcia Naval Support Facility                                      |
| Tiko Airport                                                             |
| Douala International Airport                                             |
| Salak Airport                                                            |
| Foumban Nkounja Airport                                                  |
| N'Gaoundr Airport                                                        |
| Garoua International Airport                                             |
| Bafoussam Airport                                                        |
| Bamenda Airport                                                          |
| Yaound Airport                                                           |
| Kasompe Airport                                                          |
| Livingstone Airport                                                      |
| Kenneth Kaunda International Airport Lusaka                              |
| Mfuwe Airport                                                            |
| Mongu Airport                                                            |
| Simon Mwansa Kapwepwe International Airport                              |
| Southdowns Airport                                                       |
| Prince Said Ibrahim International Airport                                |
| Mohli Bandar Es Eslam Airport                                            |
| Ouani Airport                                                            |
| Dzaoudzi Pamandzi International Airport                                  |
| Roland Garros Airport                                                    |
| Pierrefonds Airport                                                      |
| Ivato Airport                                                            |
| Miandrivazo Airport                                                      |
| Sainte Marie Airport                                                     |
| Toamasina Airport                                                        |
| Morondava Airport                                                        |
| Arrachart Airport                                                        |
| Mananara Nord Airport                                                    |
| Andapa Airport                                                           |
| Ambilobe Airport                                                         |
| Antsirabato Airport                                                      |
| Analalava Airport                                                        |
| Amborovy Airport                                                         |
| Fascene Airport                                                          |
| Besalampy Airport                                                        |
| Maroantsetra Airport                                                     |
| Sambava Airport                                                          |
| Vohimarina Airport                                                       |
| Ambalabe Airport                                                         |
| Ampampamena Airport                                                      |
| Tlanaro Airport                                                          |
| Fianarantsoa Airport                                                     |
| Farafangana Airport                                                      |
| Manakara Airport                                                         |
| Mananjary Airport                                                        |
| Morombe Airport                                                          |
| Toliara Airport                                                          |
| Mbanza Congo Airport                                                     |
| Benguela Airport                                                         |
| Cabinda Airport                                                          |
| Nova Lisboa Airport                                                      |
| Kuito Airport                                                            |
| Lobito Airport                                                           |
| Quatro de Fevereiro Airport                                              |
| Malanje Airport                                                          |
| Menongue Airport                                                         |
| Negage Airport                                                           |
| Porto Amboim Airport                                                     |
| Saurimo Airport                                                          |
| Soyo Airport                                                             |
| Lubango Airport                                                          |
| Luena Airport                                                            |
| Uige Airport                                                             |
| Xangongo Airport                                                         |
| Oyem Airport                                                             |
| Okondja Airport                                                          |
| Lambarene Airport                                                        |
| Bitam Airport                                                            |
| Port Gentil Airport                                                      |
| Omboue Hopital Airport                                                   |
| Makokou Airport                                                          |
| Libreville Leon M'ba International Airport                               |
| M'Vengue El Hadj Omar Bongo Ondimba International Airport                |
| Principe Airport                                                         |
| So Tom International Airport                                             |
| Beira Airport                                                            |
| Inhambane Airport                                                        |
| Lichinga Airport                                                         |
| Lumbo Airport                                                            |
| Maputo Airport                                                           |
| Mueda Airport                                                            |
| Mocmboa da Praia Airport                                                 |
| Marrupa Airport                                                          |
| Nacala Airport                                                           |
| Nampula Airport                                                          |
| Pemba Airport                                                            |
| Quelimane Airport                                                        |
| Songo Airport                                                            |
| Chingozi Airport                                                         |
| Ulongwe Airport                                                          |
| Vilankulo Airport                                                        |
| Alphonse Airport                                                         |
| Desroches Airport                                                        |
| Farquhar Airport                                                         |
| Seychelles International Airport                                         |
| Praslin Airport                                                          |
| Coetivy Airport                                                          |
| Abeche Airport                                                           |
| Moundou Airport                                                          |
| N'Djamena International Airport                                          |
| Faya Largeau Airport                                                     |
| Joshua Mqabuko Nkomo International Airport                               |
| Charles Prince Airport                                                   |
| Buffalo Range Airport                                                    |
| Victoria Falls International Airport                                     |
| Robert Gabriel Mugabe International Airport                              |
| Kariba International Airport                                             |
| Mutoko Airport                                                           |
| Mutare Airport                                                           |
| Masvingo International Airport                                           |
| Zvishavane Airport                                                       |
| Thornhill Air Base                                                       |
| Hwange National Park Airport                                             |
| Chileka International Airport                                            |
| Karonga Airport                                                          |
| Kasungu Airport                                                          |
| Lilongwe International Airport                                           |
| Mzuzu Airport                                                            |
| Moshoeshoe I International Airport                                       |
| Mejametalana Airbase                                                     |
| Ndjili International Airport                                             |
| Ndolo Airport                                                            |
| Muanda Airport                                                           |
| Kitona Base Airport                                                      |
| Bandundu Airport                                                         |
| Kikwit Airport                                                           |
| Mbandaka Airport                                                         |
| Gbadolite Airport                                                        |
| Gemena Airport                                                           |
| Kotakoli Airport                                                         |
| Lisala Airport                                                           |
| Bangoka International Airport                                            |
| Matari Airport                                                           |
| Bunia Airport                                                            |
| Buta Zega Airport                                                        |
| Bukavu Kavumu Airport                                                    |
| Goma International Airport                                               |
| Kindu Airport                                                            |
| Lubumbashi International Airport                                         |
| Kolwezi Airport                                                          |
| Kalemie Airport                                                          |
| Kamina Base Airport                                                      |
| Kananga Airport                                                          |
| Mbuji Mayi Airport                                                       |
| Modibo Keita International Airport                                       |
| Gao Airport                                                              |
| Kayes Dag Dag Airport                                                    |
| Mopti Airport                                                            |
| Timbuktu Airport                                                         |
| Tessalit Airport                                                         |
| Banjul International Airport                                             |
| Fuerteventura Airport                                                    |
| Hierro Airport                                                           |
| La Palma Airport                                                         |
| Gran Canaria Airport                                                     |
| Lanzarote Airport                                                        |
| Tenerife South Airport                                                   |
| Tenerife Norte Airport                                                   |
| Melilla Airport                                                          |
| Lungi International Airport                                              |
| Cufar Airport                                                            |
| Spriggs Payne Airport                                                    |
| Roberts International Airport                                            |
| Al Massira Airport                                                       |
| Tan Tan Airport                                                          |
| Sass Airport                                                             |
| Ifrane Airport                                                           |
| Moulay Ali Cherif Airport                                                |
| Bassatine Airport                                                        |
| Angads Airport                                                           |
| Ben Slimane Airport                                                      |
| Rabat-Sal Airport                                                        |
| Mohammed V International Airport                                         |
| Menara Airport                                                           |
| Kenitra Airport                                                          |
| Ouarzazate Airport                                                       |
| Cherif Al Idrissi Airport                                                |
| Saniat R'mel Airport                                                     |
| Ibn Batouta Airport                                                      |
| Ziguinchor Airport                                                       |
| Cap Skirring Airport                                                     |
| Kaolack Airport                                                          |
| Lopold Sdar Senghor International Airport                                |
| Saint Louis Airport                                                      |
| Bakel Airport                                                            |
| Kdougou Airport                                                          |
| Tambacounda Airport                                                      |
| Aioun el Atrouss Airport                                                 |
| Tidjikja Airport                                                         |
| Kiffa Airport                                                            |
| Nma Airport                                                              |
| Kadi Airport                                                             |
| NouakchottOumtounsy International Airport                                |
| Slibaby Airport                                                          |
| Atar International Airport                                               |
| Nouadhibou International Airport                                         |
| Bir Moghrein Airport                                                     |
| Fria Airport                                                             |
| Faranah Airport                                                          |
| Tata Airport                                                             |
| Amlcar Cabral International Airport                                      |
| Rabil Airport                                                            |
| Maio Airport                                                             |
| Preguia Airport                                                          |
| So Pedro Airport                                                         |
| Addis Ababa Bole International Airport                                   |
| Lideta Army Airport                                                      |
| Arba Minch Airport                                                       |
| Axum Airport                                                             |
| Bahir Dar Airport                                                        |
| Aba Tenna Dejazmach Yilma International Airport                          |
| Gambella Airport                                                         |
| Gonder Airport                                                           |
| Jimma Airport                                                            |
| Lalibella Airport                                                        |
| Mekele Airport                                                           |
| Asosa Airport                                                            |
| Bujumbura International Airport                                          |
| Egal International Airport                                               |
| Berbera Airport                                                          |
| Kisimayu Airport                                                         |
| El Nouzha Airport                                                        |
| Abu Simbel Airport                                                       |
| Cairo International Airport                                              |
| Cairo West Airport                                                       |
| Hurghada International Airport                                           |
| El Gora Airport                                                          |
| Luxor International Airport                                              |
| Mersa Matruh Airport                                                     |
| Port Said Airport                                                        |
| St Catherine International Airport                                       |
| Aswan International Airport                                              |
| El Tor Airport                                                           |
| Eldoret International Airport                                            |
| Kakamega Airport                                                         |
| Kisumu Airport                                                           |
| Kitale Airport                                                           |
| Lodwar Airport                                                           |
| Manda Airstrip                                                           |
| Mombasa Moi International Airport                                        |
| Naivasha Airport                                                         |
| Nairobi Wilson Airport                                                   |
| Moi Air Base                                                             |
| Wajir Airport                                                            |
| Bu Attifel Airport                                                       |
| Warehouse 59e Airport                                                    |
| Ghat Airport                                                             |
| Kufra Airport                                                            |
| Benina International Airport                                             |
| Sabha Airport                                                            |
| Tripoli International Airport                                            |
| Marsa Brega Airport                                                      |
| Ras Lanuf Oil Airport                                                    |
| Hon Airport                                                              |
| Dahra Airport                                                            |
| Ghadames East Airport                                                    |
| Zella 74 Airport                                                         |
| Gisenyi Airport                                                          |
| Kigali International Airport                                             |
| Kamembe Airport                                                          |
| Dongola Airport                                                          |
| Damazin Airport                                                          |
| El Fasher Airport                                                        |
| Kassala Airport                                                          |
| Kadugli Airport                                                          |
| El Obeid Airport                                                         |
| Juba International Airport                                               |
| Malakal Airport                                                          |
| Khartoum International Airport                                           |
| Arusha Airport                                                           |
| Julius Nyerere International Airport                                     |
| Dodoma Airport                                                           |
| Iringa Airport                                                           |
| Kilimanjaro International Airport                                        |
| Lake Manyara Airport                                                     |
| Mtwara Airport                                                           |
| Mwanza Airport                                                           |
| Pemba Airport                                                            |
| Tanga Airport                                                            |
| Abeid Amani Karume International Airport                                 |
| Entebbe International Airport                                            |
| Soroti Airport                                                           |
| Tirana International Airport Mother Teresa                               |
| Burgas Airport                                                           |
| Gorna Oryahovitsa Airport                                                |
| Plovdiv International Airport                                            |
| Sofia Airport                                                            |
| Stara Zagora Airport                                                     |
| Varna Airport                                                            |
| Larnaca International Airport                                            |
| Paphos International Airport                                             |
| RAF Akrotiri                                                             |
| Dubrovnik Airport                                                        |
| Osijek-epin Airfield                                                     |
| Osijek Airport                                                           |
| Pula Airport                                                             |
| Grobnicko Polje Airport                                                  |
| Rijeka Airport                                                           |
| Split Airport                                                            |
| Varadin Airport                                                          |
| Zagreb Airport                                                           |
| Zadar Airport                                                            |
| Udbina Air Base                                                          |
| Albacete-Los Llanos Airport                                              |
| Alicante International Airport                                           |
| Almera International Airport                                             |
| Asturias Airport                                                         |
| Crdoba Airport                                                           |
| Bilbao Airport                                                           |
| Barcelona International Airport                                          |
| Badajoz Airport                                                          |
| A Corua Airport                                                          |
| Armilla Air Base                                                         |
| Girona Airport                                                           |
| Federico Garcia Lorca Airport                                            |
| Getafe Air Base                                                          |
| Ibiza Airport                                                            |
| Jerez Airport                                                            |
| San Javier Airport                                                       |
| Adolfo Surez MadridBarajas Airport                                       |
| Mlaga Airport                                                            |
| Menorca Airport                                                          |
| Moron Air Base                                                           |
| Ocaa Airport                                                             |
| Pamplona Airport                                                         |
| Alcantarilla Air Base                                                    |
| Reus Air Base                                                            |
| Rota Naval Station Airport                                               |
| Salamanca Airport                                                        |
| Son Bonet Airport                                                        |
| San Luis Airport                                                         |
| San Sebastian Airport                                                    |
| Santiago de Compostela Airport                                           |
| Pirineus - la Seu d'Urgel Airport                                        |
| Torrejn Airport                                                          |
| Valencia Airport                                                         |
| Valladolid Airport                                                       |
| Vitoria/Foronda Airport                                                  |
| Vigo Airport                                                             |
| Santander Airport                                                        |
| Zaragoza Air Base                                                        |
| Sevilla Airport                                                          |
| Calais-Dunkerque Airport                                                 |
| Pronne-Saint-Quentin Airport                                             |
| Nangis-Les Loges Airport                                                 |
| Bagnoles-de-l'Orne-Couterne Airport                                      |
| Albert-Bray Airport                                                      |
| Le Touquet-Cte d'Opale Airport                                           |
| Valenciennes-Denain Airport                                              |
| Amiens-Glisy Airport                                                     |
| Agen-La Garenne Airport                                                  |
| Cazaux (BA 120) Air Base                                                 |
| Bordeaux-Mrignac Airport                                                 |
| Bergerac-Roumanire Airport                                               |
| Toulouse-Francazal (BA 101) Air Base                                     |
| Cognac-Chteaubernard (BA 709) Air Base                                   |
| Poitiers-Biard Airport                                                   |
| Montluon-Guret Airport                                                   |
| Limoges Airport                                                          |
| Mont-de-Marsan (BA 118) Air Base                                         |
| Niort-Souch Airport                                                      |
| Toulouse-Blagnac Airport                                                 |
| Pau Pyrnes Airport                                                       |
| Muret-Lherm Airport                                                      |
| Tarbes-Lourdes-Pyrnes Airport                                            |
| Angoulme-Brie-Champniers Airport                                         |
| Brive Souillac Airport                                                   |
| Prigueux-Bassillac Airport                                               |
| Biarritz-Anglet-Bayonne Airport                                          |
| Cahors-Lalbenque Airport                                                 |
| Saint-Girons-Antichan Airport                                            |
| Arcachon-La Teste-de-Buch Airport                                        |
| Albi-Le Squestre Airport                                                 |
| Castres-Mazamet Airport                                                  |
| Toulouse-Lasbordes Airport                                               |
| Millau-Larzac Airfield                                                   |
| Graulhet-Montdragon Airport                                              |
| Rodez-Marcillac Airport                                                  |
| Ussel-Thalamy Airport                                                    |
| Villeneuve-sur-Lot Airport                                               |
| Royan-Mdis Airport                                                       |
| Mimizan Airport                                                          |
| Aire-sur-l'Adour Airport                                                 |
| Montauban Airport                                                        |
| Auch-Lamothe Airport                                                     |
| Libourne-Artigues-de-Lussac Airport                                      |
| Pamiers-Les Pujols Airport                                               |
| Marmande-Virazeil Airport                                                |
| Rochefort-Saint-Agnant (BA 721) Airport                                  |
| Pontivy Airport                                                          |
| Aubigny-sur-Nre Airport                                                  |
| Guiscriff Scaer Airport                                                  |
| Ancenis Airport                                                          |
| Brienne-le-Chteau Airport                                                |
| Colmar-Houssen Airport                                                   |
| Beaune-Challanges Airport                                                |
| Dole-Tavaux Airport                                                      |
| Joigny Airport                                                           |
| Verdun-Le Rozelier Airfield                                              |
| Aubenas-Ardche Mridional Airport                                         |
| Le Puy-Loudes Airport                                                    |
| Saint-Flour-Coltines Airport                                             |
| Bourg-Ceyzriat Airport                                                   |
| Villefranche-Tarare Airport                                              |
| Moulins-Montbeugny Airport                                               |
| Saint-Affrique-Belmont Airport                                           |
| Cassagnes-Bgonhs Airport                                                 |
| Metz-Nancy-Lorraine Airport                                              |
| Bastia-Poretta Airport                                                   |
| Calvi-Sainte-Catherine Airport                                           |
| Figari Sud-Corse Airport                                                 |
| Ajaccio-Napolon Bonaparte Airport                                        |
| Propriano Airport                                                        |
| Solenzara (BA 126) Air Base                                              |
| Corte Airport                                                            |
| Auxerre-Branches Airport                                                 |
| Chambry-Savoie Airport                                                   |
| Clermont-Ferrand Auvergne Airport                                        |
| Bourges Airport                                                          |
| Chambry-Challes-les-Eaux Airport                                         |
| Chalon-Champforgeuil Airport                                             |
| Annemasse Airport                                                        |
| Lyon Saint-Exupry Airport                                                |
| Mcon-Charnay Airport                                                     |
| Saint-Yan Airport                                                        |
| Roanne-Renaison Airport                                                  |
| Annecy-Haute-Savoie-Mont Blanc Airport                                   |
| Grenoble-Isre Airport                                                    |
| Montluon-Domrat Airport                                                  |
| Valence-Chabeuil Airport                                                 |
| Vichy-Charmeil Airport                                                   |
| Aurillac Airport                                                         |
| Chteauroux-Dols Marcel Dassault Airport                                  |
| Lyon-Bron Airport                                                        |
| Aix-en-Provence (BA 114) Airport                                         |
| Le Luc-Le Cannet Airport                                                 |
| Cannes-Mandelieu Airport                                                 |
| Saint-tienne-Bouthon Airport                                             |
| Istres Le Tub/Istres Air Base (BA 125) Airport                           |
| Carcassonne Airport                                                      |
| Marseille Provence Airport                                               |
| Nice-Cte d'Azur Airport                                                  |
| Orange-Caritat (BA 115) Air Base                                         |
| Perpignan-Rivesaltes (Llabanre) Airport                                  |
| Le Castellet Airport                                                     |
| Als-Deaux Airport                                                        |
| Montpellier-Mditerrane Airport                                           |
| Bziers-Vias Airport                                                      |
| Avignon-Caumont Airport                                                  |
| Salon-de-Provence (BA 701) Air Base                                      |
| Lzignan-Corbires Airfield                                                |
| Mende-Brenoux Airfield                                                   |
| Carpentras Airport                                                       |
| Avord (BA 702) Air Base                                                  |
| Paris Beauvais Till Airport                                              |
| Chteaudun (BA 279) Air Base                                              |
| Saumur-Saint-Florent Airport                                             |
| vreux-Fauville (BA 105) Air Base                                         |
| Le Havre Octeville Airport                                               |
| Abbeville                                                                |
| Orlans-Bricy (BA 123) Air Base                                           |
| Chlons-Vatry Airport                                                     |
| Rouen Airport                                                            |
| Tours-Val-de-Loire Airport                                               |
| Cholet Le Pontreau Airport                                               |
| Laval-Entrammes Airport                                                  |
| Orlans-Saint-Denis-de-l'Htel Airport                                     |
| Paris-Le Bourget Airport                                                 |
| Creil Air Base                                                           |
| Charles de Gaulle International Airport                                  |
| Coulommiers-Voisins Airport                                              |
| Melun-Villaroche Air Base                                                |
| Toussus-le-Noble Airport                                                 |
| Paris-Orly Airport                                                       |
| Pontoise - Cormeilles-en-Vexin Airport                                   |
| Villacoublay-Vlizy (BA 107) Air Base                                     |
| Reims-Prunay Airport                                                     |
| Troyes-Barberey Airport                                                  |
| Lunville-Croismare Airport                                               |
| tain-Rouvres Air Base                                                    |
| Autun-Bellevue Airport                                                   |
| Nevers-Fourchambault Airport                                             |
| Cambrai-pinoy (BA 103) Air Base                                          |
| Maubeuge-lesmes Airport                                                  |
| Besanon-La Vze Airport                                                   |
| Phalsbourg-Bourscheid Air Base                                           |
| Lille-Lesquin Airport                                                    |
| Merville-Calonne Airport                                                 |
| Charleville-Mzires Airport                                               |
| Vesoul-Frotey Airport                                                    |
| Brest Bretagne Airport                                                   |
| Cherbourg-Maupertus Airport                                              |
| Dinard-Pleurtuit-Saint-Malo Airport                                      |
| La Baule-Escoublac Airport                                               |
| Granville Airport                                                        |
| Deauville-Saint-Gatien Airport                                           |
| Lorient South Brittany (Bretagne Sud) Airport                            |
| La Roche-sur-Yon Airport                                                 |
| Landivisiau Air Base                                                     |
| Caen-Carpiquet Airport                                                   |
| Lanvoc-Poulmic Air Base                                                  |
| Le Mans-Arnage Airport                                                   |
| Rennes-Saint-Jacques Airport                                             |
| Lannion-Cte de Granit Airport                                            |
| Quimper-Cornouaille Airport                                              |
| Nantes Atlantique Airport                                                |
| Saint-Brieuc-Armor Airport                                               |
| Morlaix-Ploujean Airport                                                 |
| Vannes-Meucon Airport                                                    |
| Saint-Nazaire-Montoir Airport                                            |
| EuroAirport Basel-Mulhouse-Freiburg Airport                              |
| Colmar-Meyenheim Air Base                                                |
| Dijon-Bourgogne Airport                                                  |
| Metz-Frescaty (BA 128) Air Base                                          |
| pinal-Mirecourt Airport                                                  |
| Haguenau Airport                                                         |
| Saint-Dizier-Robinson (BA 113) Air Base                                  |
| Montbliard-Courcelles Airfield                                           |
| Nancy-Essey Airport                                                      |
| Nancy-Ochey (BA 133) Air Base                                            |
| Pontarlier Airport                                                       |
| Reims-Champagne (BA 112) Air Base                                        |
| Strasbourg Airport                                                       |
| Luxeuil-Saint-Sauveur (BA 116) Air Base                                  |
| Cuers-Pierrefeu Airport                                                  |
| Toulon-Hyres Airport                                                     |
| Nmes-Arles-Camargue Airport                                              |
| Miquelon Airport                                                         |
| St Pierre Airport                                                        |
| Ambrieu Air Base (BA 278)                                                |
| Damblain Airport                                                         |
| Andravida Air Base                                                       |
| Agrinion Air Base                                                        |
| Dimokritos Airport                                                       |
| Alexandria Airport                                                       |
| Nea Anchialos Airport                                                    |
| Elefsis Airport                                                          |
| Chios Island National Airport                                            |
| Ioannina Airport                                                         |
| Heraklion International Nikos Kazantzakis Airport                        |
| Kastoria National Airport                                                |
| Kithira Airport                                                          |
| Kefallinia Airport                                                       |
| Kalamata Airport                                                         |
| Amigdhaleon Airport                                                      |
| Kos Airport                                                              |
| Karpathos Airport                                                        |
| Ioannis Kapodistrias International Airport                               |
| Kasos Airport                                                            |
| Alexander the Great International Airport                                |
| Filippos Airport                                                         |
| Leros Airport                                                            |
| Limnos Airport                                                           |
| Larisa Airport                                                           |
| Megara Airport                                                           |
| Mikonos Airport                                                          |
| Mytilene International Airport                                           |
| Aktion National Airport                                                  |
| Maritsa Airport                                                          |
| Diagoras Airport                                                         |
| Araxos Airport                                                           |
| Chania International Airport                                             |
| Skiathos Island National Airport                                         |
| Samos Airport                                                            |
| Sparti Airport                                                           |
| Santorini Airport                                                        |
| Sitia Airport                                                            |
| Stefanovikion Air Base                                                   |
| Skiros Airport                                                           |
| Tanagra Air Base                                                         |
| Kasteli Airport                                                          |
| Tripolis Airport                                                         |
| Thessaloniki Macedonia International Airport                             |
| Tatoi Airport                                                            |
| Zakynthos International Airport Dionysios Solomos                        |
| Budapest Liszt Ferenc International Airport                              |
| Debrecen International Airport                                           |
| Kecskemt Airport                                                         |
| Nyregyhza Airport                                                        |
| csny Airport                                                             |
| Szentkirlyszabadja Airport                                               |
| Szolnok Air Base                                                         |
| Amendola Air Base                                                        |
| Crotone Airport                                                          |
| Bari Karol Wojtya Airport                                                |
| Foggia Gino Lisa Airport                                                 |
| Taranto-Grottaglie Marcello Arlotta Airport                              |
| Lecce Galatina Air Base                                                  |
| Pescara International Airport                                            |
| Brindisi  Salento Airport                                                |
| Gioia Del Colle Air Base                                                 |
| Lamezia Terme Airport                                                    |
| Catania-Fontanarossa Airport                                             |
| Lampedusa Airport                                                        |
| Pantelleria Airport                                                      |
| FalconeBorsellino Airport                                                |
| Palermo-Boccadifalco Airport                                             |
| Reggio Calabria Airport                                                  |
| Vincenzo Florio Airport Trapani-Birgi                                    |
| Sigonella Navy Air Base                                                  |
| Alghero-Fertilia Airport                                                 |
| Decimomannu Air Base                                                     |
| Cagliari Elmas Airport                                                   |
| Olbia Costa Smeralda Airport                                             |
| Tortol Airport                                                           |
| Torino-Aeritalia Airport                                                 |
| Milano-Bresso Airfield                                                   |
| Malpensa International Airport                                           |
| Il Caravaggio International Airport                                      |
| Turin Airport                                                            |
| Villanova D'Albenga International Airport                                |
| Genoa Cristoforo Colombo Airport                                         |
| Milano Linate Airport                                                    |
| Cameri Air Base [MIL]                                                    |
| Parma Airport                                                            |
| Piacenza San Damiano Air Base                                            |
| Cuneo International Airport                                              |
| Aviano Air Base                                                          |
| Bolzano Airport                                                          |
| Cervia Air Base                                                          |
| Bologna Guglielmo Marconi Airport                                        |
| Treviso-Sant'Angelo Airport                                              |
| Rivolto Air Base                                                         |
| Forl Airport                                                             |
| Ghedi Air Base                                                           |
| Verona-Boscomantico Airport                                              |
| Brescia Airport                                                          |
| TriesteFriuli Venezia Giulia Airport                                     |
| Federico Fellini International Airport                                   |
| Istrana Air Base                                                         |
| Vicenza Airport                                                          |
| Padova Airport                                                           |
| Verona Villafranca Airport                                               |
| Venice Marco Polo Airport                                                |
| Siena-Ampugnano Airport                                                  |
| CiampinoG. B. Pastine International Airport                              |
| Pratica Di Mare Air Base                                                 |
| Leonardo da VinciFiumicino Airport                                       |
| Guidonia Air Base                                                        |
| Marina Di Campo Airport                                                  |
| Latina Air Base                                                          |
| Grazzanise Air Base                                                      |
| Naples International Airport                                             |
| Pisa International Airport                                               |
| Peretola Airport                                                         |
| Grosseto Air Base                                                        |
| Urbe Airport                                                             |
| Viterbo Airport                                                          |
| Perugia San Francesco d'Assisi  Umbria International Airport             |
| Cerklje Airport                                                          |
| Ljubljana Joe Punik Airport                                              |
| Maribor Airport                                                          |
| Portoroz Airport                                                         |
| Slovenj Gradec Airport                                                   |
| esk Budjovice Airport                                                    |
| slav Air Base                                                            |
| Hradec Krlov Airport                                                     |
| Hoovice Airport                                                          |
| Kbely Air Base                                                           |
| Kunovice Airport                                                         |
| Karlovy Vary International Airport                                       |
| Plze-Ln Airport                                                          |
| Mnichovo Hradit Airport                                                  |
| Ostrava Leos Janek Airport                                               |
| Nm Air Base                                                              |
| Pardubice Airport                                                        |
| Pribram Airport                                                          |
| Perov Air Base                                                           |
| Vclav Havel Airport Prague                                               |
| Brno-Tuany Airport                                                       |
| Vodochody Airport                                                        |
| Ben Gurion International Airport                                         |
| Beersheba (Teyman) Airport                                               |
| Tel Nof Air Base                                                         |
| Ein Shemer Airfield                                                      |
| Eilat Airport                                                            |
| Ein Yahav Airfield                                                       |
| Haifa International Airport                                              |
| Hatzor Air Base                                                          |
| Ben Ya'akov Airport                                                      |
| Megiddo Airport                                                          |
| Bar Yehuda Airfield                                                      |
| Nevatim Air Base                                                         |
| Ovda International Airport                                               |
| Ramat David Air Base                                                     |
| Ramon Air Base                                                           |
| Sde Dov Airport                                                          |
| Malta International Airport                                              |
| Wiener Neustadt East Airport                                             |
| Wels Airport                                                             |
| Graz Airport                                                             |
| Innsbruck Airport                                                        |
| Linz Hrsching Airport                                                    |
| Salzburg Airport                                                         |
| Vienna International Airport                                             |
| Hinterstoisser Air Base                                                  |
| Alverca Air Base                                                         |
| Santa Maria Airport                                                      |
| Bragana Airport                                                          |
| Beja Airport / Airbase                                                   |
| Braga Municipal Aerodrome                                                |
| Aerodromo Municipal de Coimbra                                           |
| Cascais Airport                                                          |
| Coimbra Hospital Coves Heliport                                          |
| vora Airport                                                             |
| Flores Airport                                                           |
| Faro Airport                                                             |
| Graciosa Airport                                                         |
| Horta Airport                                                            |
| Lajes Airport                                                            |
| Monte Real Air Base                                                      |
| Montijo Air Base                                                         |
| Ovar Air Base                                                            |
| Joo Paulo II Airport                                                     |
| Pico Airport                                                             |
| Portimo Airport                                                          |
| Francisco de S Carneiro Airport                                          |
| Porto Santo Airport                                                      |
| Humberto Delgado Airport (Lisbon Portela Airport)                        |
| So Jorge Airport                                                         |
| Sintra Air Base                                                          |
| Tancos Airbase                                                           |
| Vila Real Airport                                                        |
| Aerodromo Goncalves Lobato (Viseu Airport)                               |
| Mostar International Airport                                             |
| Sarajevo International Airport                                           |
| Arad International Airport                                               |
| Bacu Airport                                                             |
| Tautii Magheraus Airport                                                 |
| Bneasa International Airport                                             |
| Mihail Koglniceanu International Airport                                 |
| Cluj-Napoca International Airport                                        |
| Caransebe Airport                                                        |
| Craiova Airport                                                          |
| Iai Airport                                                              |
| Oradea International Airport                                             |
| Henri Coand International Airport                                        |
| Sibiu International Airport                                              |
| Satu Mare Airport                                                        |
| Suceava Stefan cel Mare Airport                                          |
| Tulcea Airport                                                           |
| Transilvania Trgu Mure International Airport                             |
| Timioara Traian Vuia Airport                                             |
| Les Eplatures Airport                                                    |
| Geneva Cointrin International Airport                                    |
| Saanen Airport                                                           |
| Sion Airport                                                             |
| Alpnach Air Base                                                         |
| Dbendorf Air Base                                                        |
| Emmen Air Base                                                           |
| Mollis Airport                                                           |
| Meiringen Airport                                                        |
| Payerne Air Base                                                         |
| Lugano Airport                                                           |
| Bern Belp Airport                                                        |
| Grenchen Airport                                                         |
| Zrich Airport                                                            |
| St Gallen Altenrhein Airport                                             |
| Samedan Airport                                                          |
| Gvercinlik Airport                                                       |
| Esenboa International Airport                                            |
| Etimesgut Air Base                                                       |
| Aknc Air Base                                                            |
| Adana Airport                                                            |
| ncirlik Air Base                                                         |
| Afyon Airport                                                            |
| Antalya International Airport                                            |
| Gaziantep International Airport                                          |
| skenderun Airport                                                        |
| Konya Airport                                                            |
| Malatya Tulga Airport                                                    |
| Amasya Merzifon Airport                                                  |
| Sivas Nuri Demira Airport                                                |
| Malatya Erha Airport                                                     |
| Kayseri Erkilet Airport                                                  |
| Sivrihisar Airport                                                       |
| Tokat Airport                                                            |
| ardak Airport                                                            |
| Atatrk International Airport                                             |
| Balkesir Merkez Airport                                                  |
| Bandrma Airport                                                          |
| Eskiehir Air Base                                                        |
| Adnan Menderes International Airport                                     |
| Gaziemir Airport                                                         |
| ili Airport                                                              |
| Isparta Airport                                                          |
| Ktahya Airport                                                           |
| Yalova Airport                                                           |
| Cengiz Topel Airport                                                     |
| Dalaman International Airport                                            |
| Akhisar Airport                                                          |
| Imsk Airport                                                             |
| Samandra Air Base                                                        |
| Elaz Airport                                                             |
| Diyarbakir Airport                                                       |
| Erzincan Airport                                                         |
| Erzurum International Airport                                            |
| Trabzon International Airport                                            |
| Van Ferit Melen Airport                                                  |
| Batman Airport                                                           |
| Siirt Airport                                                            |
| Kakl Airport                                                             |
| Seluk Efes Airport                                                       |
| Bli International Airport                                                |
| Chiinu International Airport                                             |
| Ohrid St. Paul the Apostle Airport                                       |
| Skopje Alexander the Great Airport                                       |
| Gibraltar Airport                                                        |
| Belgrade Nikola Tesla Airport                                            |
| Nis Airport                                                              |
| Podgorica Airport                                                        |
| Pritina International Airport                                            |
| Tivat Airport                                                            |
| Vrac International Airport                                               |
| M. R. tefnik Airport                                                     |
| Koice Airport                                                            |
| Kuchya Air Base                                                          |
| Pieany Airport                                                           |
| Slia Airport                                                             |
| Trenn Airport                                                            |
| Poprad-Tatry Airport                                                     |
| North Caicos Airport                                                     |
| Providenciales Airport                                                   |
| South Caicos Airport                                                     |
| Arroyo Barril Airport                                                    |
| Maria Montez International Airport                                       |
| Cabo Rojo Airport                                                        |
| Casa De Campo International Airport                                      |
| Punta Cana International Airport                                         |
| Gregorio Luperon International Airport                                   |
| Las Amricas International Airport                                        |
| San Isidro Air Base                                                      |
| Cibao International Airport                                              |
| Bananera Airport                                                         |
| Coban Airport                                                            |
| La Aurora Airport                                                        |
| Retalhuleu Airport                                                       |
| San Jos Airport                                                          |
| Goloson International Airport                                            |
| Ramn Villeda Morales International Airport                               |
| La Laguna Airport                                                        |
| Juan Manuel Galvez International Airport                                 |
| Tela Airport                                                             |
| Toncontn International Airport                                           |
| Trujillo Airport                                                         |
| Boscobel Aerodrome                                                       |
| Norman Manley International Airport                                      |
| Sangster International Airport                                           |
| Ken Jones Airport                                                        |
| Tinson Pen Airport                                                       |
| General Juan N Alvarez International Airport                             |
| Del Norte International Airport                                          |
| Jess Tern Paredo International Airport                                   |
| Bahas de Huatulco International Airport                                  |
| General Mariano Matamoros Airport                                        |
| Ciudad Acua New International Airport                                    |
| Ciudad del Carmen International Airport                                  |
| Nuevo Casas Grandes Airport                                              |
| Chilpancingo Airport                                                     |
| Bachigualato Federal International Airport                               |
| Chetumal International Airport                                           |
| Ciudad Obregn International Airport                                      |
| Ingeniero Alberto Acua Ongay International Airport                       |
| Abraham Gonzlez International Airport                                    |
| General Roberto Fierro Villalobos International Airport                  |
| General Pedro Jose Mendez International Airport                          |
| Cozumel International Airport                                            |
| General Guadalupe Victoria International Airport                         |
| Amado Nervo National Airport                                             |
| Ensenada International Airport                                           |
| Don Miguel Hidalgo Y Costilla International Airport                      |
| General Jos Mara Yez International Airport                               |
| Tehuacan Airport                                                         |
| General Ignacio P. Garcia International Airport                          |
| Licenciado Miguel de la Madrid Airport                                   |
| Isla Mujeres Airport                                                     |
| Plan De Guadalupe International Airport                                  |
| Ixtepec Airport                                                          |
| Lzaro Crdenas Airport                                                    |
| Valle del Fuerte International Airport                                   |
| Del Bajo International Airport                                           |
| Manuel Mrquez de Len International Airport                               |
| Loreto International Airport                                             |
| General Servando Canales International Airport                           |
| Licenciado Manuel Crescencio Rejon Int Airport                           |
| General Rodolfo Snchez Taboada International Airport                     |
| General Francisco J. Mujica International Airport                        |
| Minatitln/Coatzacoalcos National Airport                                 |
| Monclova International Airport                                           |
| Licenciado Benito Juarez International Airport                           |
| General Mariano Escobedo International Airport                           |
| General Rafael Buelna International Airport                              |
| Nogales International Airport                                            |
| Quetzalcatl International Airport                                        |
| Xoxocotln International Airport                                          |
| El Tajn National Airport                                                 |
| Hermanos Serdn International Airport                                     |
| Ingeniero Juan Guillermo Villasana Airport                               |
| Mar de Corts International Airport                                       |
| Piedras Negras International Airport                                     |
| Licenciado y General Ignacio Lopez Rayon Airport                         |
| Licenciado Gustavo Daz Ordaz International Airport                       |
| Puerto Escondido International Airport                                   |
| Quertaro Intercontinental Airport                                        |
| General Lucio Blanco International Airport                               |
| Los Cabos International Airport                                          |
| San Felipe International Airport                                         |
| Ponciano Arriaga International Airport                                   |
| Tlaxcala Airport                                                         |
| Tern Air Base                                                            |
| Francisco Sarabia International Airport                                  |
| Angel Albino Corzo International Airport                                 |
| General Abelardo L. Rodrguez International Airport                       |
| General Francisco Javier Mina International Airport                      |
| Tamuin Airport                                                           |
| Licenciado Adolfo Lopez Mateos International Airport                     |
| Tapachula International Airport                                          |
| Cancn International Airport                                              |
| Carlos Rovirosa Prez International Airport                               |
| General Heriberto Jara International Airport                             |
| General Leobardo C. Ruiz International Airport                           |
| Ixtapa Zihuatanejo International Airport                                 |
| Zamora Airport                                                           |
| Playa De Oro International Airport                                       |
| Zapopan Airport                                                          |
| Bluefields Airport                                                       |
| Los Brasiles Airport                                                     |
| Leon (Fanor Urroz) Airport                                               |
| Augusto C. Sandino (Managua) International Airport                       |
| Puerto Cabezas Airport                                                   |
| Bocas Del Toro International Airport                                     |
| Cap Manuel Nio International Airport                                     |
| Enrique Malek International Airport                                      |
| Panama Pacific International Airport                                     |
| Marcos A. Gelabert International Airport                                 |
| Ruben Cantu Airport                                                      |
| Tocumen International Airport                                            |
| Buenos Aires Airport                                                     |
| Coto 47 Airport                                                          |
| Chacarita Airport                                                        |
| El Carmen de Siquirres Airport                                           |
| Finca 10 / Nuevo Palmar Sur Airport                                      |
| Golfito Airport                                                          |
| Guapiles Airport                                                         |
| Daniel Oduber Quiros International Airport                               |
| Los Chiles Airport                                                       |
| Limon International Airport                                              |
| Nosara Airport                                                           |
| Juan Santamaria International Airport                                    |
| Pandora Airport                                                          |
| Palmar Sur Airport                                                       |
| Quepos Managua Airport                                                   |
| Santa Clara De Guapiles Airport                                          |
| San Vito De Java Airport                                                 |
| Monseor scar Arnulfo Romero International Airport                        |
| Ilopango International Airport                                           |
| Les Cayes Airport                                                        |
| Cap Haitien International Airport                                        |
| Jacmel Airport                                                           |
| Toussaint Louverture International Airport                               |
| Gustavo Rizo Airport                                                     |
| Carlos Manuel de Cespedes Airport                                        |
| Maximo Gomez Airport                                                     |
| Jardines Del Rey Airport                                                 |
| Jaime Gonzalez Airport                                                   |
| Vilo Acua International Airport                                          |
| Ignacio Agramonte International Airport                                  |
| Antonio Maceo International Airport                                      |
| Florida Airport                                                          |
| Leeward Point Field                                                      |
| Mariana Grajales Airport                                                 |
| Jos Mart International Airport                                           |
| Frank Pais International Airport                                         |
| La Coloma Airport                                                        |
| Orestes Acosta Airport                                                   |
| Sierra Maestra Airport                                                   |
| Rafael Cabrera Airport                                                   |
| Playa Baracoa Airport                                                    |
| Pinar Del Rio Airport                                                    |
| San Antonio De Los Banos Airport                                         |
| Abel Santamaria Airport                                                  |
| Joaqun de Agero Airport                                                  |
| Siguanea Airport                                                         |
| Sancti Spiritus Airport                                                  |
| Juan Gualberto Gomez International Airport                               |
| Hermanos Ameijeiras Airport                                              |
| Gerrard Smith International Airport                                      |
| Owen Roberts International Airport                                       |
| Clarence A. Bain Airport                                                 |
| Andros Town Airport                                                      |
| Leonard M Thompson International Airport                                 |
| San Andros Airport                                                       |
| Spring Point Airport                                                     |
| Sandy Point Airport                                                      |
| Treasure Cay Airport                                                     |
| Chub Cay Airport                                                         |
| Great Harbour Cay Airport                                                |
| South Bimini Airport                                                     |
| Exuma International Airport                                              |
| George Town Airport                                                      |
| North Eleuthera Airport                                                  |
| Governor's Harbour Airport                                               |
| Normans Cay Airport                                                      |
| Rock Sound Airport                                                       |
| Staniel Cay Airport                                                      |
| Grand Bahama International Airport                                       |
| Inagua Airport                                                           |
| Deadman's Cay Airport                                                    |
| Stella Maris Airport                                                     |
| Mayaguana Airport                                                        |
| Lynden Pindling International Airport                                    |
| Duncan Town Airport                                                      |
| Rum Cay Airport                                                          |
| San Salvador Airport                                                     |
| Philip S. W. Goldson International Airport                               |
| Aitutaki Airport                                                         |
| Rarotonga International Airport                                          |
| Nadi International Airport                                               |
| Nausori International Airport                                            |
| Fua'amotu International Airport                                          |
| Vava'u International Airport                                             |
| Bonriki International Airport                                            |
| Tabiteuea North Airport                                                  |
| Hihifo Airport                                                           |
| Faleolo International Airport                                            |
| Pago Pago International Airport                                          |
| Rurutu Airport                                                           |
| Tubuai Airport                                                           |
| Anaa Airport                                                             |
| Fangatau Airport                                                         |
| Tikehau Airport                                                          |
| Reao Airport                                                             |
| Fakarava Airport                                                         |
| Manihi Airport                                                           |
| Totegegie Airport                                                        |
| Kaukura Airport                                                          |
| Makemo Airport                                                           |
| Puka Puka Airport                                                        |
| Takapoto Airport                                                         |
| Arutua Airport                                                           |
| Mataiva Airport                                                          |
| Takaroa Airport                                                          |
| Nuku Hiva Airport                                                        |
| Bora Bora Airport                                                        |
| Rangiroa Airport                                                         |
| Huahine-Fare Airport                                                     |
| Moorea Airport                                                           |
| Hao Airport                                                              |
| Maupiti Airport                                                          |
| Raiatea Airport                                                          |
| Bauerfield International Airport                                         |
| Kon Airport                                                              |
| Koumac Airport                                                           |
| Lifou Airport                                                            |
| Nouma Magenta Airport                                                    |
| Mar Airport                                                              |
| Touho Airport                                                            |
| Ouva Airport                                                             |
| La Tontouta International Airport                                        |
| Auckland International Airport                                           |
| Taupo Airport                                                            |
| Ardmore Airport                                                          |
| Christchurch International Airport                                       |
| Chatham Islands-Tuuta Airport                                            |
| Dunedin Airport                                                          |
| Gisborne Airport                                                         |
| Glentanner Airport                                                       |
| Hokitika Airfield                                                        |
| Hamilton International Airport                                           |
| Hastings Aerodrome                                                       |
| Kerikeri Airport                                                         |
| Kaitaia Airport                                                          |
| Alexandra Airport                                                        |
| Mount Cook Airport                                                       |
| Manapouri Airport                                                        |
| Hood Airport                                                             |
| New Plymouth Airport                                                     |
| Nelson Airport                                                           |
| Invercargill Airport                                                     |
| RNZAF Base Ohakea                                                        |
| Oamaru Airport                                                           |
| Palmerston North Airport                                                 |
| Paraparaumu Airport                                                      |
| Queenstown International Airport                                         |
| Rotorua Regional Airport                                                 |
| Waiouru Airport                                                          |
| South Pole Station Airport                                               |
| Tauranga Airport                                                         |
| Timaru Airport                                                           |
| Pukaki Airport                                                           |
| Woodbourne Airport                                                       |
| Williams Field                                                           |
| Wanaka Airport                                                           |
| Wigram Airport                                                           |
| Whakatane Airport                                                        |
| Wellington International Airport                                         |
| Wairoa Airport                                                           |
| RNZAF Base Auckland-Whenuapai                                            |
| Whangarei Airport                                                        |
| Westport Airport                                                         |
| Wanganui Airport                                                         |
| Herat Airport                                                            |
| Jalalabad Airport                                                        |
| Hamid Karzai International Airport                                       |
| Kandahar Airport                                                         |
| Maimana Airport                                                          |
| Mazar I Sharif Airport                                                   |
| Shindand Airport                                                         |
| Sheberghan Airport                                                       |
| Konduz Airport                                                           |
| Bahrain International Airport                                            |
| Sheik Isa Air Base                                                       |
| Abha Regional Airport                                                    |
| Al Ahsa Airport                                                          |
| Al Baha Airport                                                          |
| Bisha Airport                                                            |
| Abqaiq Airport                                                           |
| King Fahd International Airport                                          |
| King Abdulaziz Air Base                                                  |
| Jizan Regional Airport                                                   |
| Gassim Airport                                                           |
| Gurayat Domestic Airport                                                 |
| Ha'il Airport                                                            |
| Jubail Airport                                                           |
| King Faisal Naval Base                                                   |
| King Abdulaziz International Airport                                     |
| King Khaled Military City Airport                                        |
| Prince Mohammad Bin Abdulaziz Airport                                    |
| Nejran Airport                                                           |
| Al Qaisumah/Hafr Al Batin Airport                                        |
| Pump Station 3 Airport                                                   |
| Pump Station 6 Airport                                                   |
| Pump Station 10 Airport                                                  |
| Rabigh Airport                                                           |
| Rafha Domestic Airport                                                   |
| King Khaled International Airport                                        |
| Ras Mishab Airport                                                       |
| Arar Domestic Airport                                                    |
| Ras Tanura Airport                                                       |
| Sharurah Airport                                                         |
| Sulayel Airport                                                          |
| Tabuk Airport                                                            |
| Taif Regional Airport                                                    |
| Thumamah Airport                                                         |
| Ras Tanajib Airport                                                      |
| Turaif Domestic Airport                                                  |
| Al Wajh Domestic Airport                                                 |
| Prince Abdulmohsin Bin Abdulaziz Airport                                 |
| Abadan Airport                                                           |
| Dezful Airport                                                           |
| Aghajari Airport                                                         |
| Gachsaran Airport                                                        |
| Shahid Asyaee Airport                                                    |
| Omidiyeh Airport                                                         |
| Mahshahr Airport                                                         |
| Ahwaz Airport                                                            |
| Abu Musa Island Airport                                                  |
| Bushehr Airport                                                          |
| Bastak Airport                                                           |
| Asaloyeh Airport                                                         |
| Kish International Airport                                               |
| Bandar Lengeh Airport                                                    |
| Khark Island Airport                                                     |
| Sirri Island Airport                                                     |
| Lavan Island Airport                                                     |
| Shahid Ashrafi Esfahani Airport                                          |
| Sanandaj Airport                                                         |
| Hesa Airport                                                             |
| Shahid Vatan Pour Air Base                                               |
| Kashan Airport                                                           |
| Esfahan Shahid Beheshti International Airport                            |
| Badr Air Base                                                            |
| Sardar-e-Jangal Airport                                                  |
| Arak Airport                                                             |
| Ghazvin Azadi Airport                                                    |
| Kushke Nosrat Airport                                                    |
| Doshan Tappeh Air Base                                                   |
| Ghale Morghi Airport                                                     |
| Mehrabad International Airport                                           |
| Qazvin Airport                                                           |
| Naja Airport                                                             |
| Bandar Abbas International Airport                                       |
| Jiroft Airport                                                           |
| Kerman Airport                                                           |
| Havadarya Airport                                                        |
| Dayrestan Airport                                                        |
| Sirjan Airport                                                           |
| Birjand Airport                                                          |
| Sarakhs Airport                                                          |
| Shahroud Airport                                                         |
| Tabas Airport                                                            |
| Kalaleh Airport                                                          |
| Ramsar Airport                                                           |
| Fasa Airport                                                             |
| Jahrom Airport                                                           |
| Lamerd Airport                                                           |
| Shiraz Shahid Dastghaib International Airport                            |
| Khoy Airport                                                             |
| Tabriz International Airport                                             |
| Zanjan Airport                                                           |
| Shahid Sadooghi Airport                                                  |
| Zabol Airport                                                            |
| Konarak Airport                                                          |
| Zahedan International Airport                                            |
| Iran Shahr Airport                                                       |
| Saravan Airport                                                          |
| Queen Alia International Airport                                         |
| Amman-Marka International Airport                                        |
| Aqaba King Hussein International Airport                                 |
| Prince Hassan Air Base                                                   |
| Jerusalem Airport                                                        |
| King Hussein Air College                                                 |
| Kuwait International Airport                                             |
| Beirut Rafic Hariri International Airport                                |
| Rene Mouawad Air Base                                                    |
| Abu Dhabi International Airport                                          |
| Bateen Airport                                                           |
| Al Hamra Aux Airport                                                     |
| Jebel Dhana Airport                                                      |
| Al Dhafra Air Base                                                       |
| Arzanah Airport                                                          |
| Das Island Airport                                                       |
| Zirku Airport                                                            |
| Dubai International Airport                                              |
| Fujairah International Airport                                           |
| Ras Al Khaimah International Airport                                     |
| Sharjah International Airport                                            |
| Khasab Air Base                                                          |
| Masirah Air Base                                                         |
| Muscat International Airport                                             |
| Salalah Airport                                                          |
| Thumrait Air Base                                                        |
| Bhagatanwala Airport                                                     |
| Faisalabad International Airport                                         |
| Gwadar International Airport                                             |
| Gilgit Airport                                                           |
| Shahbaz Air Base                                                         |
| Jinnah International Airport                                             |
| Alama Iqbal International Airport                                        |
| Walton Airport                                                           |
| Mangla Airport                                                           |
| Muzaffarabad Airport                                                     |
| Mianwali Air Base                                                        |
| Moenjodaro Airport                                                       |
| Masroor Air Base                                                         |
| Multan International Airport                                             |
| Shaheed Benazirabad Airport                                              |
| Okara Cantonment Airstrip                                                |
| Panjgur Airport                                                          |
| Pasni Airport                                                            |
| Peshawar International Airport                                           |
| Qasim Airport                                                            |
| Quetta International Airport                                             |
| Shaikh Zaid Airport                                                      |
| Benazir Bhutto International Airport                                     |
| Risalpur Air Base                                                        |
| Rawalakot Airport                                                        |
| Sukkur Airport                                                           |
| Saidu Sharif Airport                                                     |
| Sui Airport                                                              |
| Talhar Airport                                                           |
| Wana Airport                                                             |
| Zhob Airport                                                             |
| Basrah International Airport                                             |
| Aleppo International Airport                                             |
| Damascus International Airport                                           |
| Deir ez-Zor Air Base                                                     |
| Bassel Al-Assad International Airport                                    |
| Palmyra Airport                                                          |
| Doha International Airport                                               |
| Canton Island Airport                                                    |
| Rota International Airport                                               |
| Saipan International Airport                                             |
| Andersen Air Force Base                                                  |
| Antonio B. Won Pat International Airport                                 |
| Tinian International Airport                                             |
| Marshall Islands International Airport                                   |
| Dyess Army Air Field                                                     |
| Bucholz Army Air Field                                                   |
| Cassidy International Airport                                            |
| Henderson Field                                                          |
| Chuuk International Airport                                              |
| Pohnpei International Airport                                            |
| Babelthuap Airport                                                       |
| Kosrae International Airport                                             |
| Yap International Airport                                                |
| Kinmen Airport                                                           |
| Pingtung South Airport                                                   |
| Longtan Air Base                                                         |
| Taitung Airport                                                          |
| Lyudao Airport                                                           |
| Kaohsiung International Airport                                          |
| Chiayi Airport                                                           |
| Lanyu Airport                                                            |
| Taichung Ching Chuang Kang Airport                                       |
| Tainan Airport                                                           |
| Hsinchu Air Base                                                         |
| Makung Airport                                                           |
| Chihhang Air Base                                                        |
| Pingtung North Airport                                                   |
| Taipei Songshan Airport                                                  |
| Taiwan Taoyuan International Airport                                     |
| Wang-an Airport                                                          |
| Hualien Airport                                                          |
| Narita International Airport                                             |
| Matsumoto Airport                                                        |
| Hyakuri Airport                                                          |
| Minami Torishima Airport                                                 |
| Iwo Jima Airport                                                         |
| Nanki Shirahama Airport                                                  |
| Kohnan Airport                                                           |
| Tokachi-Obihiro Airport                                                  |
| New Chitose Airport                                                      |
| Hakodate Airport                                                         |
| Chitose Air Base                                                         |
| Memanbetsu Airport                                                       |
| Nakashibetsu Airport                                                     |
| Tokachi Airport                                                          |
| Wakkanai Airport                                                         |
| Iki Airport                                                              |
| Yamaguchi Ube Airport                                                    |
| Tsushima Airport                                                         |
| Monbetsu Airport                                                         |
| Asahikawa Airport                                                        |
| Okushiri Airport                                                         |
| Rishiri Airport                                                          |
| Ashiya Airport                                                           |
| Yakushima Airport                                                        |
| Fukue Airport                                                            |
| Fukuoka Airport                                                          |
| New Tanegashima Airport                                                  |
| Kagoshima Airport                                                        |
| Miyazaki Airport                                                         |
| Nyutabaru Airport                                                        |
| Oita Airport                                                             |
| Kitakysh Airport                                                         |
| Kumamoto Airport                                                         |
| Nagasaki Airport                                                         |
| Kanoya Airport                                                           |
| Tsuiki Air Field                                                         |
| Amami Airport                                                            |
| Okierabu Airport                                                         |
| Tokunoshima Airport                                                      |
| Fukui Airport                                                            |
| Gifu Airport                                                             |
| Hamamatsu Airport                                                        |
| Komatsu Airport                                                          |
| Oki Airport                                                              |
| Toyama Airport                                                           |
| Shizuhama Airport                                                        |
| Hiroshima Airport                                                        |
| Okayama Airport                                                          |
| Izumo Airport                                                            |
| Hofu Airport                                                             |
| Miho Yonago Airport                                                      |
| Kchi Ryma Airport                                                        |
| Matsuyama Airport                                                        |
| Osaka International Airport                                              |
| Tottori Airport                                                          |
| Tokushima Airport/JMSDF Air Base                                         |
| Takamatsu Airport                                                        |
| Yao Airport                                                              |
| Ozuki Airport                                                            |
| Aomori Airport                                                           |
| Yamagata Airport                                                         |
| Sado Airport                                                             |
| Hachinohe Airport                                                        |
| Hanamaki Airport                                                         |
| Akita Airport                                                            |
| Misawa Air Base                                                          |
| Sendai Airport                                                           |
| Matsushima Air Base                                                      |
| Atsugi Naval Air Facility                                                |
| Tateyama Airport                                                         |
| Hachijojima Airport                                                      |
| Iruma Air Base                                                           |
| Kisarazu Airport                                                         |
| Shimofusa Airport                                                        |
| Oshima Airport                                                           |
| Kastner Army Heliport                                                    |
| Tokyo Haneda International Airport                                       |
| Yokota Air Base                                                          |
| Gwangju Airport                                                          |
| Jeon Ju Airport (G-703)                                                  |
| Yeosu Airport                                                            |
| Sokcho Airport                                                           |
| Gangneung Airport (K-18)                                                 |
| Jeju International Airport                                               |
| Jinhae Airbase/Airport (G-813/K-10)                                      |
| Gimhae International Airport                                             |
| Ulsan Airport                                                            |
| A 511 Airport                                                            |
| Seoul Air Base (K-16)                                                    |
| Osan Air Base                                                            |
| Gimpo International Airport                                              |
| Suwon Airport                                                            |
| Pohang Airport (G-815/K-3)                                               |
| Daegu Airport                                                            |
| Yecheon Airbase                                                          |
| Naha Airport                                                             |
| Ie Shima Auxiliary Air Base                                              |
| Kadena Air Base                                                          |
| New Ishigaki Airport                                                     |
| Kumejima Airport                                                         |
| Minami-Daito Airport                                                     |
| Miyako Airport                                                           |
| Kitadaito Airport                                                        |
| Shimojishima Airport                                                     |
| Tarama Airport                                                           |
| Yoron Airport                                                            |
| Futenma Marine Corps Air Station                                         |
| Yonaguni Airport                                                         |
| Ninoy Aquino International Airport                                       |
| Awang Airport                                                            |
| Cagayan De Oro Airport                                                   |
| Pagadian Airport                                                         |
| General Santos International Airport                                     |
| Zamboanga International Airport                                          |
| Loakan Airport                                                           |
| Daet Airport                                                             |
| Basa Air Base                                                            |
| Lingayen Airport                                                         |
| San Jose Airport                                                         |
| Fernando Air Base                                                        |
| Mamburao Airport                                                         |
| Vigan Airport                                                            |
| Dr.Juan C. Angara Airport                                                |
| Bagabag Airport                                                          |
| Daniel Z. Romualdez Airport                                              |
| Bacolod-Silay Airport                                                    |
| Sibulan Airport                                                          |
| Godofredo P. Ramos Airport                                               |
| Guiuan Airport                                                           |
| Iloilo International Airport                                             |
| Kalibo International Airport                                             |
| Puerto Princesa Airport                                                  |
| Evelio Javier Airport                                                    |
| Comodoro Pierrestegui Airport                                            |
| Gualeguaychu Airport                                                     |
| Junin Airport                                                            |
| General Urquiza Airport                                                  |
| Islas Malvinas Airport                                                   |
| Sauce Viejo Airport                                                      |
| Jorge Newbery Airpark                                                    |
| Ingeniero Ambrosio Taravella Airport                                     |
| Chamical Airport                                                         |
| San Fernando Airport                                                     |
| Mariano Moreno Airport                                                   |
| La Plata Airport                                                         |
| Moron Airport                                                            |
| El Palomar Airport                                                       |
| Chos Malal Airport                                                       |
| Dr. Arturo H. Illia Airport                                              |
| El Plumerillo Airport                                                    |
| Comodoro D.R. Salomn Airport                                             |
| Suboficial Ay Santiago Germano Airport                                   |
| Catamarca Airport                                                        |
| Vicecomodoro Angel D. La Paz Aragons Airport                             |
| Tinogasta Airport                                                        |
| Capitan V A Almonacid Airport                                            |
| Chilecito Airport                                                        |
| Teniente Benjamin Matienzo Airport                                       |
| Domingo Faustino Sarmiento Airport                                       |
| Area De Material Airport                                                 |
| Villa Dolores Airport                                                    |
| La Quiaca Airport                                                        |
| Marcos Juarez Airport                                                    |
| Villa Reynolds Airport                                                   |
| Brigadier Mayor D Cesar Raul Ojeda Airport                               |
| Corrientes Airport                                                       |
| Resistencia International Airport                                        |
| Formosa Airport                                                          |
| Cataratas Del Iguaz International Airport                                |
| Paso De Los Libres Airport                                               |
| Monte Caseros Airport                                                    |
| Libertador Gral D Jose De San Martin Airport                             |
| Termal Airport                                                           |
| Martin Miguel De Guemes International Airport                            |
| Gobernador Horacio Guzman International Airport                          |
| Orn Airport                                                              |
| Laboulaye Airport                                                        |
| El Dorado Airport                                                        |
| Goya Airport                                                             |
| Ober Airport                                                             |
| Reconquista Airport                                                      |
| Curuzu Cuatia Airport                                                    |
| El Bolson Airport                                                        |
| General E. Mosconi Airport                                               |
| Brigadier Antonio Parodi Airport                                         |
| Almirante Marco Andres Zar Airport                                       |
| Gobernador Castello Airport                                              |
| El Tehuelche Airport                                                     |
| Marambio Base                                                            |
| Puerto Deseado Airport                                                   |
| Hermes Quijada International Airport                                     |
| Piloto Civil N. Fernndez Airport                                         |
| Malvinas Argentinas Airport                                              |
| Capitan D Daniel Vazquez Airport                                         |
| Perito Moreno Airport                                                    |
| Santa Cruz Airport                                                       |
| Comandante Espora Airport                                                |
| Brigadier D.H.E. Ruiz Airport                                            |
| Olavarria Airport                                                        |
| General Pico Airport                                                     |
| Tres Arroyos Airport                                                     |
| Bolivar Airport                                                          |
| stor Piazzola International Airport                                      |
| Presidente Peron Airport                                                 |
| Comodoro Pedro Zanni Airport                                             |
| Santa Rosa Airport                                                       |
| San Carlos De Bariloche Airport                                          |
| Hroes De Malvinas Airport                                                |
| Villa Gesell Airport                                                     |
| Cutral-Co Airport                                                        |
| Aviador C. Campos Airport                                                |
| Conceio do Araguaia Airport                                              |
| Campo Dlio Jardim de Mattos Airport                                      |
| Amap Airport                                                             |
| Araraquara Airport                                                       |
| Santa Maria Airport                                                      |
| Piloto Osvaldo Marques Dias Airport                                      |
| Araatuba Airport                                                         |
| Val de Cans/Jlio Cezar Ribeiro International Airport                     |
| Comandante Gustavo Kraemer Airport                                       |
| Pampulha - Carlos Drummond de Andrade Airport                            |
| Bacacheri Airport                                                        |
| Major Brigadeiro Doorgal Borges Airport                                  |
| Presidente Juscelino Kubistschek International Airport                   |
| Bauru Airport                                                            |
| Atlas Brasil Cantanhede Airport                                          |
| Barra do Garas Airport                                                   |
| Cascavel Airport                                                         |
| Cachimbo Airport                                                         |
| Tancredo Neves International Airport                                     |
| Campo Grande Airport                                                     |
| Serafin Enoss Bertaso Airport                                            |
| Brig. Lysias Augusto Rodrigues Airport                                   |
| Diomcio Freitas Airport                                                  |
| Canoas Air Force Base                                                    |
| Bartolomeu Lisandro Airport                                              |
| Corumb International Airport                                             |
| Afonso Pena Airport                                                      |
| Caravelas Airport                                                        |
| Hugo Cantergiani Regional Airport                                        |
| Marechal Rondon Airport                                                  |
| Cruzeiro do Sul Airport                                                  |
| Presidente Prudente Airport                                              |
| Eduardo Gomes International Airport                                      |
| Jacareacanga Airport                                                     |
| So Pedro da Aldeia Airport                                               |
| Cataratas International Airport                                          |
| Herclio Luz International Airport                                        |
| Fernando de Noronha Airport                                              |
| Furnas Airport                                                           |
| Pinto Martins International Airport                                      |
| Rio Galeo  Tom Jobim International Airport                               |
| Guajar-Mirim Airport                                                     |
| Santa Genoveva Airport                                                   |
| EMBRAER - Unidade Gavio Peixoto Airport                                  |
| Guarulhos - Governador Andr Franco Montoro International Airport         |
| Guaratinguet Airport                                                     |
| Altamira Airport                                                         |
| Itacoatiara Airport                                                      |
| Itaituba Airport                                                         |
| Bahia - Jorge Amado Airport                                              |
| Usiminas Airport                                                         |
| Francisco Vilela do Amaral Airport                                       |
| Prefeito Renato Moreira Airport                                          |
| Belm/Brigadeiro Protsio de Oliveira Airport                              |
| Francisco de Assis Airport                                               |
| Presidente Castro Pinto International Airport                            |
| Lauro Carneiro de Loyola Airport                                         |
| Presidente Joo Suassuna Airport                                          |
| Viracopos International Airport                                          |
| Lages Airport                                                            |
| Lins Airport                                                             |
| Governador Jos Richa Airport                                             |
| Bom Jesus da Lapa Airport                                                |
| Lagoa Santa Airport                                                      |
| Joo Correa da Rocha Airport                                              |
| Monte Dourado Airport                                                    |
| Regional de Maring - Slvio Nane Junior Airport                           |
| Mrio Ribeiro Airport                                                     |
| Ponta Pelada Airport                                                     |
| Zumbi dos Palmares Airport                                               |
| Alberto Alcolumbre Airport                                               |
| Dix-Sept Rosado Airport                                                  |
| Campo de Marte Airport                                                   |
| Manicor Airport                                                          |
| Ministro Victor Konder International Airport                             |
| Santo ngelo Airport                                                      |
| Governador Aluzio Alves International Airport                            |
| Oiapoque Airport                                                         |
| Salgado Filho Airport                                                    |
| Prefeito Doutor Joo Silva Filho Airport                                  |
| Poos de Caldas - Embaixador Walther Moreira Salles Airport               |
| Lauro Kurtz Airport                                                      |
| Joo Simes Lopes Neto International Airport                               |
| Senador Nilo Coelho Airport                                              |
| Porto Nacional Airport                                                   |
| Ponta Por Airport                                                        |
| Governador Jorge Teixeira de Oliveira Airport                            |
| Plcido de Castro Airport                                                 |
| Guararapes - Gilberto Freyre International Airport                       |
| Santos Dumont Airport                                                    |
| Leite Lopes Airport                                                      |
| Santa Cruz Air Force Base                                                |
| Professor Urbano Ernesto Stumpf Airport                                  |
| Marechal Cunha Machado International Airport                             |
| Congonhas Airport                                                        |
| Prof. Eribelto Manoel Reino State Airport                                |
| Base Area de Santos Airport                                              |
| Deputado Luiz Eduardo Magalhes International Airport                     |
| Trombetas Airport                                                        |
| Senador Petrnio Portela Airport                                          |
| Tef Airport                                                              |
| Tarauac Airport                                                          |
| Telmaco Borba Airport                                                    |
| Tiris Airport                                                            |
| Tabatinga Airport                                                        |
| Tucuru Airport                                                           |
| So Gabriel da Cachoeira Airport                                          |
| Paulo Afonso Airport                                                     |
| Rubem Berta Airport                                                      |
| Ten. Cel. Aviador Csar Bombonato Airport                                 |
| Mrio de Almeida Franco Airport                                           |
| Major Brigadeiro Trompowsky Airport                                      |
| Brigadeiro Camaro Airport                                                |
| Eurico de Aguiar Salles Airport                                          |
| Iauaret Airport                                                          |
| Campo Fontenelle Airport                                                 |
| Chacalluta Airport                                                       |
| Balmaceda Airport                                                        |
| El Bosque Airport                                                        |
| Chile Chico Airport                                                      |
| El Loa Airport                                                           |
| Gral. Bernardo OHiggins Airport                                          |
| Pdte. Carlos Ibaez del Campo Airport                                     |
| Teniente Vidal Airport                                                   |
| Diego Aracena Airport                                                    |
| Comodoro Arturo Merino Bentez International Airport                      |
| Andrs Sabella Glvez International Airport                                |
| Capitan Fuentes Martinez Airport Airport                                 |
| Futaleuf Airport                                                         |
| Mara Dolores Airport                                                     |
| Guardiamarina Zaartu Airport                                             |
| Carriel Sur Airport                                                      |
| Mataveri Airport                                                         |
| Caal Bajo Carlos - Hott Siebert Airport                                  |
| Vallenar Airport                                                         |
| De La Independencia Airport                                              |
| Teniente Rodolfo Marsh Martin Base                                       |
| La Florida Airport                                                       |
| Eulogio Snchez Airport                                                   |
| Maquehue Airport                                                         |
| El Tepual Airport                                                        |
| Chaitn Airport                                                           |
| Pichoy Airport                                                           |
| Chachon Airport                                                          |
| Hacienda Clementina Airport                                              |
| Francisco De Orellana Airport                                            |
| Mariscal Lamar Airport                                                   |
| Seymour Airport                                                          |
| Jos Joaqun de Olmedo International Airport                               |
| Gualaquiza Airport                                                       |
| Atahualpa Airport                                                        |
| Km 192 Airport                                                           |
| Hacienda La Julia Airport                                                |
| Cotopaxi International Airport                                           |
| Jose Maria Velasco Ibarra Airport                                        |
| Coronel E Carvajal Airport                                               |
| General Manuel Serrano Airport                                           |
| El Carmen Airport                                                        |
| Eloy Alfaro International Airport                                        |
| Maragrosa Airport                                                        |
| Amable Calle Gutierrez Airport                                           |
| Reales Tamarindos Airport                                                |
| Quevedo Airport                                                          |
| Mariscal Sucre International Airport                                     |
| Chimborazo Airport                                                       |
| Santa Rosa International Airport                                         |
| General Ulpiano Paez Airport                                             |
| Santo Domingo de Los Colorados Airport                                   |
| Taura Airport                                                            |
| Mayor Galo Torres Airport                                                |
| Tarapoa Airport                                                          |
| Teniente Coronel Luis a Mantilla Airport                                 |
| Silvio Pettirossi International Airport                                  |
| Juan De Ayolas Airport                                                   |
| Teniente Col Carmelo Peralta Airport                                     |
| Itaip Airport                                                            |
| Dr. Luis Maria Argaa International Airport                               |
| Carlos Miguel Gimenez Airport                                            |
| El Eden Airport                                                          |
| Tres De Mayo Airport                                                     |
| Las Flores Airport                                                       |
| Palonegro Airport                                                        |
| El Dorado International Airport                                          |
| Ernesto Cortissoz International Airport                                  |
| Jos Celestino Mutis Airport                                              |
| Gerardo Tobar Lpez Airport                                               |
| Camilo Daza International Airport                                        |
| Rafael Nuez International Airport                                        |
| Alfonso Bonilla Aragon International Airport                             |
| La Florida Airport                                                       |
| Las Brujas Airport                                                       |
| Yarigues Airport                                                         |
| Gustavo Artunduaga Paredes Airport                                       |
| Santiago Vila Airport                                                    |
| Juan Casiano Airport                                                     |
| Guaymaral Airport                                                        |
| Perales Airport                                                          |
| San Luis Airport                                                         |
| Antonio Roldan Betancourt Airport                                        |
| Jorge Isaac Airport                                                      |
| Alfredo Vsquez Cobo International Airport                                |
| Enrique Olaya Herrera Airport                                            |
| Baracoa Airport                                                          |
| Los Garzones Airport                                                     |
| Fabio Alberto Leon Bentley Airport                                       |
| La Nubia Airport                                                         |
| Benito Salas Airport                                                     |
| Aguas Claras Airport                                                     |
| Otu Airport                                                              |
| Puerto Bolvar Airport                                                    |
| German Olano Airport                                                     |
| Matecaa International Airport                                            |
| Pitalito Airport                                                         |
| Guillermo Len Valencia Airport                                           |
| Antonio Narino Airport                                                   |
| El Embrujo Airport                                                       |
| Mariquita Airport                                                        |
| Jose Maria Crdova International Airport                                  |
| Almirante Padilla Airport                                                |
| Jorge E. Gonzalez Torres Airport                                         |
| Simn Bolvar International Airport                                        |
| Gustavo Rojas Pinilla International Airport                              |
| Eduardo Falla Solano Airport                                             |
| Gustavo Vargas Airport                                                   |
| Santiago Perez Airport                                                   |
| El Carao Airport                                                         |
| Heriberto Gl Martnez Airport                                             |
| Alfonso Lpez Pumarejo Airport                                            |
| Vanguardia Airport                                                       |
| Bermejo Airport                                                          |
| Jorge Wilsterman International Airport                                   |
| Chimore Airport                                                          |
| Capitn Anbal Arab Airport                                                |
| El Alto International Airport                                            |
| Juan Mendoza Airport                                                     |
| Capitan Nicolas Rojas Airport                                            |
| Capitn Av. Salvador Ogaya G. airport                                     |
| Santa Ana Del Yacuma Airport                                             |
| Juana Azurduy De Padilla Airport                                         |
| Capitan Oriel Lea Plaza Airport                                          |
| Teniente Av. Jorge Henrich Arauz Airport                                 |
| Teniente Coronel Rafael Pabn Airport                                     |
| Viru Viru International Airport                                          |
| Yacuiba Airport                                                          |
| Johan Adolf Pengel International Airport                                 |
| Cayenne-Rochambeau Airport                                               |
| Saint-Georges-de-l'Oyapock Airport                                       |
| Huancabamba Airport                                                      |
| Alferez FAP Alfredo Vladimir Sara Bauer Airport                          |
| Teniente General Gerardo Prez Pinedo Airport                             |
| Iberia Airport                                                           |
| Cap FAP David Abenzur Rengifo International Airport                      |
| Teniente FAP Jaime A De Montreuil Morales Airport                        |
| Puerto Esperanza Airport                                                 |
| Cesar Torke Podesta Airport                                              |
| Capitan FAP Jose A Quinones Gonzales International Airport               |
| Coronel FAP Alfredo Mendivil Duarte Airport                              |
| Andahuaylas Airport                                                      |
| Comandante FAP German Arias Graziani Airport                             |
| Jorge Chvez International Airport                                        |
| Juanjui Airport                                                          |
| Francisco Carle Airport                                                  |
| Inca Manco Capac International Airport                                   |
| Ilo Airport                                                              |
| Las Palmas Air Base                                                      |
| Capitan FAP Pedro Canga Rodriguez Airport                                |
| Moises Benzaquen Rengifo Airport                                         |
| Collique Airport                                                         |
| Chachapoyas Airport                                                      |
| Coronel FAP Francisco Secada Vignetta International Airport              |
| Rodrguez Balln International Airport                                     |
| Capitn FAP Leonardo Alvario Herr Airport                                 |
| Capitan FAP Carlos Martinez De Pinillos International Airport            |
| Capitn FAP Renn Elas Olivera International Airport                       |
| Cadete FAP Guillermo Del Castillo Paredes Airport                        |
| Coronel FAP Carlos Ciriani Santa Rosa International Airport              |
| Padre Aldamiz International Airport                                      |
| Capitn FAP Guillermo Concha Iberico International Airport                |
| Capitan Montes Airport                                                   |
| Alejandro Velasco Astete International Airport                           |
| Angel S Adami Airport                                                    |
| Santa Bernardina International Airport                                   |
| Carrasco International /General C L Berisso Airport                      |
| Nueva Hesperides International Airport                                   |
| Oswaldo Guevara Mujica Airport                                           |
| Anaco Airport                                                            |
| San Fernando de Atabapo Airport                                          |
| General Jos Antonio Anzoategui International Airport                     |
| Barinas Airport                                                          |
| El Libertador Airbase                                                    |
| Barquisimeto International Airport                                       |
| Aeropuerto General Tomas de Heres. Ciudad Bolivar                        |
| Caicara del Orinoco Airport                                              |
| San Carlos Airport                                                       |
| Calabozo Airport                                                         |
| Canaima Airport                                                          |
| Carora Airport                                                           |
| General Francisco Bermdez Airport                                        |
| Jos Leonardo Chirinos Airport                                            |
| Oscar Machado Zuluaga Airport                                            |
| Cuman (Antonio Jos de Sucre) Airport                                     |
| Capitn Manuel Ros Airbase                                                |
| El Dorado Airport                                                        |
| Elorza Airport                                                           |
| Guasdalito Airport                                                       |
| Guiria Airport                                                           |
| Guanare Airport                                                          |
| Higuerote Airport                                                        |
| Andrs Miguel Salazar Marcano Airport                                     |
| Josefa Camejo International Airport                                      |
| San Juan de Los Morros Airport                                           |
| La Fria Airport                                                          |
| La Orchila Airport                                                       |
| La Chinita International Airport                                         |
| Alberto Carnevalli Airport                                               |
| Del Caribe Santiago Mario International Airport                          |
| Simn Bolvar International Airport                                        |
| Maturn Airport                                                           |
| Cacique Aramare Airport                                                  |
| General Bartolome Salom International Airport                            |
| Paramillo Airport                                                        |
| General Manuel Carlos Piar International Airport                         |
| Palmarito Airport                                                        |
| San Antonio Del Tachira Airport                                          |
| Santa Brbara de Barinas Airport                                          |
| Santa Elena de Uairen Airport                                            |
| Mayor Buenaventura Vivas International Airport                           |
| Sub Teniente Nestor Arias Airport                                        |
| San Fernando De Apure Airport                                            |
| San Tom Airport                                                          |
| Santa Brbara del Zulia Airport                                           |
| Tucupita Airport                                                         |
| Tumeremo Airport                                                         |
| Arturo Michelena International Airport                                   |
| Dr. Antonio Nicols Briceo Airport                                        |
| Valle de La Pascua Airport                                               |
| Linden Airport                                                           |
| Lethem Airport                                                           |
| V.C. Bird International Airport                                          |
| Sir Grantley Adams International Airport                                 |
| Canefield Airport                                                        |
| Douglas-Charles Airport                                                  |
| Martinique Aim Csaire International Airport                              |
| L'Esprance Airport                                                       |
| Pointe--Pitre Le Raizet                                                  |
| Point Salines International Airport                                      |
| Cyril E. King Airport                                                    |
| Henry E Rohlsen Airport                                                  |
| Rafael Hernandez Airport                                                 |
| Diego Jimenez Torres Airport                                             |
| Fernando Luis Ribas Dominicci Airport                                    |
| Eugenio Maria De Hostos Airport                                          |
| Mercedita Airport                                                        |
| Luis Munoz Marin International Airport                                   |
| Robert L. Bradshaw International Airport                                 |
| George F. L. Charles Airport                                             |
| Hewanorra International Airport                                          |
| Queen Beatrix International Airport                                      |
| Flamingo International Airport                                           |
| Hato International Airport                                               |
| F. D. Roosevelt Airport                                                  |
| Princess Juliana International Airport                                   |
| Clayton J Lloyd International Airport                                    |
| Tobago-Crown Point Airport                                               |
| Piarco International Airport                                             |
| Terrance B. Lettsome International Airport                               |
| Canouan Airport                                                          |
| Mustique Airport                                                         |
| Argyle International Airport                                             |
| Almaty Airport                                                           |
| Balkhash Airport                                                         |
| Astana International Airport                                             |
| Taraz Airport                                                            |
| Manas International Airport                                              |
| Osh Airport                                                              |
| Shymkent Airport                                                         |
| Uralsk Airport                                                           |
| Pavlodar Airport                                                         |
| Semipalatinsk Airport                                                    |
| Aktobe Airport                                                           |
| Heydar Aliyev International Airport                                      |
| Yakutsk Airport                                                          |
| Mirny Airport                                                            |
| Ignatyevo Airport                                                        |
| Khabarovsk-Novy Airport                                                  |
| Provideniya Bay Airport                                                  |
| Sokol Airport                                                            |
| Pevek Airport                                                            |
| Yelizovo Airport                                                         |
| Yuzhno-Sakhalinsk Airport                                                |
| Vladivostok International Airport                                        |
| Chita-Kadala Airport                                                     |
| Bratsk Airport                                                           |
| Irkutsk Airport                                                          |
| Ulan-Ude Airport (Mukhino)                                               |
| Boryspil International Airport                                           |
| Donetsk International Airport                                            |
| Dnipropetrovsk International Airport                                     |
| Simferopol International Airport                                         |
| Kiev Zhuliany International Airport                                      |
| Lviv International Airport                                               |
| Odessa International Airport                                             |
| Pulkovo Airport                                                          |
| Murmansk Airport                                                         |
| Gomel Airport                                                            |
| Vitebsk Vostochny Airport                                                |
| Khrabrovo Airport                                                        |
| Minsk 1 Airport                                                          |
| Minsk National Airport                                                   |
| Abakan Airport                                                           |
| Barnaul Airport                                                          |
| Kemerovo Airport                                                         |
| Omsk Central Airport                                                     |
| Krasnodar Pashkovsky International Airport                               |
| Uytash Airport                                                           |
| Mineralnyye Vody Airport                                                 |
| Stavropol Shpakovskoye Airport                                           |
| Platov International Airport                                             |
| Sochi International Airport                                              |
| Astrakhan Airport                                                        |
| Volgograd International Airport                                          |
| Chelyabinsk Balandino Airport                                            |
| Magnitogorsk International Airport                                       |
| Nizhnevartovsk Airport                                                   |
| Bolshoye Savino Airport                                                  |
| Surgut Airport                                                           |
| Koltsovo Airport                                                         |
| Ashgabat International Airport                                           |
| Turkmenbashi Airport                                                     |
| Turkmenabat Airport                                                      |
| Dushanbe Airport                                                         |
| Bukhara Airport                                                          |
| Samarkand Airport                                                        |
| Tashkent International Airport                                           |
| Bryansk Airport                                                          |
| Sheremetyevo International Airport                                       |
| Migalovo Air Base                                                        |
| Voronezh International Airport                                           |
| Vnukovo International Airport                                            |
| Syktyvkar Airport                                                        |
| Kazan International Airport                                              |
| Orenburg Central Airport                                                 |
| Ufa International Airport                                                |
| Kurumoch International Airport                                           |
| Sardar Vallabhbhai Patel International Airport                           |
| Akola Airport                                                            |
| Aurangabad Airport                                                       |
| Chhatrapati Shivaji International Airport                                |
| Bilaspur Airport                                                         |
| Bhuj Airport                                                             |
| Belgaum Airport                                                          |
| Vadodara Airport                                                         |
| Raja Bhoj International Airport                                          |
| Bhavnagar Airport                                                        |
| Daman Airport                                                            |
| Deesa Airport                                                            |
| Guna Airport                                                             |
| Dabolim Airport                                                          |
| Devi Ahilyabai Holkar Airport                                            |
| Jabalpur Airport                                                         |
| Jamnagar Airport                                                         |
| Kandla Airport                                                           |
| Khajuraho Airport                                                        |
| Kolhapur Airport                                                         |
| Keshod Airport                                                           |
| Dr. Babasaheb Ambedkar International Airport                             |
| Nashik Airport                                                           |
| Pune Airport                                                             |
| Porbandar Airport                                                        |
| Rajkot Airport                                                           |
| Raipur Airport                                                           |
| Solapur Airport                                                          |
| Surat Airport                                                            |
| Maharana Pratap Airport                                                  |
| Bandaranaike International Colombo Airport                               |
| Anuradhapura Air Force Base                                              |
| Batticaloa Airport                                                       |
| Colombo Ratmalana Airport                                                |
| Ampara Airport                                                           |
| Kankesanturai Airport                                                    |
| China Bay Airport                                                        |
| Kampong Chhnang Airport                                                  |
| Phnom Penh International Airport                                         |
| Siem Reap International Airport                                          |
| Stung Treng Airport                                                      |
| Along Airport                                                            |
| Agartala Airport                                                         |
| Lengpui Airport                                                          |
| Bagdogra Airport                                                         |
| Bokaro Airport                                                           |
| Biju Patnaik Airport                                                     |
| Netaji Subhash Chandra Bose International Airport                        |
| Cooch Behar Airport                                                      |
| Dhanbad Airport                                                          |
| Gaya Airport                                                             |
| Hirakud Airport                                                          |
| Imphal Airport                                                           |
| Jharsuguda Airport                                                       |
| Sonari Airport                                                           |
| Jorhat Airport                                                           |
| Kailashahar Airport                                                      |
| Silchar Airport                                                          |
| North Lakhimpur Airport                                                  |
| Dibrugarh Airport                                                        |
| Muzaffarpur Airport                                                      |
| Nawapara Airport                                                         |
| Panagarh Air Force Station                                               |
| Lok Nayak Jayaprakash Airport                                            |
| Purnea Airport                                                           |
| Birsa Munda Airport                                                      |
| Rourkela Airport                                                         |
| Utkela Airport                                                           |
| Vishakhapatnam Airport                                                   |
| Ziro Airport                                                             |
| Cox's Bazar Airport                                                      |
| Shah Amanat International Airport                                        |
| Ishurdi Airport                                                          |
| Jessore Airport                                                          |
| Shah Mokhdum Airport                                                     |
| Saidpur Airport                                                          |
| Osmany International Airport                                             |
| Tejgaon Airport                                                          |
| Hazrat Shahjalal International Airport                                   |
| Hong Kong International Airport                                          |
| Shek Kong Air Base                                                       |
| Agra Airport                                                             |
| Allahabad Airport                                                        |
| Sri Guru Ram Dass Jee International Airport                              |
| Nal Airport                                                              |
| Bakshi Ka Talab Air Force Station                                        |
| Lal Bahadur Shastri Airport                                              |
| Kullu Manali Airport                                                     |
| Bhatinda Air Force Station                                               |
| Bhiwani Airport                                                          |
| Bareilly Air Force Station                                               |
| Chandigarh Airport                                                       |
| Kanpur Airport                                                           |
| Safdarjung Airport                                                       |
| Dehradun Airport                                                         |
| Indira Gandhi International Airport                                      |
| Gwalior Airport                                                          |
| Hissar Airport                                                           |
| Jhansi Airport                                                           |
| Jodhpur Airport                                                          |
| Jaipur International Airport                                             |
| Jaisalmer Airport                                                        |
| Jammu Airport                                                            |
| Kanpur Civil Airport                                                     |
| Kota Airport                                                             |
| Ludhiana Airport                                                         |
| Leh Kushok Bakula Rimpochee Airport                                      |
| Chaudhary Charan Singh International Airport                             |
| Pathankot Airport                                                        |
| Patiala Airport                                                          |
| Pantnagar Airport                                                        |
| Fursatganj Airport                                                       |
| Sarsawa Air Force Station                                                |
| Sheikh ul Alam Airport                                                   |
| Satna Airport                                                            |
| Luang Phabang International Airport                                      |
| Pakse International Airport                                              |
| Phonesavanh Airport                                                      |
| Savannakhet Airport                                                      |
| Sam Neua Airport                                                         |
| Wattay International Airport                                             |
| Macau International Airport                                              |
| Gautam Buddha Airport                                                    |
| Janakpur Airport                                                         |
| Tribhuvan International Airport                                          |
| Pokhara Airport                                                          |
| Simara Airport                                                           |
| Biratnagar Airport                                                       |
| Agatti Airport                                                           |
| Kempegowda International Airport                                         |
| Bellary Airport                                                          |
| Bidar Air Force Station                                                  |
| Vijayawada Airport                                                       |
| Coimbatore International Airport                                         |
| Cochin International Airport                                             |
| Calicut International Airport                                            |
| Kadapa Airport                                                           |
| Car Nicobar Air Force Station                                            |
| Dundigul Air Force Academy                                               |
| Begumpet Airport                                                         |
| Madurai Airport                                                          |
| Mangalore International Airport                                          |
| Chennai International Airport                                            |
| Nagarjuna Sagar Airport                                                  |
| Vir Savarkar International Airport                                       |
| Pondicherry Airport                                                      |
| Rajahmundry Airport                                                      |
| Salem Airport                                                            |
| Tanjore Air Force Base                                                   |
| Tirupati Airport                                                         |
| Tiruchirapally Civil Airport Airport                                     |
| Trivandrum International Airport                                         |
| Tambaram Air Force Station                                               |
| Paro Airport                                                             |
| Mal International Airport                                                |
| Don Mueang International Airport                                         |
| Kamphaeng Saen Airport                                                   |
| Khok Kathiam Airport                                                     |
| U-Tapao International Airport                                            |
| Watthana Nakhon Airport                                                  |
| Lampang Airport                                                          |
| Phrae Airport                                                            |
| Hua Hin Airport                                                          |
| Takhli Airport                                                           |
| Sak Long Airport                                                         |
| Nakhon Sawan Airport                                                     |
| Phitsanulok Airport                                                      |
| Khunan Phumipol Airport                                                  |
| Khoun Khan Airport                                                       |
| Narathiwat Airport                                                       |
| Krabi Airport                                                            |
| Songkhla Airport                                                         |
| Pattani Airport                                                          |
| Samui Airport                                                            |
| Cha Eian Airport                                                         |
| Phuket International Airport                                             |
| Ranong Airport                                                           |
| Hat Yai International Airport                                            |
| Trang Airport                                                            |
| Udon Thani Airport                                                       |
| Sakon Nakhon Airport                                                     |
| Surin Airport                                                            |
| Loei Airport                                                             |
| Khorat Airport                                                           |
| Rob Muang Airport                                                        |
| Da Nang International Airport                                            |
| Gia Lam Air Base                                                         |
| Kep Air Base                                                             |
| Noi Bai International Airport                                            |
| Nha Trang Air Base                                                       |
| Phu Bai Airport                                                          |
| Phu Quoc International Airport                                           |
| Tan Son Nhat International Airport                                       |
| Ann Airport                                                              |
| Anisakan Airport                                                         |
| Bagan Airport                                                            |
| Coco Island Airport                                                      |
| Heho Airport                                                             |
| Hommalinn Airport                                                        |
| Kengtung Airport                                                         |
| Kyaukpyu Airport                                                         |
| Lashio Airport                                                           |
| Lanywa Airport                                                           |
| Mandalay International Airport                                           |
| Myeik Airport                                                            |
| Myitkyina Airport                                                        |
| Momeik Airport                                                           |
| Mong Hsat Airport                                                        |
| Nampong Air Base                                                         |
| Namsang Airport                                                          |
| Hpa-N Airport                                                            |
| Putao Airport                                                            |
| Pyay Airport                                                             |
| Shante Air Base                                                          |
| Sittwe Airport                                                           |
| Thandwe Airport                                                          |
| Tachileik Airport                                                        |
| Taungoo Airport                                                          |
| Yangon International Airport                                             |
| Hasanuddin International Airport                                         |
| Frans Kaisiepo Airport                                                   |
| Nabire Airport                                                           |
| Moses Kilangin Airport                                                   |
| Sentani International Airport                                            |
| Wamena Airport                                                           |
| Mopah Airport                                                            |
| Jalaluddin Airport                                                       |
| Mutiara Airport                                                          |
| Sam Ratulangi Airport                                                    |
| Kasiguncu Airport                                                        |
| Pitu Airport                                                             |
| Sultan Khairun Babullah Airport                                          |
| Syukuran Aminuddin Amir Airport                                          |
| Pattimura Airport Ambon                                                  |
| Fakfak Airport                                                           |
| Kaimana Airport                                                          |
| Babo Airport                                                             |
| Rendani Airport                                                          |
| Dominique Edward Osok Airport                                            |
| Bintulu Airport                                                          |
| Kuching International Airport                                            |
| Limbang Airport                                                          |
| Marudi Airport                                                           |
| Miri Airport                                                             |
| Sibu Airport                                                             |
| Lahad Datu Airport                                                       |
| Kota Kinabalu International Airport                                      |
| Labuan Airport                                                           |
| Tawau Airport                                                            |
| Brunei International Airport                                             |
| Sultan Syarif Kasim Ii (Simpang Tiga) Airport                            |
| Pinang Kampai Airport                                                    |
| Soekarno-Hatta International Airport                                     |
| Binaka Airport                                                           |
| Aek Godang Airport                                                       |
| Minangkabau International Airport                                        |
| Soewondo Air Force Base                                                  |
| Dr Ferdinand Lumban Tobing Airport                                       |
| Nanga Pinoh Airport                                                      |
| Ketapang(Rahadi Usman) Airport                                           |
| Supadio Airport                                                          |
| Sultan Thaha Airport                                                     |
| Fatmawati Soekarno Airport                                               |
| Sultan Mahmud Badaruddin II Airport                                      |
| Japura Airport                                                           |
| Lhok Sukon Airport                                                       |
| Sultan Iskandar Muda International Airport                               |
| Kluang Airport                                                           |
| Sultan Abdul Halim Airport                                               |
| Butterworth Airport                                                      |
| Sultan Ismail Petra Airport                                              |
| Kuantan Airport                                                          |
| Kerteh Airport                                                           |
| Simpang Airport                                                          |
| Sultan Azlan Shah Airport                                                |
| Senai International Airport                                              |
| Kuala Lumpur International Airport                                       |
| Langkawi International Airport                                           |
| Malacca Airport                                                          |
| Sultan Mahmud Airport                                                    |
| Penang International Airport                                             |
| Suai Airport                                                             |
| Presidente Nicolau Lobato International Airport                          |
| Cakung Airport                                                           |
| Sembawang Air Base                                                       |
| Paya Lebar Air Base                                                      |
| Tengah Air Base                                                          |
| Seletar Airport                                                          |
| Singapore Changi Airport                                                 |
| Brisbane Archerfield Airport                                             |
| Northern Peninsula Airport                                               |
| Alice Springs Airport                                                    |
| Brisbane International Airport                                           |
| Gold Coast Airport                                                       |
| Cairns International Airport                                             |
| Charleville Airport                                                      |
| Mount Isa Airport                                                        |
| Sunshine Coast Airport                                                   |
| Mackay Airport                                                           |
| Proserpine Whitsunday Coast Airport                                      |
| Rockhampton Airport                                                      |
| Townsville Airport                                                       |
| Weipa Airport                                                            |
| Avalon Airport                                                           |
| Albury Airport                                                           |
| Melbourne Essendon Airport                                               |
| RAAF Base East Sale                                                      |
| Hobart International Airport                                             |
| Launceston Airport                                                       |
| Melbourne Moorabbin Airport                                              |
| Melbourne International Airport                                          |
| RAAF Williams Point Cook Base                                            |
| Adelaide International Airport                                           |
| RAAF Base Edinburgh                                                      |
| Perth Jandakot Airport                                                   |
| Karratha Airport                                                         |
| Kalgoorlie Boulder Airport                                               |
| Kununurra Airport                                                        |
| Learmonth Airport                                                        |
| Port Hedland International Airport                                       |
| Adelaide Parafield Airport                                               |
| Perth International Airport                                              |
| Woomera Airfield                                                         |
| Christmas Island Airport                                                 |
| Sydney Bankstown Airport                                                 |
| Canberra International Airport                                           |
| Coffs Harbour Airport                                                    |
| Camden Airport                                                           |
| Dubbo City Regional Airport                                              |
| Norfolk Island International Airport                                     |
| RAAF Base Richmond                                                       |
| Sydney Kingsford Smith International Airport                             |
| Tamworth Airport                                                         |
| Wagga Wagga City Airport                                                 |
| Beijing Capital International Airport                                    |
| Dongshan Airport                                                         |
| Tianjin Binhai International Airport                                     |
| Taiyuan Wusu Airport                                                     |
| Guangzhou Baiyun International Airport                                   |
| Changsha Huanghua International Airport                                  |
| Guilin Liangjiang International Airport                                  |
| Nanning Wuxu Airport                                                     |
| Shenzhen Bao'an International Airport                                    |
| Zhengzhou Xinzheng International Airport                                 |
| Wuhan Tianhe International Airport                                       |
| Pyongyang Sunan International Airport                                    |
| Lanzhou Zhongchuan Airport                                               |
| Xi'an Xianyang International Airport                                     |
| Chinggis Khaan International Airport                                     |
| Xishuangbanna Gasa Airport                                               |
| Kunming Changshui International Airport                                  |
| Xiamen Gaoqi International Airport                                       |
| Nanchang Changbei International Airport                                  |
| Fuzhou Changle International Airport                                     |
| Hangzhou Xiaoshan International Airport                                  |
| Ningbo Lishe International Airport                                       |
| Nanjing Lukou Airport                                                    |
| Hefei Luogang International Airport                                      |
| Liuting Airport                                                          |
| Shanghai Hongqiao International Airport                                  |
| Yantai Laishan Airport                                                   |
| Chongqing Jiangbei International Airport                                 |
| Longdongbao Airport                                                      |
| Chengdu Shuangliu International Airport                                  |
| Xichang Qingshan Airport                                                 |
| Kashgar Airport                                                          |
| Hotan Airport                                                            |
| rmqi Diwopu International Airport                                        |
| Taiping Airport                                                          |
| Mudanjiang Hailang International Airport                                 |
| Zhoushuizi Airport                                                       |
| Shanghai Pudong International Airport                                    |
| Pulau Tioman Airport                                                     |
| Sultan Abdul Aziz Shah International Airport                             |
| Noto Airport                                                             |
| Borg El Arab International Airport                                       |
| Barter Island LRRS Airport                                               |
| Wainwright Air Station                                                   |
| Cape Lisburne LRRS Airport                                               |
| Point Lay LRRS Airport                                                   |
| Hilo International Airport                                               |
| Orlando Executive Airport                                                |
| Bettles Airport                                                          |
| Clear Airport                                                            |
| Indian Mountain LRRS Airport                                             |
| Fort Yukon Airport                                                       |
| Sparrevohn LRRS Airport                                                  |
| Bryant Army Heliport                                                     |
| Tatalina LRRS Airport                                                    |
| Cape Romanzof LRRS Airport                                               |
| Laurence G Hanscom Field                                                 |
| St Paul Island Airport                                                   |
| Cape Newenham LRRS Airport                                               |
| St George Airport                                                        |
| Iliamna Airport                                                          |
| Platinum Airport                                                         |
| Big Mountain Airport                                                     |
| Oscoda Wurtsmith Airport                                                 |
| Marina Municipal Airport                                                 |
| Sacramento Mather Airport                                                |
| Bicycle Lake Army Air Field                                              |
| Twentynine Palms (Self) Airport                                          |
| Fort Smith Regional Airport                                              |
| Merrill Field                                                            |
| Grants-Milan Municipal Airport                                           |
| Ponca City Regional Airport                                              |
| Hunter Army Air Field                                                    |
| Grand Forks International Airport                                        |
| Pine Bluff Regional Airport Grider Field                                 |
| Whiting Field Naval Air Station - North                                  |
| Hana Airport                                                             |
| Ernest A. Love Field                                                     |
| Trenton Mercer Airport                                                   |
| General Edward Lawrence Logan International Airport                      |
| Travis Air Force Base                                                    |
| Griffiss International Airport                                           |
| Wendover Airport                                                         |
| Mobile Downtown Airport                                                  |
| Metropolitan Oakland International Airport                               |
| Eppley Airfield                                                          |
| Port Angeles Cgas Airport                                                |
| Kahului Airport                                                          |
| Wichita Eisenhower National Airport                                      |
| Kansas City International Airport                                        |
| Dane County Regional Truax Field                                         |
| Dillingham Airport                                                       |
| Boone County Airport                                                     |
| Phoenix Sky Harbor International Airport                                 |
| Bangor International Airport                                             |
| Fort Lauderdale Executive Airport                                        |
| East Texas Regional Airport                                              |
| Anderson Regional Airport                                                |
| Spokane International Airport                                            |
| North Perry Airport                                                      |
| San Francisco International Airport                                      |
| Cut Bank International Airport                                           |
| Acadiana Regional Airport                                                |
| Gainesville Regional Airport                                             |
| Memphis International Airport                                            |
| Bisbee Douglas International Airport                                     |
| Allen Army Airfield                                                      |
| TSTC Waco Airport                                                        |
| Annette Island Airport                                                   |
| Caribou Municipal Airport                                                |
| Little Rock Air Force Base                                               |
| Redstone Army Air Field                                                  |
| Pope Field                                                               |
| Dalhart Municipal Airport                                                |
| DLF Airport                                                              |
| Los Angeles International Airport                                        |
| Anniston Regional Airport                                                |
| Cleveland Hopkins International Airport                                  |
| Dover Air Force Base                                                     |
| Cincinnati Northern Kentucky International Airport                       |
| Tipton Airport                                                           |
| China Lake Naws (Armitage Field) Airport                                 |
| Huron Regional Airport                                                   |
| Juneau International Airport                                             |
| Lafayette Regional Airport                                               |
| Newark Liberty International Airport                                     |
| Boise Air Terminal/Gowen Field                                           |
| Creech Air Force Base                                                    |
| Garden City Regional Airport                                             |
| Minot International Airport                                              |
| Wheeler Army Airfield                                                    |
| Maxwell Air Force Base                                                   |
| Robinson Army Air Field                                                  |
| Dallas Love Field                                                        |
| Butts AAF (Fort Carson) Air Field                                        |
| Helena Regional Airport                                                  |
| Miramar Marine Corps Air Station - Mitscher Field                        |
| Luke Air Force Base                                                      |
| Hurlburt Field                                                           |
| Jack Northrop Field Hawthorne Municipal Airport                          |
| Houlton International Airport                                            |
| Vance Air Force Base                                                     |
| Point Mugu Naval Air Station (Naval Base Ventura Co)                     |
| Edwards Air Force Base                                                   |
| Lake Charles Regional Airport                                            |
| Ellison Onizuka Kona International At Keahole Airport                    |
| Myrtle Beach International Airport                                       |
| Lemoore Naval Air Station (Reeves Field) Airport                         |
| Nantucket Memorial Airport                                               |
| Felker Army Air Field                                                    |
| Campbell AAF (Fort Campbell) Air Field                                   |
| Ronald Reagan Washington National Airport                                |
| Patuxent River Naval Air Station (Trapnell Field)                        |
| Palacios Municipal Airport                                               |
| Arkansas International Airport                                           |
| Atlantic City International Airport                                      |
| Tinker Air Force Base                                                    |
| Elizabeth City Regional Airport & Coast Guard Air Station                |
| Pueblo Memorial Airport                                                  |
| Northern Maine Regional Airport at Presque Isle                          |
| Gray Army Air Field                                                      |
| Kodiak Airport                                                           |
| Upolu Airport                                                            |
| Fort Lauderdale Hollywood International Airport                          |
| Muskogee-Davis Regional Airport                                          |
| Falls International Airport                                              |
| Salt Lake City International Airport                                     |
| Childress Municipal Airport                                              |
| Keesler Air Force Base                                                   |
| Lawson Army Air Field (Fort Benning)                                     |
| Kingsville Naval Air Station                                             |
| Marshall Army Air Field                                                  |
| Harrisburg International Airport                                         |
| Lincoln Airport                                                          |
| Capital City Airport                                                     |
| Waimea Kohala Airport                                                    |
| Massena International Richards Field                                     |
| Hickory Regional Airport                                                 |
| Albert Whitted Airport                                                   |
| Page Field                                                               |
| George Bush Intercontinental Houston Airport                             |
| Millinocket Municipal Airport                                            |
| Joint Base Andrews                                                       |
| Smith Reynolds Airport                                                   |
| Southern California Logistics Airport                                    |
| Bob Sikes Airport                                                        |
| Wheeler Sack Army Air Field                                              |
| St Clair County International Airport                                    |
| Meadows Field                                                            |
| El Paso International Airport                                            |
| Valley International Airport                                             |
| Columbia Metropolitan Airport                                            |
| Davis Monthan Air Force Base                                             |
| Pensacola Naval Air Station/Forrest Sherman Field                        |
| Pensacola Regional Airport                                               |
| Grand Forks Air Force Base                                               |
| William P Hobby Airport                                                  |
| Buckley Air Force Base                                                   |
| Northway Airport                                                         |
| Warren Bud Woods Palmer Municipal Airport                                |
| Pittsburgh International Airport                                         |
| Wiley Post Will Rogers Memorial Airport                                  |
| Ellington Airport                                                        |
| Whidbey Island Naval Air Station (Ault Field)                            |
| Alice International Airport                                              |
| Moody Air Force Base                                                     |
| Miami International Airport                                              |
| Seattle Tacoma International Airport                                     |
| Lovell Field                                                             |
| Igor I Sikorsky Memorial Airport                                         |
| Jackson-Medgar Wiley Evers International Airport                         |
| Scholes International At Galveston Airport                               |
| Long Beach /Daugherty Field/ Airport                                     |
| Dillingham Airfield                                                      |
| Williamsport Regional Airport                                            |
| Indianapolis International Airport                                       |
| Whiteman Air Force Base                                                  |
| Akron Fulton International Airport                                       |
| GreenwoodLeflore Airport                                                 |
| Westchester County Airport                                               |
| Francis S Gabreski Airport                                               |
| Jonesboro Municipal Airport                                              |
| Tonopah Test Range Airport                                               |
| Palm Beach County Park Airport                                           |
| North Island Naval Air Station-Halsey Field                              |
| Biggs Army Air Field (Fort Bliss)                                        |
| Yuma MCAS/Yuma International Airport                                     |
| Cavern City Air Terminal                                                 |
| Duluth International Airport                                             |
| Bethel Airport                                                           |
| Bowman Field                                                             |
| Sierra Vista Municipal Libby Army Air Field                              |
| Lihue Airport                                                            |
| Terre Haute Regional Airport Hulman Field                                |
| Havre City County Airport                                                |
| Grant County International Airport                                       |
| Edward F Knapp State Airport                                             |
| San Nicolas Island Nolf Airport                                          |
| Richmond International Airport                                           |
| Shreveport Regional Airport                                              |
| Merle K (Mudhole) Smith Airport                                          |
| Norfolk International Airport                                            |
| Southeast Texas Regional Airport                                         |
| Savannah Hilton Head International Airport                               |
| Hill Air Force Base                                                      |
| Nome Airport                                                             |
| Scappoose Industrial Airpark                                             |
| St Petersburg Clearwater International Airport                           |
| Menominee Regional Airport                                               |
| Conroe-North Houston Regional Airport                                    |
| Deadhorse Airport                                                        |
| San Antonio International Airport                                        |
| Greater Rochester International Airport                                  |
| Patrick Air Force Base                                                   |
| Teterboro Airport                                                        |
| Ellsworth Air Force Base                                                 |
| Raleigh Durham International Airport                                     |
| James M Cox Dayton International Airport                                 |
| Kenai Municipal Airport                                                  |
| Mc Alester Regional Airport                                              |
| Niagara Falls International Airport                                      |
| Coulter Field                                                            |
| Wright AAF (Fort Stewart)/Midcoast Regional Airport                      |
| Newport News Williamsburg International Airport                          |
| Esler Regional Airport                                                   |
| Altus Air Force Base                                                     |
| Tucson International Airport                                             |
| Minot Air Force Base                                                     |
| Beale Air Force Base                                                     |
| Greater Kankakee Airport                                                 |
| Seymour Johnson Air Force Base                                           |
| Theodore Francis Green State Airport                                     |
| Salisbury Ocean City Wicomico Regional Airport                           |
| Rancho Murieta Airport                                                   |
| Bob Hope Airport                                                         |
| Detroit Metropolitan Wayne County Airport                                |
| Tampa International Airport                                              |
| Pembina Municipal Airport                                                |
| Polk Army Air Field                                                      |
| Eielson Air Force Base                                                   |
| Range Regional Airport                                                   |
| Angelina County Airport                                                  |
| Midland International Airport                                            |
| Austin Straubel International Airport                                    |
| Ardmore Municipal Airport                                                |
| Mc Guire Air Force Base                                                  |
| Cherry Point MCAS /Cunningham Field/                                     |
| Emanuel County Airport                                                   |
| Augusta Regional At Bush Field                                           |
| Sloulin Field International Airport                                      |
| Bill & Hillary Clinton National Airport/Adams Field                      |
| Stewart International Airport                                            |
| Baudette International Airport                                           |
| Sacramento Executive Airport                                             |
| Homer Airport                                                            |
| Waynesville-St. Robert Regional Forney field                             |
| Dobbins Air Reserve Base                                                 |
| Fairchild Air Force Base                                                 |
| Roscommon County - Blodgett Memorial Airport                             |
| Tyndall Air Force Base                                                   |
| Dallas Fort Worth International Airport                                  |
| Melbourne International Airport                                          |
| McChord Air Force Base                                                   |
| Austin Bergstrom International Airport                                   |
| Rickenbacker International Airport                                       |
| Sawyer International Airport                                             |
| McGhee Tyson Airport                                                     |
| Hood Army Air Field                                                      |
| St Louis Lambert International Airport                                   |
| Millville Municipal Airport                                              |
| Sheppard Air Force Base-Wichita Falls Municipal Airport                  |
| Cincinnati Municipal Airport Lunken Field                                |
| Hartsfield Jackson Atlanta International Airport                         |
| Castle Airport                                                           |
| Mc Clellan Airfield                                                      |
| Gerald R. Ford International Airport                                     |
| Winkler County Airport                                                   |
| Fresno Yosemite International Airport                                    |
| Vero Beach Regional Airport                                              |
| Imperial County Airport                                                  |
| Nashville International Airport                                          |
| Laredo International Airport                                             |
| Elmendorf Air Force Base                                                 |
| Ralph Wien Memorial Airport                                              |
| Altoona Blair County Airport                                             |
| Dyess Air Force Base                                                     |
| South Arkansas Regional At Goodwin Field                                 |
| La Guardia Airport                                                       |
| Tallahassee Regional Airport                                             |
| Dupage Airport                                                           |
| Waco Regional Airport                                                    |
| Augusta State Airport                                                    |
| Hillsboro Municipal Airport                                              |
| Jacksonville Naval Air Station (Towers Field)                            |
| McKellar-Sipes Regional Airport                                          |
| Molokai Airport                                                          |
| Godman Army Air Field                                                    |
| New River MCAS /H/ /Mccutcheon Fld/ Airport                              |
| San Angelo Regional Mathis Field                                         |
| Calexico International Airport                                           |
| Chico Municipal Airport                                                  |
| Burlington International Airport                                         |
| Jacksonville International Airport                                       |
| Durango La Plata County Airport                                          |
| Washington Dulles International Airport                                  |
| Easterwood Field                                                         |
| Felts Field                                                              |
| General Mitchell International Airport                                   |
| Abilene Regional Airport                                                 |
| Columbia Regional Airport                                                |
| Portland International Airport                                           |
| Dade Collier Training and Transition Airport                             |
| Palm Beach International Airport                                         |
| Fort Worth Meacham International Airport                                 |
| Ogdensburg International Airport                                         |
| Cape Cod Coast Guard Air Station                                         |
| Boeing Field King County International Airport                           |
| Lackland Air Force Base                                                  |
| Daniel K Inouye International Airport                                    |
| Des Moines International Airport                                         |
| Coastal Carolina Regional Airport                                        |
| San Diego International Airport                                          |
| Monroe Regional Airport                                                  |
| Shaw Air Force Base                                                      |
| Ontario International Airport                                            |
| Majors Airport                                                           |
| Roswell International Air Center Airport                                 |
| Coleman A. Young Municipal Airport                                       |
| Brownsville South Padre Island International Airport                     |
| Dothan Regional Airport                                                  |
| Cape May County Airport                                                  |
| Fallon Naval Air Station                                                 |
| Selfridge Air National Guard Base Airport                                |
| Four Corners Regional Airport                                            |
| Corpus Christi International Airport                                     |
| Syracuse Hancock International Airport                                   |
| Naval Air Station Key West/Boca Chica Field                              |
| Chicago Midway International Airport                                     |
| Norman Y. Mineta San Jose International Airport                          |
| Lea County Regional Airport                                              |
| Northeast Philadelphia Airport                                           |
| Denver International Airport                                             |
| Philadelphia International Airport                                       |
| Sioux Gateway Col. Bud Day Field                                         |
| Middle Georgia Regional Airport                                          |
| Truth Or Consequences Municipal Airport                                  |
| Palmdale Regional/USAF Plant 42 Airport                                  |
| Randolph Air Force Base                                                  |
| El Centro NAF Airport (Vraciu Field)                                     |
| John Glenn Columbus International Airport                                |
| Drake Field                                                              |
| Henry Post Army Air Field (Fort Sill)                                    |
| Princeton Municipal Airport                                              |
| Wright-Patterson Air Force Base                                          |
| Edward G. Pitka Sr Airport                                               |
| Chandler Municipal Airport                                               |
| Mineral Wells Airport                                                    |
| Mc Connell Air Force Base                                                |
| New Orleans NAS JRB/Alvin Callender Field                                |
| Beaufort County Airport                                                  |
| Texarkana Regional Webb Field                                            |
| Plattsburgh International Airport                                        |
| Phillips Army Air Field                                                  |
| Tucumcari Municipal Airport                                              |
| Ted Stevens Anchorage International Airport                              |
| Robert Gray  Army Air Field Airport                                      |
| Black Rock Airport                                                       |
| Bellingham International Airport                                         |
| Millington-Memphis Airport                                               |
| Elkins-Randolph Co-Jennings Randolph Field                               |
| Hartford Brainard Airport                                                |
| North Central State Airport                                              |
| Mobile Regional Airport                                                  |
| Moffett Federal Airfield                                                 |
| Santa Fe Municipal Airport                                               |
| Barking Sands Airport                                                    |
| Beauregard Regional Airport                                              |
| Bradshaw Army Airfield                                                   |
| Nogales International Airport                                            |
| Mac Dill Air Force Base                                                  |
| Scott AFB/Midamerica Airport                                             |
| Opa-locka Executive Airport                                              |
| Del Rio International Airport                                            |
| Southwest Florida International Airport                                  |
| King Salmon Airport                                                      |
| Muir Army Air Field (Fort Indiantown Gap) Airport                        |
| Kapalua Airport                                                          |
| John F Kennedy International Airport                                     |
| Homestead ARB Airport                                                    |
| Riverside Municipal Airport                                              |
| Sherman Army Air Field                                                   |
| Wallops Flight Facility Airport                                          |
| Holloman Air Force Base                                                  |
| Willow Grove Naval Air Station/Joint Reserve Base                        |
| Cheyenne Regional Jerry Olson Field                                      |
| Stockton Metropolitan Airport                                            |
| Charleston Air Force Base-International Airport                          |
| Reno Tahoe International Airport                                         |
| Ketchikan International Airport                                          |
| Willow Run Airport                                                       |
| Vandenberg Air Force Base                                                |
| Birmingham-Shuttlesworth International Airport                           |
| Lakehurst Maxfield Field Airport                                         |
| Eareckson Air Station                                                    |
| Nellis Air Force Base                                                    |
| March ARB Airport                                                        |
| Modesto City Co-Harry Sham Field                                         |
| Sacramento International Airport                                         |
| Waukegan National Airport                                                |
| City of Colorado Springs Municipal Airport                               |
| Buffalo Niagara International Airport                                    |
| Griffing Sandusky Airport                                                |
| Snohomish County (Paine Field) Airport                                   |
| Mountain Home Air Force Base                                             |
| Cedar City Regional Airport                                              |
| Bradley International Airport                                            |
| Mc Allen Miller International Airport                                    |
| Norfolk Naval Station (Chambers Field)                                   |
| Westover ARB/Metropolitan Airport                                        |
| Lubbock Preston Smith International Airport                              |
| Chicago O'Hare International Airport                                     |
| Boca Raton Airport                                                       |
| Fairbanks International Airport                                          |
| Quantico MCAF /Turner field                                              |
| Cannon Air Force Base                                                    |
| Kaneohe Bay MCAS (Marion E. Carl Field) Airport                          |
| Offutt Air Force Base                                                    |
| Gulkana Airport                                                          |
| Watertown International Airport                                          |
| Palm Springs International Airport                                       |
| Rick Husband Amarillo International Airport                              |
| Fort Dodge Regional Airport                                              |
| Barksdale Air Force Base                                                 |
| Topeka Regional Airport - Forbes Field                                   |
| Cotulla-La Salle County Airport                                          |
| Wilmington International Airport                                         |
| Baton Rouge Metropolitan Airport                                         |
| Meridian Naval Air Station                                               |
| Tyler Pounds Regional Airport                                            |
| Baltimore/Washington International Thurgood Marshall Airport             |
| Hobart Regional Airport                                                  |
| Lanai Airport                                                            |
| Alexandria International Airport                                         |
| Condron Army Air Field                                                   |
| Cold Bay Airport                                                         |
| Tulsa International Airport                                              |
| Sitka Rocky Gutierrez Airport                                            |
| Long Island Mac Arthur Airport                                           |
| Minneapolis-St Paul International/Wold-Chamberlain Airport               |
| New Castle Airport                                                       |
| Unalaska Airport                                                         |
| Louis Armstrong New Orleans International Airport                        |
| Portland International Jetport Airport                                   |
| Will Rogers World Airport                                                |
| Albany International Airport                                             |
| Valdez Pioneer Field                                                     |
| Langley Air Force Base                                                   |
| John Wayne Airport-Orange County Airport                                 |
| Columbus Air Force Base                                                  |
| Kendall-Tamiami Executive Airport                                        |
| Oceana Naval Air Station                                                 |
| Grissom Air Reserve Base                                                 |
| Casper-Natrona County International Airport                              |
| Destin-Ft Walton Beach Airport                                           |
| Craig Field                                                              |
| Key West International Airport                                           |
| Charlotte Douglas International Airport                                  |
| McCarran International Airport                                           |
| Orlando International Airport                                            |
| Florence Regional Airport                                                |
| Great Falls International Airport                                        |
| Youngstown Warren Regional Airport                                       |
| Ladd AAF Airfield                                                        |
| Mc Minnville Municipal Airport                                           |
| Robins Air Force Base                                                    |
| Suvarnabhumi Airport                                                     |
| Naha Airport                                                             |
| Andi Jemma Airport                                                       |
| Soroako Airport                                                          |
| Pongtiku Airport                                                         |
| Wolter Monginsidi Airport                                                |
| Maimun Saleh Airport                                                     |
| Cibeureum Airport                                                        |
| Iswahyudi Airport                                                        |
| Abdul Rachman Saleh Airport                                              |
| Budiarto Airport                                                         |
| Husein Sastranegara International Airport                                |
| Penggung Airport                                                         |
| Adi Sutjipto International Airport                                       |
| Tunggul Wulung Airport                                                   |
| Pondok Cabe Air Base                                                     |
| Achmad Yani Airport                                                      |
| Hang Nadim International Airport                                         |
| Buluh Tumbang (H A S Hanandjoeddin) Airport                              |
| Pangkal Pinang (Depati Amir) Airport                                     |
| Raja Haji Fisabilillah International Airport                             |
| Dabo Airport                                                             |
| Syamsudin Noor Airport                                                   |
| Batu Licin Airport                                                       |
| Iskandar Airport                                                         |
| Tjilik Riwut Airport                                                     |
| Maumere(Wai Oti) Airport                                                 |
| Ende (H Hasan Aroeboesman) Airport                                       |
| Frans Sales Lega Airport                                                 |
| El Tari Airport                                                          |
| Komodo Airport                                                           |
| Sultan Aji Muhamad Sulaiman Airport                                      |
| Juwata Airport                                                           |
| Temindung Airport                                                        |
| Tanjung Santan Airport                                                   |
| Selaparang Airport                                                       |
| Muhammad Salahuddin Airport                                              |
| Umbu Mehang Kunda Airport                                                |
| Juanda International Airport                                             |
| Adi Sumarmo Wiryokusumo Airport                                          |
| Incheon International Airport                                            |
| Chiang Mai International Airport                                         |
| Chiang Rai International Airport                                         |
| Nakhon Si Thammarat Airport                                              |
| Nakhon Ratchasima Airport                                                |
| Nakhon Phanom Airport                                                    |
| Ubon Ratchathani Airport                                                 |
| Khon Kaen Airport                                                        |
| Sukhothai Airport                                                        |
| Ngurah Rai (Bali) International Airport                                  |
| Eleftherios Venizelos International Airport                              |
| Chubu Centrair International Airport                                     |
| Kobe Airport                                                             |
| Pullman Moscow Regional Airport                                          |
| Lewiston Nez Perce County Airport                                        |
| Elmira Corning Regional Airport                                          |
| Ithaca Tompkins Regional Airport                                         |
| Monterey Peninsula Airport                                               |
| Santa Barbara Municipal Airport                                          |
| Daytona Beach International Airport                                      |
| Liepja International Airport                                             |
| Riga International Airport                                               |
| iauliai International Airport                                            |
| Barysiai Airport                                                         |
| Kaunas International Airport                                             |
| S. Darius and S. Girnas Airfield                                         |
| Palanga International Airport                                            |
| Vilnius International Airport                                            |
| Panevys Air Base                                                         |
| Erebuni Airport                                                          |
| Stepanavan Airport                                                       |
| Zvartnots International Airport                                          |
| Gyumri Shirak Airport                                                    |
| Assab International Airport                                              |
| Asmara International Airport                                             |
| Massawa International Airport                                            |
| Yasser Arafat International Airport                                      |
| Batumi International Airport                                             |
| Kopitnari Airport                                                        |
| Tbilisi International Airport                                            |
| Mukalla International Airport                                            |
| Ta'izz International Airport                                             |
| Hodeidah International Airport                                           |
| Aden International Airport                                               |
| Ataq Airport                                                             |
| Al Ghaidah International Airport                                         |
| Sana'a International Airport                                             |
| Beihan Airport                                                           |
| Socotra International Airport                                            |
| Al Badie Airport                                                         |
| Memmingen Allgau Airport                                                 |
| Nevehir Kapadokya Airport                                                |
| Ministro Pistarini International Airport                                 |
| Erbil International Airport                                              |
| Emerald Airport                                                          |
| Athen Helenikon Airport                                                  |
| Kansai International Airport                                             |
| Downtown-Manhattan/Wall St Heliport                                      |
| Tagbilaran Airport                                                       |
| Ilulissat Airport                                                        |
| Qasigiannguit Heliport                                                   |
| Aasiaat Airport                                                          |
| Palma De Mallorca Airport                                                |
| Darwin International Airport                                             |
| Surat Thani Airport                                                      |
| Talkeetna Airport                                                        |
| Xewkija Heliport                                                         |
| Tweed New Haven Airport                                                  |
| Asheville Regional Airport                                               |
| Piedmont Triad International Airport                                     |
| Joe Foss Field Airport                                                   |
| Ayers Rock Connellan Airport                                             |
| Manchester-Boston Regional Airport                                       |
| Naples Municipal Airport                                                 |
| LTS Pulau Redang Airport                                                 |
| Louisville International Standiford Field                                |
| Charlottesville Albemarle Airport                                        |
| RoanokeBlacksburg Regional Airport                                       |
| Blue Grass Airport                                                       |
| Evansville Regional Airport                                              |
| Albuquerque International Sunport                                        |
| Gallatin Field                                                           |
| Billings Logan International Airport                                     |
| Bert Mooney Airport                                                      |
| Cherry Capital Airport                                                   |
| Mundo Maya International Airport                                         |
| Hancock County-Bar Harbor Airport                                        |
| Knox County Regional Airport                                             |
| Jackson Hole Airport                                                     |
| Chicago Rockford International Airport                                   |
| Domodedovo International Airport                                         |
| Sanya Phoenix International Airport                                      |
| Milford Sound Airport                                                    |
| Lijiang Airport                                                          |
| Greenville Spartanburg International Airport                             |
| Central Illinois Regional Airport at Bloomington-Normal                  |
| Gulfport Biloxi International Airport                                    |
| Kalamazoo Battle Creek International Airport                             |
| Toledo Express Airport                                                   |
| Fort Wayne International Airport                                         |
| Decatur Airport                                                          |
| The Eastern Iowa Airport                                                 |
| La Crosse Municipal Airport                                              |
| Central Wisconsin Airport                                                |
| General Wayne A. Downing Peoria International Airport                    |
| Appleton International Airport                                           |
| Rochester International Airport                                          |
| University of Illinois Willard Airport                                   |
| Manhattan Regional Airport                                               |
| Kingscote Airport                                                        |
| Hervey Bay Airport                                                       |
| Dali Airport                                                             |
| Mulu Airport                                                             |
| Sharm El Sheikh International Airport                                    |
| Venango Regional Airport                                                 |
| Jomo Kenyatta International Airport                                      |
| Seronera Airport                                                         |
| El Calafate Airport                                                      |
| Armidale Airport                                                         |
| Grand Junction Regional Airport                                          |
| St George Municipal Airport                                              |
| David Wayne Hooks Memorial Airport                                       |
| Port O'Connor Private Heliport                                           |
| Sarasota Bradenton International Airport                                 |
| L.F. Wade International International Airport                            |
| Van Nuys Airport                                                         |
| Quad City International Airport                                          |
| Panama City-Bay Co International Airport                                 |
| Honiara International Airport                                            |
| Faa'a International Airport                                              |
| Nauru International Airport                                              |
| Funafuti International Airport                                           |
| Tolmachevo Airport                                                       |
| Sams Airport                                                             |
| Xieng Khouang Airport                                                    |
| Bismarck Municipal Airport                                               |
| Telluride Regional Airport                                               |
| Yinchuan Airport                                                         |
| Mae Hong Son Airport                                                     |
| Rapid City Regional Airport                                              |
| Mc Clellan-Palomar Airport                                               |
| Bishop International Airport                                             |
| Francisco Bangoy International Airport                                   |
| Madeira Airport                                                          |
| Maestro Wilson Fonseca Airport                                           |
| Sihanoukville International Airport                                      |
| Ekati Airport                                                            |
| Hawke's Bay Airport                                                      |
| Levuka Airfield                                                          |
| Lhasa Gonggar Airport                                                    |
| Redding Municipal Airport                                                |
| Mahlon Sweet Field                                                       |
| Idaho Falls Regional Airport                                             |
| Rogue Valley International Medford Airport                               |
| Kaikoura Airport                                                         |
| Roberts Field                                                            |
| Picton Aerodrome                                                         |
| Hosea Kutako International Airport                                       |
| Victoria Harbour Seaplane Base                                           |
| Coal Harbour Seaplane Base                                               |
| Yaoqiang Airport                                                         |
| Changzhou Benniu Airport                                                 |
| Yibin Caiba Airport                                                      |
| Roshchino International Airport                                          |
| Akron Canton Regional Airport                                            |
| Huntsville International Carl T Jones Field                              |
| Mid Ohio Valley Regional Airport                                         |
| Montgomery Regional (Dannelly Field) Airport                             |
| Tri-Cities Regional TN/VA Airport                                        |
| Barkley Regional Airport                                                 |
| Djibouti-Ambouli Airport                                                 |
| Haikou Meilan International Airport                                      |
| Mafia Island Airport                                                     |
| Page Municipal Airport                                                   |
| Utila Airport                                                            |
| Glacier Park International Airport                                       |
| MBS International Airport                                                |
| Greater Binghamton/Edwin A Link field                                    |
| Baghdad International Airport                                            |
| Nan Airport                                                              |
| Roi Et Airport                                                           |
| Buri Ram Airport                                                         |
| Trat Airport                                                             |
| Blythe Airport                                                           |
| Al Asad Air Base                                                         |
| Al Taqaddum Air Base                                                     |
| Joint Base Balad                                                         |
| Diosdado Macapagal International Airport                                 |
| Sandakan Airport                                                         |
| Luang Namtha Airport                                                     |
| Oudomsay Airport                                                         |
| Taoxian Airport                                                          |
| Dongying Shengli Airport                                                 |
| John A. Osborne Airport                                                  |
| Petersburg James A Johnson Airport                                       |
| Luoyang Airport                                                          |
| Xuzhou Guanyin Airport                                                   |
| Magway Airport                                                           |
| Kanti Airport                                                            |
| Lien Khuong Airport                                                      |
| Dong Hoi Airport                                                         |
| Rach Gia Airport                                                         |
| C Mau Airport                                                            |
| Chu Lai International Airport                                            |
| Dong Tac Airport                                                         |
| Mae Hong Son Airport                                                     |
| Bol Airport                                                              |
| Yaound Nsimalen International Airport                                    |
| Conakry International Airport                                            |
| Aachen-Merzbrck Airport                                                  |
| Karlsruhe Baden-Baden Airport                                            |
| Orlando Sanford International Airport                                    |
| John Murtha Johnstown Cambria County Airport                             |
| Lukla Airport                                                            |
| Bhojpur Airport                                                          |
| Lamidanda Airport                                                        |
| Jomsom Airport                                                           |
| Manang Airport                                                           |
| Phaplu Airport                                                           |
| Rumjatar Airport                                                         |
| Tulsipur Airport                                                         |
| Rukum Chaurjahari Airport                                                |
| Jumla Airport                                                            |
| Taplejung Airport                                                        |
| Tumling Tar Airport                                                      |
| Surkhet Airport                                                          |
| Simikot Airport                                                          |
| Dolpa Airport                                                            |
| Bajhang Airport                                                          |
| Dhangarhi Airport                                                        |
| Muan International Airport                                               |
| Astypalaia Airport                                                       |
| Ikaria Airport                                                           |
| Kalymnos Airport                                                         |
| Milos Airport                                                            |
| Naxos Airport                                                            |
| Paros National Airport                                                   |
| Kastelorizo Airport                                                      |
| Marsa Alam International Airport                                         |
| Weeze Airport                                                            |
| Francisco B. Reyes Airport                                               |
| Bancasi Airport                                                          |
| Dipolog Airport                                                          |
| Laoag International Airport                                              |
| Legazpi City International Airport                                       |
| Labo Airport                                                             |
| Mactan Cebu International Airport                                        |
| Norden-Norddeich Airport                                                 |
| Juist Airport                                                            |
| Porto Seguro Airport                                                     |
| Iguatu Airport                                                           |
| Brigadeiro Lysias Rodrigues Airport                                      |
| Nelson Ribeiro Guimares Airport                                          |
| Missoula International Airport                                           |
| Blackall Airport                                                         |
| Bundaberg Airport                                                        |
| Grand Canyon National Park Airport                                       |
| Sugar Land Regional Airport                                              |
| Hayman Island Heliport                                                   |
| Centennial Airport                                                       |
| Clovis Municipal Airport                                                 |
| Fort Stockton Pecos County Airport                                       |
| Las Vegas Municipal Airport                                              |
| West Houston Airport                                                     |
| La Junta Municipal Airport                                               |
| Las Cruces International Airport                                         |
| Stephens County Airport                                                  |
| Draughon Miller Central Texas Regional Airport                           |
| Ozona Municipal Airport                                                  |
| Kaadedhdhoo Airport                                                      |
| Aklavik/Freddie Carmichael Airport                                       |
| Dline Airport                                                            |
| Tulita Airport                                                           |
| Fort Good Hope Airport                                                   |
| Tanna Airport                                                            |
| Paulatuk (Nora Aliqatchialuk Ruben) Airport                              |
| El Trompillo Airport                                                     |
| Juancho E. Yrausquin Airport                                             |
| Eagle County Regional Airport                                            |
| Stokmarknes Skagen Airport                                               |
| Cuyahoga County Airport                                                  |
| Mansfield Lahm Regional Airport                                          |
| Columbus Metropolitan Airport                                            |
| Lawton Fort Sill Regional Airport                                        |
| Northern Colorado Regional Airport                                       |
| Flagstaff Pulliam Airport                                                |
| Lake Tahoe Airport                                                       |
| Joslin Field Magic Valley Regional Airport                               |
| Martha's Vineyard Airport                                                |
| Concord Municipal Airport                                                |
| Groton New London Airport                                                |
| St Cloud Regional Airport                                                |
| Qinhuangdao Beidaihe Airport                                             |
| Golden Triangle Regional Airport                                         |
| Nizhny Novgorod Strigino International Airport                           |
| Bowerman Airport                                                         |
| Erie International Tom Ridge Field                                       |
| Barnstable Municipal Boardman Polando Field                              |
| San Pedro Airport                                                        |
| Sedona Airport                                                           |
| Morgantown Municipal Walter L. Bill Hart Field                           |
| Yeager Airport                                                           |
| Wilkes Barre Scranton International Airport                              |
| Bemidji Regional Airport                                                 |
| Thangool Airport                                                         |
| Fagali'i Airport                                                         |
| Ballina Byron Gateway Airport                                            |
| Hector International Airport                                             |
| Charles B. Wheeler Downtown Airport                                      |
| Ratanakiri Airport                                                       |
| Gillette Campbell County Airport                                         |
| Bogashevo Airport                                                        |
| El Toro Marine Corps Air Station                                         |
| Phetchabun Airport                                                       |
| Chumphon Airport                                                         |
| Jiuzhai Huanglong Airport                                                |
| Jieyang Chaoshan International Airport                                   |
| Enghien Moisselles Airfield                                              |
| Cheddi Jagan International Airport                                       |
| Guarani International Airport                                            |
| Eugene F. Correira International Airport                                 |
| Kaieteur International Airport                                           |
| Dunhuang Airport                                                         |
| Ancona Falconara Airport                                                 |
| Chamonate Airport                                                        |
| Taba International Airport                                               |
| Edward Bodden Airfield                                                   |
| Milas Bodrum International Airport                                       |
| Tabarka 7 Novembre Airport                                               |
| Sabiha Gken International Airport                                        |
| University Park Airport                                                  |
| Broome International Airport                                             |
| Newcastle Airport                                                        |
| Bakki Airport                                                            |
| Klagenfurt Airport                                                       |
| Hammerfest Airport                                                       |
| Valan Airport                                                            |
| Mehamn Airport                                                           |
| Vads Airport                                                             |
| Imam Khomeini International Airport                                      |
| Mashhad International Airport                                            |
| Ust-Ilimsk Airport                                                       |
| Key Field                                                                |
| Abraham Lincoln Capital Airport                                          |
| Cortez Municipal Airport                                                 |
| Yampa Valley Airport                                                     |
| Gallup Municipal Airport                                                 |
| Liberal Mid-America Regional Airport                                     |
| Lamar Municipal Airport                                                  |
| Renner Field-Goodland Municipal Airport                                  |
| Yellowstone Regional Airport                                             |
| rsta-Volda Airport Hovden                                                |
| St. Mary's Airport                                                       |
| Springfield Branson National Airport                                     |
| Narvik Framnes Airport                                                   |
| Berlevg Airport                                                          |
| Oslo Fornebu Airport                                                     |
| Norilsk-Alykel Airport                                                   |
| Anapa Vityazevo Airport                                                  |
| Joplin Regional Airport                                                  |
| Lehigh Valley International Airport                                      |
| Northwest Arkansas Regional Airport                                      |
| Atyrau Airport                                                           |
| Kzyl-Orda Southwest Airport                                              |
| South Bend Regional Airport                                              |
| Bykovo Airport                                                           |
| Talagi Airport                                                           |
| Saratov Central Airport                                                  |
| Novy Urengoy Airport                                                     |
| Noyabrsk Airport                                                         |
| Aktau Airport                                                            |
| Ukhta Airport                                                            |
| Usinsk Airport                                                           |
| Pechora Airport                                                          |
| Naryan Mar Airport                                                       |
| Pskov Airport                                                            |
| Kogalym International Airport                                            |
| Yemelyanovo Airport                                                      |
| Sary-Arka Airport                                                        |
| Novosibirsk North Airport                                                |
| Uray Airport                                                             |
| Ivanovo South Airport                                                    |
| Longjia Airport                                                          |
| Niigata Airport                                                          |
| Johnston Atoll Airport                                                   |
| Smith Field                                                              |
| California Redwood Coast-Humboldt County Airport                         |
| Albert J Ellis Airport                                                   |
| Tuscaloosa Regional Airport                                              |
| Dubuque Regional Airport                                                 |
| Shun Tak Heliport                                                        |
| Uru Harbour Airport                                                      |
| Gwaunaru'u Airport                                                       |
| Ballalae Airport                                                         |
| Fera/Maringe Airport                                                     |
| Babanakira Airport                                                       |
| Ngorangora Airport                                                       |
| Santa Cruz/Graciosa Bay/Luova Airport                                    |
| Munda Airport                                                            |
| Nusatupe Airport                                                         |
| Mono Airport                                                             |
| Rennell/Tingoa Airport                                                   |
| Marau Airport                                                            |
| Suavanao Airport                                                         |
| Kaghau Airport                                                           |
| Ramata Airport                                                           |
| Buka Airport                                                             |
| Chimbu Airport                                                           |
| Daru Airport                                                             |
| Gurney Airport                                                           |
| Girua Airport                                                            |
| Kimbe Airport                                                            |
| Kiunga Airport                                                           |
| Kikori Airport                                                           |
| Kerema Airport                                                           |
| Kavieng Airport                                                          |
| Mendi Airport                                                            |
| Momote Airport                                                           |
| Moro Airport                                                             |
| Misima Island Airport                                                    |
| Tari Airport                                                             |
| Tabubil Airport                                                          |
| Tokua Airport                                                            |
| Vanimo Airport                                                           |
| Wapenamanda Airport                                                      |
| Alluitsup Paa Heliport                                                   |
| Neerlerit Inaat Airport                                                  |
| Paamiut Heliport                                                         |
| Qeqertarsuaq Heliport                                                    |
| Qaqortoq Heliport                                                        |
| Maniitsoq Airport                                                        |
| Nanortalik Heliport                                                      |
| Narsaq Heliport                                                          |
| Qaanaaq Airport                                                          |
| Sisimiut Airport                                                         |
| Upernavik Airport                                                        |
| Qaarsut Airport                                                          |
| Grmsey Airport                                                           |
| Thorshofn Airport                                                        |
| Vopnafjrur Airport                                                       |
| Whistler/Green Lake Water Aerodrome                                      |
| Anahim Lake Airport                                                      |
| Williams Harbour Airport                                                 |
| St. Lewis (Fox Harbour) Airport                                          |
| Port Hope Simpson Airport                                                |
| Rigolet Airport                                                          |
| Colville Lake Airport                                                    |
| What Airport                                                             |
| Summer Beaver Airport                                                    |
| Wapekeka Airport                                                         |
| Wunnumin Lake Airport                                                    |
| North Spirit Lake Airport                                                |
| Bearskin Lake Airport                                                    |
| Kingfisher Lake Airport                                                  |
| Ogoki Post Airport                                                       |
| Poplar Hill Airport                                                      |
| Chisasibi Airport                                                        |
| Tte--la-Baleine Airport                                                  |
| La Tabatire Airport                                                      |
| Cat Lake Airport                                                         |
| Fort Frances Municipal Airport                                           |
| Kasabonika Airport                                                       |
| Kangirsuk Airport                                                        |
| Attawapiskat Airport                                                     |
| Lac Du Bonnet Airport                                                    |
| Uranium City Airport                                                     |
| Lourdes de Blanc Sablon Airport                                          |
| Cartwright Airport                                                       |
| Chesterfield Inlet Airport                                               |
| Nain Airport                                                             |
| Fort Severn Airport                                                      |
| Fort Albany Airport                                                      |
| Fort Hope Airport                                                        |
| Makkovik Airport                                                         |
| Texada Gillies Bay Airport                                               |
| Gods Lake Narrows Airport                                                |
| Igloolik Airport                                                         |
| Kuujjuarapik Airport                                                     |
| Gillam Airport                                                           |
| Grise Fiord Airport                                                      |
| Quaqtaq Airport                                                          |
| Vancouver Harbour Water Aerodrome                                        |
| Nemiscau Airport                                                         |
| Hopedale Airport                                                         |
| Chevery Airport                                                          |
| Ivujivik Airport                                                         |
| Island Lake Airport                                                      |
| Akulivik Airport                                                         |
| Waskaganish Airport                                                      |
| Aupaluk Airport                                                          |
| Kimmirut Airport                                                         |
| Lansdowne House Airport                                                  |
| St Georges Airport                                                       |
| Kangiqsualujjuaq (Georges River) Airport                                 |
| Mary's Harbour Airport                                                   |
| Chapais Airport                                                          |
| Umiujaq Airport                                                          |
| Wemindji Airport                                                         |
| Norway House Airport                                                     |
| Points North Landing Airport                                             |
| Oxford House Airport                                                     |
| Inukjuak Airport                                                         |
| Pikangikum Airport                                                       |
| Peawanuck Airport                                                        |
| Powell River Airport                                                     |
| The Pas Airport                                                          |
| Nakina Airport                                                           |
| Rae Lakes Airport                                                        |
| Red Lake Airport                                                         |
| Stony Rapids Airport                                                     |
| Sanikiluaq Airport                                                       |
| St. Theresa Point Airport                                                |
| Big Trout Lake Airport                                                   |
| Deer Lake Airport                                                        |
| Webequie Airport                                                         |
| Whale Cove Airport                                                       |
| Salluit Airport                                                          |
| York Landing Airport                                                     |
| Ilford Airport                                                           |
| Bathurst Airport                                                         |
| Eastmain River Airport                                                   |
| Fond-Du-Lac Airport                                                      |
| Gods River Airport                                                       |
| Swan River Airport                                                       |
| Kashechewan Airport                                                      |
| Muskrat Dam Airport                                                      |
| Masset Airport                                                           |
| Sachigo Lake Airport                                                     |
| Round Lake (Weagamow Lake) Airport                                       |
| Sandy Lake Airport                                                       |
| Shamattawa Airport                                                       |
| Churchill Falls Airport                                                  |
| Wollaston Lake Airport                                                   |
| Batna Airport                                                            |
| Bchar Boudghene Ben Ali Lotfi Airport                                    |
| Bordj Badji Mokhtar Airport                                              |
| Guemar Airport                                                           |
| Kumasi Airport                                                           |
| Heringsdorf Airport                                                      |
| Heide-Bsum Airport                                                       |
| Helgoland-Dne Airport                                                    |
| Seinjoki Airport                                                         |
| Nottingham Airport                                                       |
| Robin Hood Doncaster Sheffield Airport                                   |
| Campbeltown Airport                                                      |
| Eday Airport                                                             |
| Fair Isle Airport                                                        |
| North Ronaldsay Airport                                                  |
| Papa Westray Airport                                                     |
| Stronsay Airport                                                         |
| Sanday Airport                                                           |
| Lerwick / Tingwall Airport                                               |
| Westray Airport                                                          |
| Land's End Airport                                                       |
| Penzance Heliport                                                        |
| Anglesey Airport                                                         |
| Barra Airport                                                            |
| Donegal Airport                                                          |
| Weston Airport                                                           |
| Sindal Airport                                                           |
| Leknes Airport                                                           |
| Namsos Hknesra Airport                                                   |
| Mo i Rana Airport Rssvoll                                                |
| Rrvik Airport Ryum                                                       |
| Rst Airport                                                              |
| Sandane Airport (Anda)                                                   |
| Sogndal Airport                                                          |
| Svolvr Helle Airport                                                     |
| Srkjosen Airport                                                         |
| Vard Airport Svartnes                                                    |
| Vry Heliport                                                             |
| Bydgoszcz Ignacy Jan Paderewski Airport                                  |
| d Wadysaw Reymont Airport                                                |
| re stersund Airport                                                      |
| Hagfors Airport                                                          |
| Karlstad Airport                                                         |
| Torsby Airport                                                           |
| ngelholm-Helsingborg Airport                                             |
| Storuman Airport                                                         |
| Hemavan Airport                                                          |
| Ventspils International Airport                                          |
| Rand Airport                                                             |
| Kruger Mpumalanga International Airport                                  |
| Malamala Airport                                                         |
| Mmabatho International Airport                                           |
| Ghanzi Airport                                                           |
| Orapa Airport                                                            |
| Shakawe Airport                                                          |
| Limpopo Valley Airport                                                   |
| Ngot Nzoungou Airport                                                    |
| Chipata Airport                                                          |
| Los Alamitos Army Air Field                                              |
| Iconi Airport                                                            |
| Antsalova Airport                                                        |
| Ankavandra Airport                                                       |
| Belo sur Tsiribihina Airport                                             |
| Maintirano Airport                                                       |
| Morafenobe Airport                                                       |
| Tambohorano Airport                                                      |
| Tsiroanomandidy Airport                                                  |
| Ambatondrazaka Airport                                                   |
| Port Berg Airport                                                        |
| Ambanja Airport                                                          |
| Soalala Airport                                                          |
| Mampikony Airport                                                        |
| Nasa Shuttle Landing Facility Airport                                    |
| Mandritsara Airport                                                      |
| Manja Airport                                                            |
| Catumbela Airport                                                        |
| Dundo Airport                                                            |
| Ngjiva Pereira Airport                                                   |
| Namibe Airport                                                           |
| Koulamoutou Mabimbi Airport                                              |
| Mouilla Ville Airport                                                    |
| Tchibanga Airport                                                        |
| Chimoio Airport                                                          |
| Sarh Airport                                                             |
| Club Makokola Airport                                                    |
| Luderitz Airport                                                         |
| Ondangwa Airport                                                         |
| Oranjemund Airport                                                       |
| Swakopmund Airport                                                       |
| Eros Airport                                                             |
| Boma Airport                                                             |
| Tshimpi Airport                                                          |
| Inongo Airport                                                           |
| Nioki Airport                                                            |
| Basango Mboliasa Airport                                                 |
| Basankusu Airport                                                        |
| Tshikapa Airport                                                         |
| Lodja Airport                                                            |
| Ilebo Airport                                                            |
| Outer Skerries Airport                                                   |
| La Gomera Airport                                                        |
| Sherbro International Airport                                            |
| Bo Airport                                                               |
| Kenema Airport                                                           |
| Osvaldo Vieira International Airport                                     |
| Smara Airport                                                            |
| Dakhla Airport                                                           |
| Mogador Airport                                                          |
| Hassan I Airport                                                         |
| Nador International Airport                                              |
| Praia International Airport                                              |
| So Filipe Airport                                                        |
| Baco Airport                                                             |
| Beica Airport                                                            |
| Combolcha Airport                                                        |
| Dembidollo Airport                                                       |
| Gode Airport                                                             |
| Gore Airport                                                             |
| Kabri Dehar Airport                                                      |
| Mizan Teferi Airport                                                     |
| Tippi Airport                                                            |
| Alula Airport                                                            |
| Bosaso Airport                                                           |
| Aden Adde International Airport                                          |
| Galcaio Airport                                                          |
| Burao Airport                                                            |
| El Arish International Airport                                           |
| Assiut International Airport                                             |
| Amboseli Airport                                                         |
| Lokichoggio Airport                                                      |
| Malindi Airport                                                          |
| Nanyuki Airport                                                          |
| Gardabya Airport                                                         |
| Gamal Abdel Nasser Airport                                               |
| Mitiga Airport                                                           |
| La Abraq Airport                                                         |
| Atbara Airport                                                           |
| Nyala Airport                                                            |
| Port Sudan New International Airport                                     |
| Bukoba Airport                                                           |
| Kigoma Airport                                                           |
| Lindi Airport                                                            |
| Musoma Airport                                                           |
| Shinyanga Airport                                                        |
| Tabora Airport                                                           |
| Arua Airport                                                             |
| Gulu Airport                                                             |
| Diu Airport                                                              |
| Aberdeen Regional Airport                                                |
| Southwest Georgia Regional Airport                                       |
| Athens Ben Epps Airport                                                  |
| Alamogordo White Sands Regional Airport                                  |
| Waterloo Regional Airport                                                |
| Walla Walla Regional Airport                                             |
| Alpena County Regional Airport                                           |
| Watertown Regional Airport                                               |
| Bradford Regional Airport                                                |
| Western Neb. Rgnl/William B. Heilig Airport                              |
| Raleigh County Memorial Airport                                          |
| Brunswick Golden Isles Airport                                           |
| Southeast Iowa Regional Airport                                          |
| Jack Mc Namara Field Airport                                             |
| Cape Girardeau Regional Airport                                          |
| Chippewa County International Airport                                    |
| North Central West Virginia Airport                                      |
| William R Fairchild International Airport                                |
| Houghton County Memorial Airport                                         |
| Dodge City Regional Airport                                              |
| DuBois Regional Airport                                                  |
| Chippewa Valley Regional Airport                                         |
| Elko Regional Airport                                                    |
| New Bedford Regional Airport                                             |
| Fayetteville Regional Grannis Field                                      |
| Wokal Field Glasgow International Airport                                |
| Central Nebraska Regional Airport                                        |
| Memorial Field                                                           |
| Tri-State/Milton J. Ferguson Field                                       |
| Kili Airport                                                             |
| Kirksville Regional Airport                                              |
| Jamestown Regional Airport                                               |
| Laramie Regional Airport                                                 |
| Arnold Palmer Regional Airport                                           |
| North Platte Regional Airport Lee Bird Field                             |
| Lebanon Municipal Airport                                                |
| Crater Lake-Klamath Regional Airport                                     |
| Lancaster Airport                                                        |
| Lewistown Municipal Airport                                              |
| Lynchburg Regional Preston Glenn Field                                   |
| Muskegon County Airport                                                  |
| Frank Wiley Field                                                        |
| Northwest Alabama Regional Airport                                       |
| Southwest Oregon Regional Airport                                        |
| Owensboro Daviess County Airport                                         |
| Hattiesburg Laurel Regional Airport                                      |
| Pocatello Regional Airport                                               |
| Pierre Regional Airport                                                  |
| Pellston Regional Airport of Emmet County Airport                        |
| Portsmouth International at Pease Airport                                |
| Reading Regional Carl A Spaatz Field                                     |
| Rhinelander Oneida County Airport                                        |
| Southwest Wyoming Regional Airport                                       |
| Rutland - Southern Vermont Regional Airport                              |
| San Luis County Regional Airport                                         |
| Sheridan County Airport                                                  |
| Adirondack Regional Airport                                              |
| Salina Municipal Airport                                                 |
| Santa Maria Pub/Capt G Allan Hancock Field                               |
| Tupelo Regional Airport                                                  |
| Quincy Regional Baldwin Field                                            |
| Victoria Regional Airport                                                |
| Valdosta Regional Airport                                                |
| Worland Municipal Airport                                                |
| Yakima Air Terminal McAllister Field                                     |
| Ercan International Airport                                              |
| Logroo-Agoncillo Airport                                                 |
| le d'Yeu Airport                                                         |
| Angers-Loire Airport                                                     |
| La Mle Airport                                                           |
| Syros Airport                                                            |
| Pcs-Pogny Airport                                                        |
| Gyr-Pr International Airport                                             |
| Srmellk International Airport                                            |
| Aosta Airport                                                            |
| Salerno Costa d'Amalfi Airport                                           |
| Corvo Airport                                                            |
| Banja Luka International Airport                                         |
| Uak Airport                                                              |
| Kars Airport                                                             |
| anlurfa Airport                                                          |
| Kahramanmara Airport                                                     |
| Ar Airport                                                               |
| Adyaman Airport                                                          |
| Sleyman Demirel International Airport                                    |
| Balkesir Krfez Airport                                                   |
| Samsun aramba Airport                                                    |
| ilina Airport                                                            |
| JAGS McCartney International Airport                                     |
| Middle Caicos Airport                                                    |
| Salt Cay Airport                                                         |
| Saman El Catey International Airport                                     |
| La Isabela International Airport                                         |
| Puerto Barrios Airport                                                   |
| Quezaltenango Airport                                                    |
| Utirik Airport                                                           |
| Ahuas Airport                                                            |
| Puerto Lempira Airport                                                   |
| Mili Island Airport                                                      |
| Captain Rogelio Castillo National Airport                                |
| Ciudad Constitucin Airport                                               |
| Guerrero Negro Airport                                                   |
| El Lencero Airport                                                       |
| Alonso Valderrama Airport                                                |
| Enrique Adolfo Jimenez Airport                                           |
| Jaqu Airport                                                             |
| Captain Ramon Xatruch Airport                                            |
| Aerotortuguero Airport                                                   |
| Barra del Colorado Airport                                               |
| Cabo Velas Airport                                                       |
| Islita Airport                                                           |
| Puerto Jimenez Airport                                                   |
| Tobias Bolanos International Airport                                     |
| (Duplicate) Playa Samara Airport                                         |
| Jrmie Airport                                                            |
| Port-de-Paix Airport                                                     |
| Cayo Coco Airport                                                        |
| Alberto Delgado Airport                                                  |
| Congo Town Airport                                                       |
| Arthur's Town Airport                                                    |
| New Bight Airport                                                        |
| Colonel Hill Airport                                                     |
| Nassau Paradise Island Airport                                           |
| Enua Airport                                                             |
| Mangaia Island Airport                                                   |
| Manihiki Island Airport                                                  |
| Mauke Airport                                                            |
| Mitiaro Island Airport                                                   |
| Tongareva Airport                                                        |
| Cicia Airport                                                            |
| Malolo Lailai Island Airport                                             |
| Vunisea Airport                                                          |
| Mana Island Airport                                                      |
| Moala Airport                                                            |
| Ngau Airport                                                             |
| Lakeba Island Airport                                                    |
| Labasa Airport                                                           |
| Matei Airport                                                            |
| Koro Island Airport                                                      |
| Rotuma Airport                                                           |
| Savusavu Airport                                                         |
| Kaufana Airport                                                          |
| Lifuka Island Airport                                                    |
| Mata'aho Airport                                                         |
| Kuini Lavenia Airport                                                    |
| Vanua Balavu Airport                                                     |
| Niue International Airport                                               |
| Pointe Vele Airport                                                      |
| Maota Airport                                                            |
| Apataki Airport                                                          |
| Ahe Airport                                                              |
| Hiva Oa-Atuona Airport                                                   |
| Ua Pou Airport                                                           |
| Ua Huka Airport                                                          |
| Mota Lava Airport                                                        |
| Sola Airport                                                             |
| Torres Airstrip                                                          |
| Siwo Airport                                                             |
| Craig Cove Airport                                                       |
| Longana Airport                                                          |
| Sara Airport                                                             |
| Tavie Airport                                                            |
| Lamap Airport                                                            |
| Lamen Bay Airport                                                        |
| Maewo-Naone Airport                                                      |
| Lonorore Airport                                                         |
| Norsup Airport                                                           |
| Gaua Island Airport                                                      |
| Redcliffe Airport                                                        |
| Santo Pekoa International Airport                                        |
| Tongoa Airport                                                           |
| Uli Airport                                                              |
| Valesdir Airport                                                         |
| Southwest Bay Airport                                                    |
| North West Santo Airport                                                 |
| Aneityum Airport                                                         |
| Aniwa Airport                                                            |
| Dillon's Bay Airport                                                     |
| Futuna Airport                                                           |
| Ipota Airport                                                            |
| Tiga Airport                                                             |
| le Art - Waala Airport                                                   |
| le des Pins Airport                                                      |
| Fayzabad Airport                                                         |
| Dawadmi Domestic Airport                                                 |
| Al-Jawf Domestic Airport                                                 |
| Wadi Al Dawasir Airport                                                  |
| Khoram Abad Airport                                                      |
| Bam Airport                                                              |
| Rafsanjan Airport                                                        |
| Bojnord Airport                                                          |
| Sabzevar National Airport                                                |
| Noshahr Airport                                                          |
| Dasht-e Naz Airport                                                      |
| Lar Airport                                                              |
| Ardabil Airport                                                          |
| Urmia Airport                                                            |
| Al Ain International Airport                                             |
| Bannu Airport                                                            |
| Bahawalpur Airport                                                       |
| Chitral Airport                                                          |
| Dalbandin Airport                                                        |
| Dera Ghazi Khan Airport                                                  |
| Dera Ismael Khan Airport                                                 |
| Jiwani Airport                                                           |
| Hyderabad Airport                                                        |
| Khuzdar Airport                                                          |
| Ormara Airport                                                           |
| Parachinar Airport                                                       |
| Skardu Airport                                                           |
| Sehwan Sharif Airport                                                    |
| Turbat International Airport                                             |
| Sulaymaniyah International Airport                                       |
| Kamishly Airport                                                         |
| Sayun International Airport                                              |
| Adak Airport                                                             |
| Gustavus Airport                                                         |
| Skagway Airport                                                          |
| Holy Cross Airport                                                       |
| Haines Airport                                                           |
| Kalskag Airport                                                          |
| McGrath Airport                                                          |
| Mountain Village Airport                                                 |
| Aniak Airport                                                            |
| Chevak Airport                                                           |
| Wrangell Airport                                                         |
| Balimo Airport                                                           |
| Baimuru Airport                                                          |
| Kalaupapa Airport                                                        |
| Eniwetok Airport                                                         |
| Matsu Nangan Airport                                                     |
| Hengchun Airport                                                         |
| Matsu Beigan Airport                                                     |
| Kushiro Airport                                                          |
| Okadama Airport                                                          |
| Saga Airport                                                             |
| Nagoya Airport                                                           |
| Iwami Airport                                                            |
| Fukushima Airport                                                        |
| Odate Noshiro Airport                                                    |
| Shonai Airport                                                           |
| Miyakejima Airport                                                       |
| Kunsan Air Base                                                          |
| Mokpo Heliport                                                           |
| Wonju/Hoengseong Air Base (K-38/K-46)                                    |
| Yangyang International Airport                                           |
| Sacheon Air Base/Airport                                                 |
| Cheongju International Airport/Cheongju Air Base (K-59/G-513)            |
| Subic Bay International Airport                                          |
| Cuyo Airport                                                             |
| Rajah Buayan Air Base                                                    |
| Camiguin Airport                                                         |
| Jolo Airport                                                             |
| Sanga Sanga Airport                                                      |
| Surigao Airport                                                          |
| Tandag Airport                                                           |
| Naga Airport                                                             |
| Basco Airport                                                            |
| San Fernando Airport                                                     |
| Tuguegarao Airport                                                       |
| Virac Airport                                                            |
| Calbayog Airport                                                         |
| Catarman National Airport                                                |
| Moises R. Espinosa Airport                                               |
| Roxas Airport                                                            |
| General Enrique Mosconi Airport                                          |
| Las Heras Airport                                                        |
| Antoine de Saint Exupry Airport                                          |
| Lago Argentino Airport                                                   |
| Gobernador Gregores Airport                                              |
| Santa Teresita Airport                                                   |
| Necochea Airport                                                         |
| Orlando Bezerra de Menezes Airport                                       |
| Coronel Horcio de Mattos Airport                                         |
| Maca Airport                                                             |
| Frank Miloye MilenkowichiMarlia State Airport                            |
| Vitria da Conquista Airport                                              |
| Santa Maria Airport                                                      |
| Toledo Airport                                                           |
| Ricardo Garca Posada Airport                                             |
| Pucn Airport                                                             |
| Sorocaba Airport                                                         |
| San Cristbal Airport                                                     |
| Camilo Ponce Enriquez Airport                                            |
| General Rivadeneira Airport                                              |
| Port Stanley Airport                                                     |
| Santa Ana Airport                                                        |
| La Jagua Airport                                                         |
| Caucaya Airport                                                          |
| La Pedrera Airport                                                       |
| Reyes Murillo Airport                                                    |
| Obando Airport                                                           |
| El Yopal Airport                                                         |
| Capitn de Av. Emilio Beltrn Airport                                      |
| Puerto Rico Airport                                                      |
| Capitn Av. Selin Zeitun Lopez Airport                                    |
| Reyes Airport                                                            |
| Capitn Av. German Quiroga G. Airport                                     |
| Zorg en Hoop Airport                                                     |
| Mucuri Airport                                                           |
| Caballococha Airport                                                     |
| Mayor General FAP Armando Revoredo Iglesias Airport                      |
| Alferez Fap David Figueroa Fernandini Airport                            |
| Maria Reiche Neuman Airport                                              |
| Santa Rosa Airport                                                       |
| El Jagel / Punta del Este Airport                                        |
| Escuela Mariscal Sucre Airport                                           |
| Juan Pablo Prez Alfonso Airport                                          |
| Ji-Paran Airport                                                         |
| Codrington Airport                                                       |
| La Dsirade Airport                                                       |
| Baillif Airport                                                          |
| St-Franois Airport                                                       |
| Les Bases Airport                                                        |
| Vance W. Amory International Airport                                     |
| Virgin Gorda Airport                                                     |
| J F Mitchell Airport                                                     |
| Union Island International Airport                                       |
| Kokshetau Airport                                                        |
| Petropavlosk South Airport                                               |
| Zhezkazgan Airport                                                       |
| Ust-Kamennogorsk Airport                                                 |
| Kostanay West Airport                                                    |
| Ganja Airport                                                            |
| Nakhchivan Airport                                                       |
| Chulman Airport                                                          |
| Polyarny Airport                                                         |
| Chokurdakh Airport                                                       |
| Cherskiy Airport                                                         |
| Tiksi Airport                                                            |
| Komsomolsk-on-Amur Airport                                               |
| Ugolny Airport                                                           |
| Okhotsk Airport                                                          |
| Ujae Atoll Airport                                                       |
| Mariupol International Airport                                           |
| Luhansk International Airport                                            |
| Zaporizhzhia International Airport                                       |
| Kryvyi Rih International Airport                                         |
| Kharkiv International Airport                                            |
| Ivano-Frankivsk International Airport                                    |
| Chernivtsi International Airport                                         |
| Rivne International Airport                                              |
| Uzhhorod International Airport                                           |
| Solovki Airport                                                          |
| Cherepovets Airport                                                      |
| Amderma Airport                                                          |
| Kotlas Airport                                                           |
| Petrozavodsk Airport                                                     |
| Hrodna Airport                                                           |
| Mogilev Airport                                                          |
| Yeniseysk Airport                                                        |
| Kyzyl Airport                                                            |
| Spichenkovo Airport                                                      |
| Khatanga Airport                                                         |
| Igarka Airport                                                           |
| Khankala Air Base                                                        |
| Nalchik Airport                                                          |
| Beslan Airport                                                           |
| Elista Airport                                                           |
| Aleknagik / New Airport                                                  |
| Mercer County Airport                                                    |
| Mid Delta Regional Airport                                               |
| Tri Cities Airport                                                       |
| Akutan Seaplane Base                                                     |
| Lopez Island Airport                                                     |
| Salekhard Airport                                                        |
| Khanty Mansiysk Airport                                                  |
| Nyagan Airport                                                           |
| Sovetskiy Airport                                                        |
| Izhevsk Airport                                                          |
| Pobedilovo Airport                                                       |
| Nadym Airport                                                            |
| Raduzhny Airport                                                         |
| Nefteyugansk Airport                                                     |
| Kurgan Airport                                                           |
| Khudzhand Airport                                                        |
| Andizhan Airport                                                         |
| Fergana International Airport                                            |
| Namangan Airport                                                         |
| Nukus Airport                                                            |
| Urgench Airport                                                          |
| Karshi Khanabad Airport                                                  |
| Termez Airport                                                           |
| Staroselye Airport                                                       |
| Belgorod International Airport                                           |
| Kursk East Airport                                                       |
| Lipetsk Airport                                                          |
| Vorkuta Airport                                                          |
| Bugulma Airport                                                          |
| Yoshkar-Ola Airport                                                      |
| Cheboksary Airport                                                       |
| Ulyanovsk East Airport                                                   |
| Orsk Airport                                                             |
| Penza Airport                                                            |
| Saransk Airport                                                          |
| Balakovo Airport                                                         |
| Hubli Airport                                                            |
| Koggala Airport                                                          |
| Weerawila Airport                                                        |
| Battambang Airport                                                       |
| Shillong Airport                                                         |
| Lokpriya Gopinath Bordoloi International Airport                         |
| Dimapur Airport                                                          |
| Tezpur Airport                                                           |
| Barisal Airport                                                          |
| Ban Huoeisay Airport                                                     |
| Bharatpur Airport                                                        |
| Bhadrapur Airport                                                        |
| Meghauli Airport                                                         |
| Nepalgunj Airport                                                        |
| Gan International Airport                                                |
| Hanimaadhoo Airport                                                      |
| Kadhdhoo Airport                                                         |
| Mae Sot Airport                                                          |
| Buon Ma Thuot Airport                                                    |
| Cat Bi International Airport                                             |
| Cam Ranh Airport                                                         |
| Co Ong Airport                                                           |
| Can Tho International Airport                                            |
| Dien Bien Phu Airport                                                    |
| Phu Cat Airport                                                          |
| Pleiku Airport                                                           |
| Vinh Airport                                                             |
| Banmaw Airport                                                           |
| Dawei Airport                                                            |
| Kawthoung Airport                                                        |
| Loikaw Airport                                                           |
| Mawlamyine Airport                                                       |
| Pathein Airport                                                          |
| Pakhokku Airport                                                         |
| Sumbawa Besar Airport                                                    |
| Tambolaka Airport                                                        |
| Bokondini Airport                                                        |
| Senggeh Airport                                                          |
| Tanjung Harapan Airport                                                  |
| Datadawai Airport                                                        |
| Kalimarau Airport                                                        |
| Warukin Airport                                                          |
| Sampit(Hasan) Airport                                                    |
| Dumatumbun Airport                                                       |
| Mali Airport                                                             |
| Belaga Airport                                                           |
| Long Lellang Airport                                                     |
| Long Seridan Airport                                                     |
| Mukah Airport                                                            |
| Bakalalan Airport                                                        |
| Lawas Airport                                                            |
| Bario Airport                                                            |
| Tomanggong Airport                                                       |
| Kudat Airport                                                            |
| Radin Inten II (Branti) Airport                                          |
| Halim Perdanakusuma International Airport                                |
| Ranai Airport                                                            |
| Pangsuma Airport                                                         |
| Sintang(Susilo) Airport                                                  |
| Pendopo Airport                                                          |
| Malikus Saleh Airport                                                    |
| Pulau Pangkor Airport                                                    |
| Long Bawan Airport                                                       |
| Nunukan Airport                                                          |
| Long Apung Airport                                                       |
| Albany Airport                                                           |
| Argyle Airport                                                           |
| Aurukun Airport                                                          |
| Barcaldine Airport                                                       |
| Badu Island Airport                                                      |
| Birdsville Airport                                                       |
| Broken Hill Airport                                                      |
| Hamilton Island Airport                                                  |
| Bedourie Airport                                                         |
| Bourke Airport                                                           |
| Burketown Airport                                                        |
| Boigu Airport                                                            |
| Oakey Airport                                                            |
| Boulia Airport                                                           |
| Bathurst Airport                                                         |
| Blackwater Airport                                                       |
| Carnarvon Airport                                                        |
| Cobar Airport                                                            |
| Coober Pedy Airport                                                      |
| Coconut Island Airport                                                   |
| Cloncurry Airport                                                        |
| Ceduna Airport                                                           |
| Cooktown Airport                                                         |
| Cunnamulla Airport                                                       |
| Coonamble Airport                                                        |
| Coen Airport                                                             |
| Cooma Snowy Mountains Airport                                            |
| Doomadgee Airport                                                        |
| Darnley Island Airport                                                   |
| Devonport Airport                                                        |
| Elcho Island Airport                                                     |
| Esperance Airport                                                        |
| Flinders Island Airport                                                  |
| Geraldton Airport                                                        |
| Gladstone Airport                                                        |
| Groote Eylandt Airport                                                   |
| Griffith Airport                                                         |
| Horn Island Airport                                                      |
| Hooker Creek Airport                                                     |
| Mount Hotham Airport                                                     |
| Hughenden Airport                                                        |
| Julia Creek Airport                                                      |
| Kalbarri Airport                                                         |
| King Island Airport                                                      |
| Kalkgurung Airport                                                       |
| Karumba Airport                                                          |
| Kowanyama Airport                                                        |
| Kubin Airport                                                            |
| Leonora Airport                                                          |
| Lake Evella Airport                                                      |
| Lord Howe Island Airport                                                 |
| Lockhart River Airport                                                   |
| Lismore Airport                                                          |
| Lightning Ridge Airport                                                  |
| Longreach Airport                                                        |
| Leinster Airport                                                         |
| Laverton Airport                                                         |
| Mabuiag Island Airport                                                   |
| Meekatharra Airport                                                      |
| Merimbula Airport                                                        |
| Milingimbi Airport                                                       |
| Maningrida Airport                                                       |
| McArthur River Mine Airport                                              |
| Mildura Airport                                                          |
| Mount Magnet Airport                                                     |
| Moree Airport                                                            |
| Moranbah Airport                                                         |
| Moruya Airport                                                           |
| Mount Gambier Airport                                                    |
| Mornington Island Airport                                                |
| Murray Island Airport                                                    |
| Maryborough Airport                                                      |
| Narrandera Airport                                                       |
| Narrabri Airport                                                         |
| Normanton Airport                                                        |
| Newman Airport                                                           |
| Olympic Dam Airport                                                      |
| Port Augusta Airport                                                     |
| Palm Island Airport                                                      |
| Paraburdoo Airport                                                       |
| Cocos (Keeling) Islands Airport                                          |
| Gove Airport                                                             |
| Parkes Airport                                                           |
| Port Lincoln Airport                                                     |
| Pormpuraaw Airport                                                       |
| Port Macquarie Airport                                                   |
| Portland Airport                                                         |
| Quilpie Airport                                                          |
| Ramingining Airport                                                      |
| Roma Airport                                                             |
| St George Airport                                                        |
| Shark Bay Airport                                                        |
| Saibai Island Airport                                                    |
| Strahan Airport                                                          |
| Thargomindah Airport                                                     |
| Tennant Creek Airport                                                    |
| Victoria River Downs Airport                                             |
| Warraber Island Airport                                                  |
| Windorah Airport                                                         |
| Whyalla Airport                                                          |
| Wiluna Airport                                                           |
| Wollongong Airport                                                       |
| Winton Airport                                                           |
| Wynyard Airport                                                          |
| Yorke Island Airport                                                     |
| Yam Island Airport                                                       |
| Beijing Nanyuan Airport                                                  |
| Chifeng Airport                                                          |
| Changzhi Airport                                                         |
| Datong Airport                                                           |
| Baita International Airport                                              |
| Baotou Airport                                                           |
| Shijiazhuang Daguocun International Airport                              |
| Tongliao Airport                                                         |
| Ulanhot Airport                                                          |
| Xilinhot Airport                                                         |
| Beihai Airport                                                           |
| Changde Airport                                                          |
| Dayong Airport                                                           |
| Meixian Airport                                                          |
| Zhuhai Jinwan Airport                                                    |
| Liuzhou Bailian Airport                                                  |
| Zhanjiang Airport                                                        |
| Enshi Airport                                                            |
| Nanyang Jiangying Airport                                                |
| Xiangyang Liuji Airport                                                  |
| Yichang Sanxia Airport                                                   |
| Ankang Wulipu Airport                                                    |
| Golmud Airport                                                           |
| Hanzhong Chenggu Airport                                                 |
| Qingyang Airport                                                         |
| Xining Caojiabu Airport                                                  |
| Yan'an Ershilipu Airport                                                 |
| Yulin Yuyang Airport                                                     |
| Arvaikheer Airport                                                       |
| Altai Airport                                                            |
| Bayankhongor Airport                                                     |
| Dalanzadgad Airport                                                      |
| Khovd Airport                                                            |
| Mrn Airport                                                              |
| Diqing Airport                                                           |
| Mangshi Airport                                                          |
| Pu'er Simao Airport                                                      |
| Zhaotong Airport                                                         |
| Ganzhou Airport                                                          |
| Jingdezhen Airport                                                       |
| Jiujiang Lushan Airport                                                  |
| Quzhou Airport                                                           |
| Lianyungang Airport                                                      |
| Huangyan Luqiao Airport                                                  |
| Shubuling Airport                                                        |
| Quanzhou Jinjiang International Airport                                  |
| Tunxi International Airport                                              |
| Weifang Airport                                                          |
| Weihai Airport                                                           |
| Sunan Shuofang International Airport                                     |
| Nanping Wuyishan Airport                                                 |
| Wenzhou Longwan International Airport                                    |
| Yancheng Airport                                                         |
| Yiwu Airport                                                             |
| Zhoushan Airport                                                         |
| Qamdo Bangda Airport                                                     |
| Dachuan Airport                                                          |
| Guangyuan Airport                                                        |
| Luzhou Airport                                                           |
| Mianyang Airport                                                         |
| Nanchong Airport                                                         |
| Nyingchi Airport                                                         |
| Wanxian Airport                                                          |
| Aksu Airport                                                             |
| Qiemo Yudu Airport                                                       |
| Kuqa Airport                                                             |
| Korla Airport                                                            |
| Karamay Airport                                                          |
| Yining Airport                                                           |
| Heihe Airport                                                            |
| Jiamusi Airport                                                          |
| Jinzhou Airport                                                          |
| Qiqihar Sanjiazi Airport                                                 |
| Yanji Chaoyangchuan Airport                                              |
| Waikoloa Heliport                                                        |
| Mount Keith Airport                                                      |
| Los Roques Airport                                                       |
| Inishmore Aerodrome                                                      |
| Connemara Regional Airport                                               |
| Rgen Airport                                                             |
| Berezovo Airport                                                         |
| Szczecin-Dbie Airport                                                    |
| Worcester Regional Airport                                               |
| Anqing Tianzhushan Airport                                               |
| Shanhaiguan Airport                                                      |
| Yuncheng Guangong Airport                                                |
| Lanzhou City Airport                                                     |
| Jiayuguan Airport                                                        |
| Dandong Airport                                                          |
| Ordos Ejin Horo Airport                                                  |
| Bao'anying Airport                                                       |
| Bremerton National Airport                                               |
| Spencer Municipal Airport                                                |
| Jefferson City Memorial Airport                                          |
| Tannheim Airfield                                                        |
| Unst Airport                                                             |
| Berkley Structures Heliport                                              |
| Provincetown Municipal Airport                                           |
| Anduki Airport                                                           |
| Gustaf III Airport                                                       |
| Kostroma Sokerkino Airport                                               |
| Sukhumi Dranda Airport                                                   |
| Donskoye Airport                                                         |
| Oban Airport                                                             |
| Erechim Airport                                                          |
| La Cte Airport                                                           |
| Courchevel Airport                                                       |
| Fullerton Municipal Airport                                              |
| Concord-Padgett Regional Airport                                         |
| Isle of Wight / Sandown Airport                                          |
| Navoi Airport                                                            |
| Andernos Les Bains Airport                                               |
| Bienenfarm Airport                                                       |
| Ain Arnat Airport                                                        |
| La Rochelle-le de R Airport                                              |
| Friedman Memorial Airport                                                |
| Yverdon-les-Bains Airport                                                |
| Bielsko Biala Airport                                                    |
| Mason City Municipal Airport                                             |
| Phoenix-Mesa-Gateway Airport                                             |
| Sal Airport                                                              |
| Tekapo Aerodrome                                                         |
| Niederoeblarn Airport                                                    |
| Vslau Airport                                                            |
| Uetersen/Heist Airport                                                   |
| Anaktuvuk Pass Airport                                                   |
| Anvik Airport                                                            |
| Atqasuk Edward Burnell Sr Memorial Airport                               |
| Gambell Airport                                                          |
| Hooper Bay Airport                                                       |
| Kaltag Airport                                                           |
| St Mary's Airport                                                        |
| Kivalina Airport                                                         |
| Mekoryuk Airport                                                         |
| Ruby Airport                                                             |
| Shishmaref Airport                                                       |
| Savoonga Airport                                                         |
| Noatak Airport                                                           |
| Ormoc Airport                                                            |
| Puvirnituq Airport                                                       |
| Tasiujaq Airport                                                         |
| Arctic Village Airport                                                   |
| Sam Mbakwe International Airport                                         |
| Arenal Airport                                                           |
| Tambor Airport                                                           |
| Cauayan Airport                                                          |
| Kirovsk-Apatity Airport                                                  |
| Coronel Altino Machado de Oliveira Airport                               |
| Port Clarence Coast Guard Station                                        |
| Pajala Airport                                                           |
| Bella Coola Airport                                                      |
| Hagerstown Regional Richard A Henson Field                               |
| Araracuara Airport                                                       |
| Gorakhpur Airport                                                        |
| Sand Point Airport                                                       |
| Hami Airport                                                             |
| Wuzhou Changzhoudao Airport                                              |
| Tugdan Airport                                                           |
| Sahand Airport                                                           |
| Gorgan Airport                                                           |
| Ilam Airport                                                             |
| Parsabade Moghan Airport                                                 |
| Tocache Airport                                                          |
| Tacheng Airport                                                          |
| Mardin Airport                                                           |
| Sugraly Airport                                                          |
| Deering Airport                                                          |
| Leon Airport                                                             |
| Burgos Airport                                                           |
| Sege Airport                                                             |
| Shahrekord Airport                                                       |
| Kangra Airport                                                           |
| Nanded Airport                                                           |
| Shimla Airport                                                           |
| Igiugig Airport                                                          |
| New Stuyahok Airport                                                     |
| King Cove Airport                                                        |
| Port Heiden Airport                                                      |
| Togiak Airport                                                           |
| Geneina Airport                                                          |
| Long Akah Airport                                                        |
| Walaha Airport                                                           |
| Chaoyang Airport                                                         |
| Buffalo Spring                                                           |
| Brus Laguna Airport                                                      |
| Bonaventure Airport                                                      |
| Sialkot Airport                                                          |
| Capitan Corbeta CA Curbelo International Airport                         |
| Walvis Bay Airport                                                       |
| Katima Mulilo Airport                                                    |
| Anadolu Airport                                                          |
| anakkale Airport                                                         |
| Mu Airport                                                               |
| Sinop Airport                                                            |
| Tekirda orlu Airport                                                     |
| Bursa Yeniehir Airport                                                   |
| Terre-de-Haut Airport                                                    |
| Kalay Airport                                                            |
| Vieques Airport                                                          |
| St Augustin Airport                                                      |
| Hamadan Airport                                                          |
| Marinduque Airport                                                       |
| Grafton Airport                                                          |
| Orange Airport                                                           |
| Taree Airport                                                            |
| Choibalsan Airport                                                       |
| Hohenems-Dornbirn Airport                                                |
| Weser-Wmme Airport                                                       |
| Krems Airport                                                            |
| Delta County Airport                                                     |
| Yakutat Airport                                                          |
| Goulburn Airport                                                         |
| Cessnock Airport                                                         |
| Scone Airport                                                            |
| Mudgee Airport                                                           |
| Maitland Airport                                                         |
| Benjamin Rivera Noriega Airport                                          |
| Raron Airport                                                            |
| Borovaya Airfield                                                        |
| Amlikon Glider Airport                                                   |
| Lommis Airfield                                                          |
| Williamson County Regional Airport                                       |
| Burnet Municipal Kate Craddock Field                                     |
| Oceanside Municipal Airport                                              |
| Flugplatz Finsterwalde/Heinrichsruh                                      |
| Kirkuk Air Base                                                          |
| Al Udeid Air Base                                                        |
| Great Barrier Aerodrome                                                  |
| Ford Airport                                                             |
| Marquette Airport                                                        |
| Allakaket Airport                                                        |
| Dinslaken/Schwarze Heide Airport                                         |
| Hxter-Holzminden Airport                                                 |
| Niijima Airport                                                          |
| Michigan City Municipal Airport                                          |
| Seward Airport                                                           |
| Grand Marais Cook County Airport                                         |
| Wausau Downtown Airport                                                  |
| Kalundborg Airport                                                       |
| Mary Airport                                                             |
| Bungle Bungle Airport                                                    |
| Sazen Airport                                                            |
| Spray View Airport                                                       |
| Reykjahl Airport                                                         |
| Sabadell Airport                                                         |
| Whitsunday Island Airport                                                |
| Delaware County Johnson Field                                            |
| Purdue University Airport                                                |
| Brown County Airport                                                     |
| North Las Vegas Airport                                                  |
| Kenosha Regional Airport                                                 |
| Montrose Regional Airport                                                |
| Riverton Regional Airport                                                |
| Eastern Oregon Regional At Pendleton Airport                             |
| Lympne Airport                                                           |
| Porto Cheli Airport                                                      |
| Zell Am See Airport                                                      |
| RAAF Base Amberley                                                       |
| Tindal Airport                                                           |
| RAAF Williams Laverton Base                                              |
| Nowra Airport                                                            |
| Lutsk Airport                                                            |
| Chernihiv Shestovitsa Airport                                            |
| Ternopil International Airport                                           |
| Brest Airport                                                            |
| Wittman Regional Airport                                                 |
| Harle Airport                                                            |
| Wangerooge Airport                                                       |
| RAAF Base Pearce                                                         |
| Bendigo Airport                                                          |
| Pangborn Memorial Airport                                                |
| Antonio Nery Juarbe Pol Airport                                          |
| Ringi Cove Airport                                                       |
| Kirensk Airport                                                          |
| Ust-Kut Airport                                                          |
| Rimatara Airport                                                         |
| Triengen Airport                                                         |
| Lausanne-Blcherette Airport                                              |
| Speck-Fehraltorf Airport                                                 |
| Locarno Airport                                                          |
| Neuchatel Airport                                                        |
| Taganrog Yuzhny Airport                                                  |
| Gelendzhik Airport                                                       |
| Zhukovsky International Airport                                          |
| Irkutsk Northwest Airport                                                |
| Khabarovsk Airport                                                       |
| Dzemgi Airport                                                           |
| Belaya Air Base                                                          |
| Tunoshna Airport                                                         |
| Gu-Lian Airport                                                          |
| Jining Qufu Airport                                                      |
| Drake Bay Airport                                                        |
| Altay Air Base                                                           |
| Tuzla International Airport                                              |
| NAS Fort Worth JRB/Carswell Field                                        |
| Naypyidaw Airport                                                        |
| Kyaukhtu South Airport                                                   |
| Jan Mayensfield                                                          |
| Bokpyinn Airport                                                         |
| Manzhouli Xijiao Airport                                                 |
| Wuhai Airport                                                            |
| Gary Chicago International Airport                                       |
| Brainerd Lakes Regional Airport                                          |
| Greenbrier Valley Airport                                                |
| Pitt Greenville Airport                                                  |
| Chefornak Airport                                                        |
| Oxnard Airport                                                           |
| Branson Airport                                                          |
| Tongren Fenghuang Airport                                                |
| Jinggangshan Airport                                                     |
| Naiu Airport                                                             |
| Schenectady County Airport                                               |
| Begishevo Airport                                                        |
| Warri Airport                                                            |
| Volkel Air Base                                                          |
| Siargao Airport                                                          |
| Langeoog Airport                                                         |
| Biel-Kappelen Airport                                                    |
| Nelspruit Airport                                                        |
| Cherkasy International Airport                                           |
| Northeast Florida Regional Airport                                       |
| Mykolaiv International Airport                                           |
| Ramechhap Airport                                                        |
| Charles M. Schulz Sonoma County Airport                                  |
| Kissimmee Gateway Airport                                                |
| Lake City Gateway Airport                                                |
| Deland Municipal Sidney H Taylor Field                                   |
| Haller Airpark                                                           |
| Palmar Airport                                                           |
| Logan-Cache Airport                                                      |
| Brigham City Regional Airport                                            |
| Malad City Airport                                                       |
| Aspen-Pitkin Co/Sardy Field                                              |
| Ulyanovsk Baratayevka Airport                                            |
| Kerrville Municipal Louis Schreiner Field                                |
| Birrfeld Airport                                                         |
| Sussex County Airport                                                    |
| Prince Rupert/Seal Cove Seaplane Base                                    |
| Great Bend Municipal Airport                                             |
| Hays Regional Airport                                                    |
| Spirit of St Louis Airport                                               |
| Ely Municipal Airport                                                    |
| Grand Rapids Itasca Co-Gordon Newstrom field                             |
| Thief River Falls Regional Airport                                       |
| Eagle River Union Airport                                                |
| Lakeland-Noble F. Lee Memorial field                                     |
| Ankeny Regional Airport                                                  |
| Berens River Airport                                                     |
| Corpus Christi Naval Air Station/Truax Field                             |
| Catalina Airport                                                         |
| Mojave Airport                                                           |
| Interlaken Air Base                                                      |
| Inisheer Aerodrome                                                       |
| Strezhevoy Airport                                                       |
| Hutchinson Municipal Airport                                             |
| Bagram Air Base                                                          |
| Prince Sultan Air Base                                                   |
| Rosecrans Memorial Airport                                               |
| Ppa Air Base                                                             |
| Whiting Field Naval Air Station South Airport                            |
| Volk Field                                                               |
| Gunnison Crested Butte Regional Airport                                  |
| Xi'an Xiguan Airport                                                     |
| Zamperini Field                                                          |
| Manistee Co Blacker Airport                                              |
| Charlotte County Airport                                                 |
| Northern Aroostook Regional Airport                                      |
| Chautauqua County-Jamestown Airport                                      |
| La Macaza / Mont-Tremblant International Inc Airport                     |
| Lake Cumberland Regional Airport                                         |
| Shenandoah Valley Regional Airport                                       |
| Devils Lake Regional Airport                                             |
| Dickinson Theodore Roosevelt Regional Airport                            |
| Sidney - Richland Regional Airport                                       |
| Chadron Municipal Airport                                                |
| Alliance Municipal Airport                                               |
| Mc Cook Ben Nelson Regional Airport                                      |
| The Florida Keys Marathon Airport                                        |
| Dawson Community Airport                                                 |
| L M Clayton Airport                                                      |
| Yellowstone Airport                                                      |
| San Luis Valley Regional Bergman Field                                   |
| Canyonlands Field                                                        |
| Ely Airport Yelland Field                                                |
| Vernal Regional Airport                                                  |
| Sierra Blanca Regional Airport                                           |
| Show Low Regional Airport                                                |
| McCall Municipal Airport                                                 |
| Lemhi County Airport                                                     |
| Mammoth Yosemite Airport                                                 |
| Friday Harbor Airport                                                    |
| Orcas Island Airport                                                     |
| Astoria Regional Airport                                                 |
| Newport Municipal Airport                                                |
| Emmonak Airport                                                          |
| Unalakleet Airport                                                       |
| Ugnu-Kuparuk Airport                                                     |
| Shageluk Airport                                                         |
| Chuathbaluk Airport                                                      |
| Nuiqsut Airport                                                          |
| Eek Airport                                                              |
| Kasigluk Airport                                                         |
| Kwethluk Airport                                                         |
| Kwigillingok Airport                                                     |
| Marshall Don Hunter Sr Airport                                           |
| Russian Mission Airport                                                  |
| Koliganek Airport                                                        |
| Manokotak Airport                                                        |
| Chalkyitsik Airport                                                      |
| Eagle Airport                                                            |
| Hughes Airport                                                           |
| Huslia Airport                                                           |
| Nulato Airport                                                           |
| Venetie Airport                                                          |
| Beaver Airport                                                           |
| Central Airport                                                          |
| Shungnak Airport                                                         |
| Inyokern Airport                                                         |
| Visalia Municipal Airport                                                |
| Merced Regional Macready Field                                           |
| Laguna de Los Patos International Airport                                |
| Amarais Airport                                                          |
| Phoenix Goodyear Airport                                                 |
| Toowoomba Airport                                                        |
| Ballera Airport                                                          |
| Gatton Campus Airport                                                    |
| Arkalyk North Airport                                                    |
| Nabern/Teck Airport                                                      |
| Angoon Seaplane Base                                                     |
| Elfin Cove Seaplane Base                                                 |
| Funter Bay Seaplane Base                                                 |
| Hoonah Airport                                                           |
| Kake Airport                                                             |
| Metlakatla Seaplane Base                                                 |
| Hydaburg Seaplane Base                                                   |
| Egegik Airport                                                           |
| Perryville Airport                                                       |
| Pilot Point Airport                                                      |
| South Naknek Nr 2 Airport                                                |
| Akhiok Airport                                                           |
| Karluk Airport                                                           |
| Larsen Bay Airport                                                       |
| Ambler Airport                                                           |
| Buckland Airport                                                         |
| Bob Baker Memorial Airport                                               |
| Kobuk Airport                                                            |
| Robert (Bob) Curtis Memorial Airport                                     |
| Selawik Airport                                                          |
| Brevig Mission Airport                                                   |
| Elim Airport                                                             |
| Golovin Airport                                                          |
| Teller Airport                                                           |
| Wales Airport                                                            |
| White Mountain Airport                                                   |
| Koyuk Alfred Adams Airport                                               |
| St Michael Airport                                                       |
| Shaktoolik Airport                                                       |
| Tin City Long Range Radar Station Airport                                |
| Atka Airport                                                             |
| Nikolski Air Station                                                     |
| Yakataga Airport                                                         |
| Alakanuk Airport                                                         |
| Kipnuk Airport                                                           |
| False Pass Airport                                                       |
| Nelson Lagoon Airport                                                    |
| Port Moller Airport                                                      |
| Klawock Airport                                                          |
| Quinhagak Airport                                                        |
| Kotlik Airport                                                           |
| Koyukuk Airport                                                          |
| Scammon Bay Airport                                                      |
| Nondalton Airport                                                        |
| Kongiganak Airport                                                       |
| Nikolai Airport                                                          |
| Akiak Airport                                                            |
| Wainwright Airport                                                       |
| Zapala Airport                                                           |
| Rincon De Los Sauces Airport                                             |
| Tte. Julio Gallardo Airport                                              |
| Sierra Grande Airport                                                    |
| Cabo F.A.A. H. R. Bordn Airport                                          |
| Chenega Bay Airport                                                      |
| Tok Junction Airport                                                     |
| Circle City /New/ Airport                                                |
| Sleetmute Airport                                                        |
| Healy River Airport                                                      |
| Klawock Seaplane Base                                                    |
| Minchumina Airport                                                       |
| Manley Hot Springs Airport                                               |
| Natuashish Airport                                                       |
| Postville Airport                                                        |
| Kangiqsujuaq (Wakeham Bay) Airport                                       |
| Alma Airport                                                             |
| Havre St Pierre Airport                                                  |
| Rimouski Airport                                                         |
| Tadoule Lake Airport                                                     |
| Lac Brochet Airport                                                      |
| South Indian Lake Airport                                                |
| Brochet Airport                                                          |
| Little Grand Rapids Airport                                              |
| Cross Lake (Charlie Sinclair Memorial) Airport                           |
| Red Sucker Lake Airport                                                  |
| Rainbow Lake Airport                                                     |
| Bonnyville Airport                                                       |
| Nanaimo Harbour Water Airport                                            |
| Ganges Seaplane Base                                                     |
| Fort St James Airport                                                    |
| Boundary Bay Airport                                                     |
| Langley Airport                                                          |
| Denny Island Airport                                                     |
| Wekwet Airport                                                           |
| Camaguey-Campo Cuatro Milpas Airport                                     |
| Cabo San Lucas International Airport                                     |
| Corn Island                                                              |
| San Pedro Airport                                                        |
| Rosita Airport                                                           |
| Siuna                                                                    |
| Waspam Airport                                                           |
| San Carlos                                                               |
| Playa Samara/Carrillo Airport                                            |
| Constanza - Expedicin 14 de Junio National Airport                       |
| Negril Airport                                                           |
| Jos Aponte de la Torre Airport                                           |
| Charlotte Amalie Harbor Seaplane Base                                    |
| D. Casimiro Szlapelis Airport                                            |
| Jose De San Martin Airport                                               |
| Uyuni Airport                                                            |
| Rurenabaque Airport                                                      |
| Abaiang Airport                                                          |
| Afobakka Airstrip                                                        |
| Alalapadu Airstrip                                                       |
| Albina Airport                                                           |
| Lawa Anapaike Airstrip                                                   |
| Apetina Airstrip                                                         |
| Drietabbetje Airport                                                     |
| Kabalebo Airport                                                         |
| Kayser Airport                                                           |
| Kwamalasoemoetoe Airport                                                 |
| Moengo Airstrip                                                          |
| Nieuw Nickerie Airport                                                   |
| Vincent Fayks Airport                                                    |
| Sarakreek Airstrip                                                       |
| Sipaliwini Airport                                                       |
| Stoelmanseiland Airport                                                  |
| Totness Airport                                                          |
| Wageningen Airstrip                                                      |
| Codela Airport                                                           |
| Orinduik Airport                                                         |
| Annai Airport                                                            |
| Apoteri Airport                                                          |
| Imbaimadai Airport                                                       |
| Kamarang Airport                                                         |
| Mabaruma Airport                                                         |
| Mahdia Airport                                                           |
| Dr Augusto Roberto Fuster International Airport                          |
| Alcides Fernndez Airport                                                 |
| Los Colonizadores Airport                                                |
| Batagay Airport                                                          |
| Villa Garzn Airport                                                      |
| El Bagre Airport                                                         |
| Juan H White Airport                                                     |
| Mandinga Airport                                                         |
| Golfo de Morrosquillo Airport                                            |
| Cabo Frio Airport                                                        |
| Presidente Joo Batista Figueiredo Airport                                |
| Gurupi Airport                                                           |
| Santana do Araguaia Airport                                              |
| Breves Airport                                                           |
| Soure Airport                                                            |
| Parintins Airport                                                        |
| Barreiras Airport                                                        |
| Santa Terezinha Airport                                                  |
| Minau Airport                                                            |
| Araguana Airport                                                         |
| Novo Aripuan Airport                                                     |
| Fazenda Colen Airport                                                    |
| Tenente Lund Pressoto Airport                                            |
| Dourados Airport                                                         |
| Lbrea Airport                                                            |
| Maestro Marinho Franco Airport                                           |
| Tancredo Thomas de Faria Airport                                         |
| Santa Terezinha Airport                                                  |
| General Leite de Castro Airport                                          |
| Romeu Zema Airport                                                       |
| Maus Airport                                                             |
| Borba Airport                                                            |
| Coari Airport                                                            |
| Barcelos Airport                                                         |
| Diamantino Airport                                                       |
| Guanambi Airport                                                         |
| Tsletsi Airport                                                          |
| Nzagi Airport                                                            |
| Lucapa Airport                                                           |
| Capanda Airport                                                          |
| Am Timan Airport                                                         |
| Shark El Oweinat International Airport                                   |
| Eastern WV Regional Airport/Shepherd Field                               |
| Awassa Airport                                                           |
| Wilwal International Airport                                             |
| Mekane Selam Airport                                                     |
| Debra Marcos Airport                                                     |
| Debre Tabor Airport                                                      |
| Harar Meda Airport                                                       |
| Robe Airport                                                             |
| Mayumba Airport                                                          |
| Mara Serena Lodge Airstrip                                               |
| Mulika Lodge Airport                                                     |
| Rumbek Airport                                                           |
| Yei Airport                                                              |
| Cape Palmas Airport                                                      |
| Ecuvillens Airport                                                       |
| Inhaca Airport                                                           |
| Ouro Sogui Airport                                                       |
| Bird Island Airport                                                      |
| Wadi Halfa Airport                                                       |
| Enfidha - Hammamet International Airport                                 |
| Kidepo Airport                                                           |
| Kitgum Airport                                                           |
| Bugungu Airport                                                          |
| Svea Airport                                                             |
| Ny-lesund Airport (Hamnerabben)                                          |
| Hatay Airport                                                            |
| Kihnu Airfield                                                           |
| Ruhnu Airfield                                                           |
| Raivavae Airport                                                         |
| Foshan Shadi Airport                                                     |
| Huizhou Airport                                                          |
| Lleida-Alguaire Airport                                                  |
| Ouessant Airport                                                         |
| Bildudalur Airport                                                       |
| Gjgur Airport                                                            |
| Saurkrkur Airport                                                        |
| Selfoss Airport                                                          |
| Inishmaan Aerodrome                                                      |
| Ak Bashat Airport                                                        |
| Ulgii Mongolei Airport                                                   |
| Qurghonteppa International Airport                                       |
| Vologda Airport                                                          |
| Severo-Evensk Airport                                                    |
| Olenyok Airport                                                          |
| Saskylakh Airport                                                        |
| Leshukonskoye Airport                                                    |
| Nizhneangarsk Airport                                                    |
| Vanavara Airport                                                         |
| Aykhal Airport                                                           |
| Uktus Airport                                                            |
| Baykit Airport                                                           |
| Biysk Airport                                                            |
| Huesca/Pirineos Airport                                                  |
| Ciudad Real Central Airport                                              |
| Al Najaf International Airport                                           |
| Colonsay Airstrip                                                        |
| Rock Hill - York County Airport                                          |
| Allegheny County Airport                                                 |
| Cecil Airport                                                            |
| Fulton County Airport Brown Field                                        |
| Tresco Heliport                                                          |
| Tarin Kowt Airport                                                       |
| Zaranj Airport                                                           |
| Chakcharan Airport                                                       |
| Fuyang Xiguan Airport                                                    |
| Longyan Guanzhishan Airport                                              |
| Baoshan Yunduan Airport                                                  |
| Xingyi Airport                                                           |
| Liping Airport                                                           |
| Stepanakert Air Base                                                     |
| The Ohio State University Airport - Don Scott Field                      |
| Addison Airport                                                          |
| Destin Executive Airport                                                 |
| Kherson International Airport                                            |
| Ryan's Creek Aerodrome                                                   |
| Assumption Island Airport                                                |
| Zhijiang Airport                                                         |
| Yarmouth Airport                                                         |
| Kinston Regional Jetport At Stallings Field                              |
| First Flight Airport                                                     |
| Lintsang Airfield                                                        |
| Maturac Airport                                                          |
| Carajs Airport                                                           |
| Centro de Lanamento de Alcntara Airport                                  |
| Tarempa Airport                                                          |
| Wrzburg-Schenkenturm Airport                                             |
| So Jacinto Airport                                                       |
| Hopsten Air Base                                                         |
| Persian Gulf International Airport                                       |
| Yasouj Airport                                                           |
| Mosul International Airport                                              |
| Tajima Airport                                                           |
| Amakusa Airport                                                          |
| Kikai Airport                                                            |
| Aguni Airport                                                            |
| Donoi Airport                                                            |
| Bulgan Airport                                                           |
| Ulaangom Airport                                                         |
| Borongan Airport                                                         |
| Lubang Airport                                                           |
| Kulob Airport                                                            |
| Chi Mei Airport                                                          |
| Daoguz Airport                                                           |
| Barrow Island Airport                                                    |
| Derby Airport                                                            |
| Walgett Airport                                                          |
| Bathurst Island Airport                                                  |
| Dunk Island Airport                                                      |
| Lizard Island Airport                                                    |
| Hamilton Airport                                                         |
| Halls Creek Airport                                                      |
| Fitzroy Crossing Airport                                                 |
| Ravensthorpe Airport                                                     |
| Wilkins Runway                                                           |
| Provo Municipal Airport                                                  |
| Steamboat Springs Bob Adams Field                                        |
| Delta Municipal Airport                                                  |
| Richfield Municipal Airport                                              |
| Carbon County Regional/Buck Davis Field                                  |
| Los Alamos Airport                                                       |
| Lake Havasu City Airport                                                 |
| Winslow Lindbergh Regional Airport                                       |
| Douglas Municipal Airport                                                |
| Marakei Airport                                                          |
| Abemama Atoll Airport                                                    |
| Buariki Airport                                                          |
| Kuria Airport                                                            |
| Arorae Island Airport                                                    |
| Tamana Island Airport                                                    |
| Beru Airport                                                             |
| Nikunau Airport                                                          |
| Butaritari Atoll Airport                                                 |
| Makin Island Airport                                                     |
| Maiana Airport                                                           |
| Nonouti Airport                                                          |
| Tabiteuea South Airport                                                  |
| Whitianga Airport                                                        |
| Takaka Airport                                                           |
| Afutara Aerodrome                                                        |
| Ulawa Airport                                                            |
| Choiseul Bay Airport                                                     |
| Santa Ana Airport                                                        |
| Yandina Airport                                                          |
| Batuna Aerodrome                                                         |
| Bartow Municipal Airport                                                 |
| Dyagilevo Air Base                                                       |
| Fitiuta Airport                                                          |
| Livermore Municipal Airport                                              |
| Mariposa Yosemite Airport                                                |
| Grootfontein Airport                                                     |
| Rundu Airport                                                            |
| Tasiilaq Heliport                                                        |
| Jacqueline Cochran Regional Airport                                      |
| Santa Monica Municipal Airport                                           |
| Bermuda Dunes Airport                                                    |
| Scottsdale Airport                                                       |
| Olympia Regional Airport                                                 |
| Yolo County Davis Woodland Winters Airport                               |
| Garfield County Regional Airport                                         |
| Shively Field                                                            |
| DeKalb Peachtree Airport                                                 |
| Monroe County Airport                                                    |
| Witham Field                                                             |
| Morristown Municipal Airport                                             |
| Napa County Airport                                                      |
| Brown Field Municipal Airport                                            |
| Wangen-Lachen Airport                                                    |
| Venice Municipal Airport                                                 |
| Palm Beach County Glades Airport                                         |
| Northwest Florida Beaches International Airport                          |
| San Bernardino International Airport                                     |
| Valena Airport                                                           |
| Caruaru Airport                                                          |
| Wake Island Airfield                                                     |
| Aeroclube Airport                                                        |
| San Carlos Airport                                                       |
| Courtelary Airport                                                       |
| Lotnisko Korne                                                           |
| Camp Okavango Airport                                                    |
| Rocky Mount Wilson Regional Airport                                      |
| Whittier Airport                                                         |
| Soldotna Airport                                                         |
| Gillespie Field                                                          |
| San Clemente Island Naval Auxiliary Landing Field                        |
| Phan Rang Airport                                                        |
| Na-San Airport                                                           |
| Truckee Tahoe Airport                                                    |
| Frjus Airport                                                            |
| Geelong Airport                                                          |
| Mezen Airport                                                            |
| Vaskovo Airport                                                          |
| Cobb County-Mc Collum Field                                              |
| Brumowski  Air Base                                                      |
| Dell Flight Strip                                                        |
| Mission Field                                                            |
| Big Timber Airport                                                       |
| Tulip City Airport                                                       |
| London Heliport                                                          |
| Venice-Lido Airport                                                      |
| Tallinn Linnahall Heliport                                               |
| Hernesaari Heliport                                                      |
| Linkenheim Airport                                                       |
| Monument Valley Airport                                                  |
| Hilversum Airfield                                                       |
| West 30th St. Heliport                                                   |
| Texel Airfield                                                           |
| La Cerdanya Airport                                                      |
| Lakeland Linder International Airport                                    |
| Stary Oskol Airport                                                      |
| Syangboche Airport                                                       |
| Indianola Municipal Airport                                              |
| Cheremshanka Airport                                                     |
| French Valley Airport                                                    |
| Oristano-Fenosu Airport                                                  |
| White Waltham Airfield                                                   |
| Mysore Airport                                                           |
| Carl R Keller Field                                                      |
| Dayton-Wright Brothers Airport                                           |
| Richmond Municipal Airport                                               |
| Findlay Airport                                                          |
| Burlington Executive                                                     |
| Penneshaw Airport                                                        |
| Engels heliport                                                          |
| Emporia Municipal Airport                                                |
| Sk-Edeby Airport                                                         |
| Wycombe Air Park                                                         |
| Bembridge Airport                                                        |
| Waterville / Kings County Municipal Airport                              |
| Black Hills Airport-Clyde Ice Field                                      |
| Westkapelle heliport                                                     |
| Redcliffe Airport                                                        |
| Oksywie Military Air Base                                                |
| Malbork Military Air Base                                                |
| Lask Military Air Base                                                   |
| Miroslawiec Military Air Base                                            |
| Krzesiny Military Air Base                                               |
| Olive Branch Airport                                                     |
| Via del mar Airport                                                      |
| Brampton Airport                                                         |
| Zonguldak Airport                                                        |
| Rocky Mountain Metropolitan Airport                                      |
| Salem Municipal Airport/McNary Field                                     |
| Tunica Municipal Airport                                                 |
| Batken Airport                                                           |
| Kasaba Bay Airport                                                       |
| Hunt Field                                                               |
| Hoogeveen Airfield                                                       |
| Teuge Airport                                                            |
| Midden-Zeeland Airport                                                   |
| Ameland Airfield                                                         |
| Saint-Cyr-l'cole Airport                                                 |
| Lawrence J Timmerman Airport                                             |
| Southern Wisconsin Regional Airport                                      |
| Mantsonyane Airport                                                      |
| Arlington Municipal Airport                                              |
| Gwinnett County Briscoe Field                                            |
| Bowling Green Warren County Regional Airport                             |
| Richard Lloyd Jones Jr Airport                                           |
| Al Minhad Air Base                                                       |
| Kirovograd Airport                                                       |
| Roitzschjora Airfield                                                    |
| El Alamein International Airport                                         |
| Bryce Canyon Airport                                                     |
| Burlington Alamance Regional Airport                                     |
| Chkalovskiy Air Base                                                     |
| Tengchong Tuofeng Airport                                                |
| Belbek Airport                                                           |
| De Peel Air Base                                                         |
| Camp Bastion Airport                                                     |
| New Century Aircenter Airport                                            |
| Easton Newnam Field                                                      |
| Stafsberg Airport                                                        |
| Ringebu Airfield Frya                                                    |
| Yuba County Airport                                                      |
| Phillip Island Airport                                                   |
| Halliburton Field                                                        |
| Garner Field                                                             |
| Lewis University Airport                                                 |
| Buchanan Field                                                           |
| Ocean Reef Club Airport                                                  |
| Strasbourg Neuhof Airfield                                               |
| Nannhausen Airport                                                       |
| Yushu Batang Airport                                                     |
| Lianshui Airport                                                         |
| Toronto/Oshawa Executive Airport                                         |
| Marl-Loemhle Airfield                                                    |
| Frila Air Base                                                           |
| Lahr Airport                                                             |
| Monywar Airport                                                          |
| Ohio University Snyder Field                                             |
| Springfield-Beckley Municipal Airport                                    |
| Sun Island Resort and SPA                                                |
| Fes Sefrou Airport                                                       |
| Herrera Airport                                                          |
| Cooinda Airport                                                          |
| Jabiru Airport                                                           |
| Regensburg-Oberhub Airport                                               |
| Hastings Airport                                                         |
| Philip Billard Municipal Airport                                         |
| Benson Airstrip                                                          |
| Rough River State Park Airport                                           |
| Smyrna Airport                                                           |
| Franklin County Airport                                                  |
| Ngari Gunsa Airport                                                      |
| Cochstedt Airport                                                        |
| Collin County Regional At Mc Kinney Airport                              |
| Chicago Executive Airport                                                |
| Southwest Washington Regional Airport                                    |
| Beneov Airport                                                           |
| Bougouni Airport                                                         |
| Tureia Airport                                                           |
| McMurdo Station Ice Runway                                               |
| Keekorok Airport                                                         |
| Puerto Obaldia Airport                                                   |
| Kerch Airport                                                            |
| Ukunda Airstrip                                                          |
| Wilmington Airpark                                                       |
| Marana Regional Airport                                                  |
| Casa Grande Municipal Airport                                            |
| Mobile Airport                                                           |
| Buckeye Municipal Airport                                                |
| Gila Bend Municipal Airport                                              |
| McMinn County Airport                                                    |
| Sterling Municipal Airport                                               |
| Rawlins Municipal Airport/Harvey Field                                   |
| Mackenzie Airport                                                        |
| Essex County Airport                                                     |
| Lee C Fine Memorial Airport                                              |
| Thomasville Regional Airport                                             |
| Henderson Executive Airport                                              |
| Gostomel Airport                                                         |
| Henry Tift Myers Airport                                                 |
| Landshut Airport                                                         |
| Itzehoe/Hungriger Wolf Airport                                           |
| Radom Airport                                                            |
| Phoenix Deer Valley Airport                                              |
| Calgary / Springbank Airport                                             |
| Golden Airport                                                           |
| Revelstoke Airport                                                       |
| Republic Airport                                                         |
| Allstedt Airport                                                         |
| General Freire Airport                                                   |
| Peine-Eddesse Airport                                                    |
| South Texas Regional Airport at Hondo                                    |
| Zhongwei Shapotou Airport                                                |
| McKinley National Park Airport                                           |
| Lake Hood Airport                                                        |
| Prospect Creek Airport                                                   |
| Khwai River Lodge Airport                                                |
| Spremberg-Welzow Airport                                                 |
| Taichung Airport                                                         |
| Wheeling Ohio County Airport                                             |
| Fitzgerald Municipal Airport                                             |
| Ye Airport                                                               |
| Isla San Felix Airport                                                   |
| Shaibah Airport                                                          |
| Al Maktoum International Airport                                         |
| Aransas County Airport                                                   |
| Megve Airport                                                            |
| Mribel Altiport                                                          |
| Baise Youjiang Airport                                                   |
| Okaukuejo Airport                                                        |
| Mokuti Lodge Airport                                                     |
| Rotenburg (Wmme) Airport                                                 |
| Wipperfrth-Neye Airport                                                  |
| Osnabrck-Atterheide Airport                                              |
| Flugplatz Ballenstedt                                                    |
| Flugplatz Hartenholm                                                     |
| Ganderkesee Atlas Airfield                                               |
| Nienburg-Holzbalge Airport                                               |
| Damme Airfield                                                           |
| Borkenberge Airport                                                      |
| Obermehler-Schlotheim Airport                                            |
| Hodenhagen Airport                                                       |
| Grube Airport                                                            |
| Tnder Airport                                                            |
| Celle-Arloh Airport                                                      |
| Uelzen Airport                                                           |
| Hamm-Lippewiesen Airport                                                 |
| Lsse Airport                                                             |
| Porta Westfalica Airport                                                 |
| Brilon/Hochsauerlandkreis Airfield                                       |
| Hameln-Pyrmont Airport                                                   |
| Nordholz-Spieka Airfield                                                 |
| Kthen Airport                                                            |
| St. Michaelisdonn Airport                                                |
| Salzgitter-Drtte Airport                                                 |
| Karlshfen Airport                                                        |
| Oldenburg-Hatten Airfield                                                |
| Rinteln Airport                                                          |
| Mnster-Telgte Airport                                                    |
| St. Peter-Ording Airport                                                 |
| Lchow-Rehbeck Airport                                                    |
| Klietz/Scharlibbe Airport                                                |
| Burg Airport                                                             |
| Crisp County Cordele Airport                                             |
| Ormond Beach Municipal Airport                                           |
| Bad Neuenahr-Ahrweiler Airfield                                          |
| Bad Drkheim Airport                                                      |
| Portland Troutdale Airport                                               |
| Portland Hillsboro Airport                                               |
| One Police Plaza Heliport                                                |
| Leverkusen Airport                                                       |
| Wershofen/Eifel Airfield                                                 |
| Khost Airport                                                            |
| Namtu Airport                                                            |
| Bend Municipal Airport                                                   |
| Christmas Valley Airport                                                 |
| Burns Municipal Airport                                                  |
| Prineville Airport                                                       |
| Red Bluff Municipal Airport                                              |
| Marin County Airport - Gnoss Field                                       |
| Lake County Airport                                                      |
| Tillamook Airport                                                        |
| Ontario Municipal Airport                                                |
| Columbia Gorge Regional the Dalles Municipal Airport                     |
| Montgomery County Airpark                                                |
| Sharana Airstrip                                                         |
| Pembroke Airport                                                         |
| Tsumeb Airport                                                           |
| Suffield Heliport                                                        |
| Blumenau Airport                                                         |
| Bolshoye Gryzlovo Airfield                                               |
| Charlevoix Municipal Airport                                             |
| Mykines Heliport                                                         |
| Cornwall Regional Airport                                                |
| Seppe Airfield                                                           |
| St Stephan Airport                                                       |
| Zona da Mata Regional Airport                                            |
| IAR Gimbav Heliport                                                      |
| Flagler Executive Airport                                                |
| Morrisville Stowe State Airport                                          |
| Dallas Executive Airport                                                 |
| Como (Idroscalo - Water Ad) Hidroport                                    |
| Krainiy Airport                                                          |
| Westerly State Airport                                                   |
| Block Island State Airport                                               |
| Nightmute Airport                                                        |
| Toksook Bay Airport                                                      |
| Ittoqqortoormiit Heliport                                                |
| Vinnytsia/Gavyryshivka Airport                                           |
| Decatur County Industrial Air Park                                       |
| La Romaine Airport                                                       |
| Kegaska Airport                                                          |
| Black Tickle Airport                                                     |
| Silver Springs Airport                                                   |
| Whiteman Airport                                                         |
| Madera Municipal Airport                                                 |
| Trail Airport                                                            |
| Victoria Airport                                                         |
| Old Arctic Bay Airport                                                   |
| Birchwood Airport                                                        |
| Grand-Santi Airport                                                      |
| Maripasoula Airport                                                      |
| Saint-Laurent-du-Maroni Airport                                          |
| Kanas Airport                                                            |
| Capurgan Airport                                                         |
| Sohag International Airport                                              |
| Presidente General Don Oscar D. Gestido International Airport            |
| Patos de Minas Airport                                                   |
| Bauru - Arealva Airport                                                  |
| Ourilndia do Norte Airport                                               |
| Redeno Airport                                                           |
| So Flix do Xingu Airport                                                 |
| Bonito Airport                                                           |
| So Flix do Araguaia Airport                                              |
| Caador Airport                                                           |
| Carauari Airport                                                         |
| Urucu Airport                                                            |
| Eirunep Airport                                                          |
| Concrdia Airport                                                         |
| Francisco Beltro Airport                                                 |
| Confresa Airport                                                         |
| Apalachicola Regional Airport                                            |
| Umuarama Airport                                                         |
| Diamantina Airport                                                       |
| Fonte Boa Airport                                                        |
| Senadora Eunice Micheles Airport                                         |
| Humait Airport                                                           |
| Tapuruquara Airport                                                      |
| Oriximin Airport                                                         |
| Hotel Transamrica Airport                                                |
| Telfer Airport                                                           |
| Gazipaa Airport                                                          |
| Shank Air Base                                                           |
| Douglas Municipal Airport                                                |
| St Lucie County International Airport                                    |
| Taunton Municipal King Field                                             |
| Plymouth Municipal Airport                                               |
| Quonset State Airport                                                    |
| Norwood Memorial Airport                                                 |
| Westfield-Barnes Regional Airport                                        |
| Windham Airport                                                          |
| Orange County Airport                                                    |
| Capital City Airport                                                     |
| Marshfield Municipal George Harlow Field                                 |
| Danbury Municipal Airport                                                |
| Boire Field                                                              |
| Lawrence Municipal Airport                                               |
| Waterbury Oxford Airport                                                 |
| Fitchburg Municipal Airport                                              |
| Earl L. Small Jr. Field/Stockmar Airport                                 |
| Cartersville Airport                                                     |
| Centre-Piedmont-Cherokee County Regional Airport                         |
| Richard B Russell Airport                                                |
| Northeast Alabama Regional Airport                                       |
| Knoxville Downtown Island Airport                                        |
| Barrow County Airport                                                    |
| Plantation Airpark                                                       |
| Dalton Municipal Airport                                                 |
| West Georgia Regional O V Gray Field                                     |
| LaGrange Callaway Airport                                                |
| Baldwin County Regional Airport                                          |
| Harris County Airport                                                    |
| Peachtree City Falcon Field                                              |
| Lee Gilmer Memorial Airport                                              |
| Harry Clever Field                                                       |
| Darlington County Airport                                                |
| Hilton Head Airport                                                      |
| Daniel Field                                                             |
| Foothills Regional Airport                                               |
| Pike County-Hatcher Field                                                |
| Mallards Landing Airport                                                 |
| Toccoa Airport - R.G. Letourneau Field                                   |
| Compton Abbas Aerodrome                                                  |
| Suprunovka Airport                                                       |
| Aweil Airport                                                            |
| Wau Airport                                                              |
| Humera Airport                                                           |
| Moyale Airport                                                           |
| Zagora Airport                                                           |
| Yengema Airport                                                          |
| Gbangbatok Airport                                                       |
| Turukhansk Airport                                                       |
| Podkamennaya Tunguska Airport                                            |
| Fort Worth Alliance Airport                                              |
| East Troy Municipal Airport                                              |
| Kolpashevo Airport                                                       |
| Ali Al Salem Air Base                                                    |
| Renmark Airport                                                          |
| Leigh Creek Airport                                                      |
| Warburton Airport                                                        |
| Cunderdin Airport                                                        |
| Rottnest Island Airport                                                  |
| Forrest Airport                                                          |
| Ballarat Airport                                                         |
| Keewaywin Airport                                                        |
| Marathon Airport                                                         |
| Hearst Ren Fontaine Municipal Airport                                    |
| Hornepayne Municipal Airport                                             |
| Kirkland Lake Airport                                                    |
| Manitouwadge Airport                                                     |
| Wawa Airport                                                             |
| Manitoulin East Municipal Airport                                        |
| Slate Falls Airport                                                      |
| Collingwood Airport                                                      |
| Brantford Municipal Airport                                              |
| Lawrence Municipal Airport                                               |
| Wellington Municipal Airport                                             |
| Pompano Beach Airpark                                                    |
| Mallacoota Airport                                                       |
| Majeed Bin Abdulaziz Airport                                             |
| Shelby County Airport                                                    |
| Yuendumu Airport                                                         |
| Sky Ranch At Carefree Airport                                            |
| Lombok International Airport                                             |
| One Hundred Mile House Airport                                           |
| South Cariboo Region / 108 Mile Airport                                  |
| Glasgow City Heliport                                                    |
| Yarram Airport                                                           |
| Handan Airport                                                           |
| Indianapolis Metropolitan Airport                                        |
| London-Corbin Airport/Magee Field                                        |
| Simmons Army Air Field                                                   |
| Modlin Airport                                                           |
| Jixi Xingkaihu Airport                                                   |
| Jeongseok Airport                                                        |
| Gimli Industrial Park Airport                                            |
| Matheson Island Airport                                                  |
| Tura Mountain Airport                                                    |
| Beloyarskiy Airport                                                      |
| John H Batten Airport                                                    |
| Cesar Lim Rodriguez Airport                                              |
| Gera-Leumnitz Airfield                                                   |
| Kasimovo Airfield                                                        |
| Terlet Glider Field                                                      |
| Shigatse Air Base                                                        |
| Redlands Municipal Airport                                               |
| Flabob Airport                                                           |
| Tacoma Narrows Airport                                                   |
| Oerlinghausen Airport                                                    |
| Jack Edwards Airport                                                     |
| General Villamil Airport                                                 |
| Balzers Heliport                                                         |
| Flugplatz Punitz                                                         |
| Khmelnytskyi Airport                                                     |
| Hiroshimanishi Airport                                                   |
| Yalata Mission Airport                                                   |
| Hazleton Municipal Airport                                               |
| Greater Cumberland Regional Airport                                      |
| Sugar Loaf Shores Airport                                                |
| Wyndham Airport                                                          |
| Bob Quinn Lake Airport                                                   |
| Msembe Airport                                                           |
| Grabtsevo Airport                                                        |
| Tri-County Regional Airport                                              |
| Price County Airport                                                     |
| Monroe Municipal Airport                                                 |
| Joliet Regional Airport                                                  |
| Illinois Valley Regional Airport-Walter A Duncan Field                   |
| Jackson County Reynolds Field                                            |
| Fuerstenwalde Airport                                                    |
| Eberswalde-Finow Airport                                                 |
| Joseph A. Hardy Connellsville Airport                                    |
| Bedford County Airport                                                   |
| Wings Field                                                              |
| Okeechobee County Airport                                                |
| Sebring Regional Airport                                                 |
| Avon Park Executive Airport                                              |
| Winter Haven Regional Airport - Gilbert Field                            |
| Zephyrhills Municipal Airport                                            |
| Ocala International Airport - Jim Taylor Field                           |
| Jesup Wayne County Airport                                               |
| Madison Municipal Airport                                                |
| Newnan Coweta County Airport                                             |
| Thomson-McDuffie County Airport                                          |
| Aiken Regional Airport                                                   |
| Woodward Field                                                           |
| Lumberton Regional Airport                                               |
| Moore County Airport                                                     |
| Richmond County Airport                                                  |
| Baraboo Wisconsin Dells Airport                                          |
| Statesville Regional Airport                                             |
| Burlington Municipal Airport                                             |
| William T. Piper Memorial Airport                                        |
| Zelienople Municipal Airport                                             |
| Lorain County Regional Airport                                           |
| Burke Lakefront Airport                                                  |
| Chautauqua County-Dunkirk Airport                                        |
| South Jersey Regional Airport                                            |
| Linden Airport                                                           |
| Tri State Steuben County Airport                                         |
| Warsaw Municipal Airport                                                 |
| Van Wert County Airport                                                  |
| Brooks Field                                                             |
| Genesee County Airport                                                   |
| Clearwater Air Park                                                      |
| Orlampa Inc Airport                                                      |
| Chicago Meigs Airport                                                    |
| Pickens County Airport                                                   |
| Saarmund Airport                                                         |
| Grand Strand Airport                                                     |
| Lansing Municipal Airport                                                |
| Ramona Airport                                                           |
| Pont Sur Yonne Airfield                                                  |
| St Florentin Cheu Airfield                                               |
| Saulieu Liernais Airfield                                                |
| Olten Airport                                                            |
| Buochs Airport                                                           |
| Ambri Airport                                                            |
| Lodrino Air Base                                                         |
| Roudnice Airport                                                         |
| Usti Nad Labem Airfield                                                  |
| Mauterndorf Airport                                                      |
| Ntsch Im Gailtal Airport                                                 |
| Sinsheim Airfield                                                        |
| Weinheim/Bergstrae Airport                                               |
| Meaux Esbly Airport                                                      |
| Chteau-Thierry - Belleau Airfield                                        |
| Branch County Memorial Airport                                           |
| Wilkes Barre Wyoming Valley Airport                                      |
| Willoughby Lost Nation Municipal Airport                                 |
| Taoyuan Air Base                                                         |
| Uummannaq Heliport                                                       |
| Bayannur Tianjitai Airport                                               |
| Capital City Airport                                                     |
| Auburn Lewiston Municipal Airport                                        |
| Inowroclaw Military Air Base                                             |
| Pruszcz Gdanski Air Base                                                 |
| Bloyer Field                                                             |
| Marco Island Executive Airport                                           |
| Drummond Island Airport                                                  |
| Gladwin Zettel Memorial Airport                                          |
| South Haven Area Regional Airport                                        |
| Marshfield Municipal Airport                                             |
| Alexander Field South Wood County Airport                                |
| Clinton Municipal Airport                                                |
| Beverly Municipal Airport                                                |
| Nagaur Airport                                                           |
| Ostafyevo International Airport                                          |
| Trois-Rivires Airport                                                    |
| Poplar Bluff Municipal Airport                                           |
| Somerset Airport                                                         |
| Eastport Municipal Airport                                               |
| Keokuk Municipal Airport                                                 |
| Perth/Scone Airport                                                      |
| Caernarfon Airport                                                       |
| Grefrath-Niershorst Airport                                              |
| St Paul Downtown Holman Field                                            |
| Sderhamn Airport                                                         |
| Newcastle Aerodrome                                                      |
| Saravane Airport                                                         |
| Segeletz Airport                                                         |
| Fuentemilanos Airport                                                    |
| Akeno Airport                                                            |
| Ust-Kamchatsk Airport                                                    |
| Oconomowoc Airport                                                       |
| Kozyrevsk Airport                                                        |
| Dikson Airport                                                           |
| Beverley Airport                                                         |
| Bantry Aerodrome                                                         |
| Aliwal North Airport                                                     |
| Alkantpan Copper Airport                                                 |
| Alldays Airport                                                          |
| Bredasdorp Airport                                                       |
| Butler Co Regional Airport - Hogan Field                                 |
| Bungoma Airport                                                          |
| Bura East Airport                                                        |
| Busia Airport                                                            |
| Embu Airport                                                             |
| Garba Tula Airport                                                       |
| Garissa Airport                                                          |
| Hola Airport                                                             |
| Homa Bay Airport                                                         |
| Isiolo Airport                                                           |
| Kericho Airport                                                          |
| Kilaguni Airport                                                         |
| Antsirabe Airport                                                        |
| Bekily Airport                                                           |
| Ust-Tsylma Airport                                                       |
| Gorno-Altaysk Airport                                                    |
| Fond du Lac County Airport                                               |
| Waupaca Municipal Airport                                                |
| Stevens Point Municipal Airport                                          |
| Mys Shmidta Airport                                                      |
| Moma Airport                                                             |
| Luce County Airport                                                      |
| Peenemnde Airport                                                        |
| Graszka Airport                                                          |
| Nusawiru Airport                                                         |
| Galion Municipal Airport                                                 |
| Tiputini Airport                                                         |
| Rio Amazonas Airport                                                     |
| ClarksvilleMontgomery County Regional Airport                            |
| Lompoc Airport                                                           |
| Chester County G O Carlson Airport                                       |
| Bost Airport                                                             |
| Lankaran International Airport                                           |
| Gabala International Airport                                             |
| Zaqatala International Airport                                           |
| Lake Placid Airport                                                      |
| Typliy Klyuch Airport                                                    |
| Magan Airport                                                            |
| Qianjiang Wulingshan Airport                                             |
| Cooma Hospital Helipad                                                   |
| Lima Allen County Airport                                                |
| Sondok Airport                                                           |
| Malcolm McKinnon Airport                                                 |
| Beaver County Airport                                                    |
| Georgetown County Airport                                                |
| Hardwick Field                                                           |
| Renton Municipal Airport                                                 |
| Brackett Field                                                           |
| Cross City Airport                                                       |
| Oconee County Regional Airport                                           |
| Beech Factory Airport                                                    |
| Tabing Airport                                                           |
| Tom B. David Field                                                       |
| Habersham County Airport                                                 |
| Georgetown Municipal Airport                                             |
| Old Rhinebeck Airport                                                    |
| Duxford Aerodrome                                                        |
| Sidney Municipal-Lloyd W Carr Field                                      |
| Newnan Hospital Heliport                                                 |
| Great Keppel Is Airport                                                  |
| Roper Bar Airport                                                        |
| Mount Garnet Airport                                                     |
| Innisfail Airport                                                        |
| Kalaeloa Airport                                                         |
| Bamiyan Airport                                                          |
| Changbaishan Airport                                                     |
| Orang Airport                                                            |
| Moomba Airport                                                           |
| Lublin Airport                                                           |
| Iosco County Airport                                                     |
| Madison County Executive Airport-Tom Sharp Jr Field                      |
| Leesburg Executive Airport                                               |
| Anoka County-Blaine (Janes Field) Airport                                |
| Robinson Crusoe Airport                                                  |
| Villa Airport                                                            |
| Lingling Airport                                                         |
| Loinj Island Airport                                                     |
| Onslow Airport                                                           |
| Theodore Airport                                                         |
| Williamson Sodus Airport                                                 |
| Fairoaks Airport                                                         |
| Boulder Municipal Airport                                                |
| Neustadt-Glewe Airport                                                   |
| Goetsenhoven Air Base                                                    |
| Tutow Airport                                                            |
| Bremgarten Airport                                                       |
| Bitburg Airport                                                          |
| Palo Alto Airport of Santa Clara County                                  |
| Ust-Nera Airport                                                         |
| Letit Vysok Mto                                                          |
| Spa (la Sauvenire) Airfield                                              |
| Falcon Field                                                             |
| Coolidge Municipal Airport                                               |
| Cottonwood Airport                                                       |
| Namur-Suarle Airfield                                                    |
| Kiewit Airfield Hasselt                                                  |
| Ak-Chin Regional Airport                                                 |
| Wickenburg Municipal Airport                                             |
| Yangzhou Taizhou Airport                                                 |
| Oakland County International Airport                                     |
| Kissidougou Airport                                                      |
| Dillant Hopkins Airport                                                  |
| Tianshui Maijishan Airport                                               |
| Kawama Airport                                                           |
| Kooddoo Airport                                                          |
| Glasgow Industrial Airport                                               |
| Rochester Airport                                                        |
| Termas de Ro Hondo international Airport                                 |
| Keetmanshoop Airport                                                     |
| Kangding Airport                                                         |
| Velikiy Ustyug Airport                                                   |
| Iowa City Municipal Airport                                              |
| Turpan Jiaohe Airport                                                    |
| Lorenzo Airport                                                          |
| Windom Municipal Airport                                                 |
| Longview Ranch Airport                                                   |
| Rothera Research Station                                                 |
| Sortavala Airport                                                        |
| Lee Airport                                                              |
| Cuamba Airport                                                           |
| Bodaybo Airport                                                          |
| Zhytomyr Airport                                                         |
| Paluknys Airport                                                         |
| Mattala Rajapaksa International Airport                                  |
| Pecos Municipal Airport                                                  |
| Hattiesburg Bobby L Chain Municipal Airport                              |
| Botucatu - Tancredo de Almeida Neves Airport                             |
| Base Area Airport                                                        |
| Mrio Pereira LopesSo Carlos Airport                                      |
| Chan Gurney Municipal Airport                                            |
| Sir Bani Yas Airport                                                     |
| Bromont (Roland Desourdy) Airport                                        |
| Beccles Airport                                                          |
| Kratie Airport                                                           |
| Caldera Airport                                                          |
| San Pedro de Atacama Airport                                             |
| Copacabana Airport                                                       |
| Guyuan Liupanshan Airport                                                |
| RAF Brawdy                                                               |
| Changhai Airport                                                         |
| Redhill Aerodrome                                                        |
| Jiagedaqi Airport                                                        |
| Chinchilla Airport                                                       |
| Hayward Executive Airport                                                |
| Motueka Airport                                                          |
| Shute Harbour Airport                                                    |
| Enstone Aerodrome                                                        |
| Ann Arbor Municipal Airport                                              |
| Shepparton Airport                                                       |
| Temora Airport                                                           |
| Gayndah Airport                                                          |
| Wilcannia Airport                                                        |
| Ivanhoe Airport                                                          |
| Menindee Airport                                                         |
| Pooncarie Airport                                                        |
| Tilpa Airport                                                            |
| Reichenbach Air Base                                                     |
| Bijie Feixiong Airport                                                   |
| Lensk Airport                                                            |
| Kavalerovo Airport                                                       |
| Idr Airport                                                              |
| anlurfa GAP Airport                                                      |
| Zafer Airport                                                            |
| Velikiye Luki Airport                                                    |
| Yelahanka Air Force Station                                              |
| Yeltsovka Airport                                                        |
| Kodinsk Airport                                                          |
| Lake Macquarie Airport                                                   |
| Henry County Airport                                                     |
| Brampton Island Airport                                                  |
| Alameda Naval Air Station                                                |
| Endelave Flyveplads                                                      |
| St. Johann In Tirol Airport                                              |
| Thalmssing-Waizenhofen Airport                                           |
| Cochrane Airport                                                         |
| Estadual Arthur Siqueira Airport                                         |
| Busselton Regional Airport                                               |
| Srednekolymsk Airport                                                    |
| Comarapa Airport                                                         |
| Inverell Airport                                                         |
| Glen Innes Airport                                                       |
| Ansbach-Petersdorf Airport                                               |
| Immokalee Regional Airport                                               |
| Maranggo Airport                                                         |
| Rancho San Simeon Airport                                                |
| Yichun Mingyueshan Airport                                               |
| Dinwiddie County Airport                                                 |
| Kasongo Airport                                                          |
| McMurdo Station Pegasus Field                                            |
| Klatovy Airport                                                          |
| Sheboygan County Memorial Airport                                        |
| Fortescue - Dave Forrest Aerodrome                                       |
| Kangel Danda Airport                                                     |
| Bajura Airport                                                           |
| Chara Airport                                                            |
| Herning Airport                                                          |
| Oberschleiheim Airfield                                                  |
| Pinal Airpark                                                            |
| Glendale Municipal Airport                                               |
| Safford Regional Airport                                                 |
| Verden-Scharnhorst Airfield                                              |
| Solomon Airport                                                          |
| Nittenau-Bruck Airport                                                   |
| Kerama Airport                                                           |
| Americana Airport                                                        |
| Ekibastuz Airport                                                        |
| Adamovka                                                                 |
| Kvarkeno                                                                 |
| Sikeston Memorial Municipal Airport                                      |
| Tetiaroa Airport                                                         |
| Floyd Bennett Memorial Airport                                           |
| Saratoga County Airport                                                  |
| Crystal River Airport                                                    |
| Martin State Airport                                                     |
| Lincoln Regional Karl Harder Field                                       |
| Fostoria Metropolitan Airport                                            |
| Eastern Slopes Regional Airport                                          |
| Coral Creek Airport                                                      |
| Lakefront Airport                                                        |
| Coeur D'Alene - Pappy Boyington Field                                    |
| Beaumont Municipal Airport                                               |
| Vermilion Regional Airport                                               |
| Coonabarabran Airport                                                    |
| Space Coast Regional Airport                                             |
| Bumi Airport                                                             |
| Warnervale Airport                                                       |
| Bouarfa Airport                                                          |
| Nyeri Airport                                                            |
| Andrau Airpark                                                           |
| Flying Cloud Airport                                                     |
| Likoma Island Airport                                                    |
| Johnson County Executive Airport                                         |
| Sigiriya Air Force Base                                                  |
| Neumnster Airport                                                        |
| Tak Airport                                                              |
| Barrie-Orillia (Lake Simcoe Regional Airport)                            |
| Huronia Airport                                                          |
| Markham Airport                                                          |
| Stanhope Municipal Airport                                               |
| Kawartha Lakes (Lindsay) Airport                                         |
| Niagara District Airport                                                 |
| Edenvale Aerodrome                                                       |
| Orillia Airport                                                          |
| Holland Landing Airpark                                                  |
| Parry Sound Area Municipal Airport                                       |
| Hanover / Saugeen Municipal Airport                                      |
| Brandywine Airport                                                       |
| Manassas Regional Airport/Harry P. Davis Field                           |
| Texas Gulf Coast Regional Airport                                        |
| Bubovice Airport                                                         |
| Rakkestad Astorp Airport                                                 |
| Bingl eltiksuyu Airport                                                  |
| Kastamonu Airport                                                        |
| Elstree Airfield                                                         |
| Sandtoft Airfield                                                        |
| Torit Airport                                                            |
| Shelby County Airport                                                    |
| Lliang Airport                                                           |
| Daocheng Yading Airport                                                  |
| Gannan Xiahe Airport                                                     |
| Vngs Airport                                                             |
| Comiso Airport                                                           |
| Enumclaw Airport                                                         |
| Markovo Airport                                                          |
| Seymchan Airport                                                         |
| Zyryanka Airport                                                         |
| Susuman Airport                                                          |
| Ust-Maya Airport                                                         |
| Aldan Airport                                                            |
| Olyokminsk Airport                                                       |
| Vitim Airport                                                            |
| Pellworm Field                                                           |
| Xinyuan Nalati Airport                                                   |
| Port Alsworth Airport                                                    |
| Fontaine Airport                                                         |
| Fairfield County Airport                                                 |
| Obock Airport                                                            |
| Tadjoura Airport                                                         |
| Santa Cruz del Quiche Airport                                            |
| Norfjrur Airport                                                         |
| Bursa Airport                                                            |
| Skyhaven Airport                                                         |
| Waris Airport                                                            |
| Newton City-County Airport                                               |
| La Fert Alais Airfield                                                   |
| Bairnsdale Airport                                                       |
| Taszr Air Base                                                           |
| Fort Bridger Airport                                                     |
| Prosser Airport                                                          |
| Chehalis Centralia Airport                                               |
| Desert Aire Regional Airport                                             |
| Evanston-Uinta County Airport-Burns Field                                |
| Sabetha Municipal Airport                                                |
| Mt Pleasant Regional-Faison field                                        |
| Jimmy Carter Regional Airport                                            |
| Weedon Field                                                             |
| Saluda County Airport                                                    |
| Dare County Regional Airport                                             |
| Auburn University Regional Airport                                       |
| Tri Cities Airport                                                       |
| Bessemer Airport                                                         |
| Colorado Springs East Airport                                            |
| Crystal Airport                                                          |
| Clarke County Airport                                                    |
| W H 'Bud' Barron Airport                                                 |
| Pukarua Airport                                                          |
| Kabale Airport                                                           |
| Guatuso Airport                                                          |
| Central Bolvar Airport                                                   |
| Corvallis Municipal Airport                                              |
| Tuzla Romania Airport                                                    |
| El Almendro Airport                                                      |
| San Agustin Airport                                                      |
| Samambaia Heliport                                                       |
| Fazenda Campo Verde Airport                                              |
| Prominent Hill Airport                                                   |
| Cowra Airport                                                            |
| Coral Bay Airport                                                        |
| Ogden Hinckley Airport                                                   |
| Lake Country Regional Airport                                            |
| Robert S Kerr Airport                                                    |
| Colorado Plains Regional Airport                                         |
| Sanderson Field                                                          |
| Napakiak Airport                                                         |
| Napaskiak Airport                                                        |
| Tok Airport                                                              |
| Bedwell Harbour Seaplane Base                                            |
| Washabo Airport                                                          |
| Popham Airfield                                                          |
| Causey Airport                                                           |
| Abaco I Walker C Airport                                                 |
| Black Point Airstrip                                                     |
| Bartica A Airport                                                        |
| Doylestown Airport                                                       |
| Cape Town Waterfort Heliport                                             |
| Tingo Maria Airport                                                      |
| Plnio Alarcom Airport                                                    |
| Zhangye Ganzhou Airport                                                  |
| Cacoal Airport                                                           |
| Warren Field                                                             |
| Hyde County Airport                                                      |
| Mocopulli Airport                                                        |
| Stillwater Regional Airport                                              |
| Okmulgee Regional Airport                                                |
| Cushing Municipal Airport                                                |
| Clinton Sherman Airport                                                  |
| Strother Field                                                           |
| Wiley Post Airport                                                       |
| Shreveport Downtown Airport                                              |
| Stephenville Clark Regional Airport                                      |
| Perry Municipal Airport                                                  |
| Hamilton Municipal Airport                                               |
| Ada Regional Airport                                                     |
| Mesquite Metro Airport                                                   |
| Denton Municipal Airport                                                 |
| Austin Executive Airport                                                 |
| Lago Vista Tx Rusty Allen Airport                                        |
| Brenham Municipal Airport                                                |
| Lakeway Airpark                                                          |
| Iraan Municipal Airport                                                  |
| Kestrel Airpark                                                          |
| Elliot Lake Municipal Airport                                            |
| Wilkes County Airport                                                    |
| Charleston Executive Airport                                             |
| Danville Regional Airport                                                |
| Brookneal/Campbell County Airport                                        |
| Yerbogachen Airport                                                      |
| Cheraw Municipal Airport/Lynch Bellinger Field                           |
| Wauchula Municipal Airport                                               |
| Lilydale Airport                                                         |
| Beni Mellal Airport                                                      |
| rnak erafettin Eli Airport                                               |
| Suntar Airport                                                           |
| Tazadit Airport                                                          |
| Asaba International Airport                                              |
| Akwa Ibom International Airport                                          |
| Kasama Airport                                                           |
| Mbeya Airport                                                            |
| Mpanda Airport                                                           |
| Songea Airport                                                           |
| Morogoro Airport                                                         |
| Jiuhuashan Airport                                                       |
| Anshan Air Base                                                          |
| Saertu Airport                                                           |
| Zunyi Xinzhou Airport                                                    |
| Conway Horry County Airport                                              |
| Lindu Airport                                                            |
| Anshun Huangguoshu Airport                                               |
| Sikasso Airport                                                          |
| Toowoomba Wellcamp Airport                                               |
| Tonghua Sanyuanpu Airport                                                |
| Suzhou Guangfu Airport                                                   |
| City Airport Manchester                                                  |
| Sleap Airport                                                            |
| Tatenhill Airfield                                                       |
| Full Sutton Airfield                                                     |
| Sherburn-In-Elmet Airfield                                               |
| Beringin Airport                                                         |
| Mulia Airport                                                            |
| Stenkol Airport                                                          |
| Wasior Airport                                                           |
| Silangit Airport                                                         |
| Lasikin Airport                                                          |
| Seunagan Airport                                                         |
| Betoambari Airport                                                       |
| Kao Airport                                                              |
| Melangguane Airport                                                      |
| Sanggata/Sangkimah Airport                                               |
| Muara Bungo Airport                                                      |
| Selayar/Aroepala Airport                                                 |
| Illaga Airport                                                           |
| Oksibil Airport                                                          |
| Kokonau Airport                                                          |
| Clermont Airport                                                         |
| Warrnambool Airport                                                      |
| Richmond Airport                                                         |
| RAAF Base Curtin                                                         |
| Kualanamu International Airport                                          |
| Gratiot Community Airport                                                |
| Asheboro Regional Airport                                                |
| Seosan Air Base                                                          |
| Henderson Field                                                          |
| Emporia Greensville Regional Airport                                     |
| San Gabriel Valley Airport                                               |
| Farah Airport                                                            |
| Pasighat Airport                                                         |
| Kee Field                                                                |
| Kramatorsk Airport                                                       |
| Kautokeino Air Base                                                      |
| Lille/Marcq-en-Baroeul Airport                                           |
| Kawass Airport                                                           |
| Stinson Municipal Airport                                                |
| Sallisaw Municipal Airport                                               |
| Jasper County Airport-Bell Field                                         |
| El Dorado Springs Memorial Airport                                       |
| Marfa Municipal Airport                                                  |
| Alpine Casparis Municipal Airport                                        |
| Bubaque Airport                                                          |
| Chichen Itza International Airport                                       |
| Bunbury Airport                                                          |
| Cable Airport                                                            |
| Mount Sterling Montgomery County Airport                                 |
| Elkhart Municipal Airport                                                |
| Nappanee Municipal Airport                                               |
| Jim Hamilton L.B. Owens Airport                                          |
| Grove Municipal Airport                                                  |
| Mc Pherson Airport                                                       |
| Donaldson Field Airport                                                  |
| Perry Houston County Airport                                             |
| Hartsville Regional Airport                                              |
| Horace Williams Airport                                                  |
| San Cristobal de las Casas Airport                                       |
| Dunnville Airport                                                        |
| Brunswick County Airport                                                 |
| Chesterfield County Airport                                              |
| Atherton Airport                                                         |
| Bagdarin Airport                                                         |
| Scarlett Martinez International Airport                                  |
| Henderson Oxford Airport                                                 |
| Leesburg International Airport                                           |
| Semyazino Airport                                                        |
| Witberg Tswalu Airport                                                   |
| Mana Pools Airport                                                       |
| Pouso Alegre Airport                                                     |
| Brigadeiro Cabral Airport                                                |
| Yeysk Airport                                                            |
| Berdyansk Airport                                                        |
| Blimbingsari Airport                                                     |
| Erenhot Saiwusu International Airport                                    |
| Shobdon Aerodrome                                                        |
| Chino Airport                                                            |
| Kamigoto Airport                                                         |
| Ojika Airport                                                            |
| Chofu Airport                                                            |
| Hateruma Airport                                                         |
| Madison County Airport                                                   |
| Las Brujas Airport                                                       |
| Digby (General Hospital) Heliport                                        |
| Thun Airport                                                             |
| Lavrentiya Airport                                                       |
| Paso Robles Municipal Airport                                            |
| N 104 Helipad                                                            |
| Beijing Daxing International Airport                                     |
| Kymi Airport                                                             |
| Half Moon Bay Airport                                                    |
| Hechi Jinchengjiang Airport                                              |
| Kadina Airport                                                           |
| General WM J Fox Airfield                                                |
| Coondewanna Airport                                                      |
| Guarapari Airport                                                        |
| Ubatuba Airport                                                          |
| Ali Air Base                                                             |
| Ota Air Base                                                             |
| Borroloola Airport                                                       |
| Elsenthal Grafe Airport                                                  |
| Newtownards Airport                                                      |
| Lashenden (Headcorn) Airfield                                            |
| Panshanger Aerodrome                                                     |
| Thurrock Airfield                                                        |
| Stapleford Aerodrome                                                     |
| HAL Airport                                                              |
| Chichester/Goodwood Airport                                              |
| Omarama Glider Airport                                                   |
| Haast Aerodrome                                                          |
| Meschede-Schren Airport                                                  |
| Jumandy Airport                                                          |
| Morro da Urca Heliport                                                   |
| Dongji Aiport                                                            |
| Skvoy Heliport                                                           |
| Stra Dmun Heliport                                                       |
| Frooba Heliport                                                          |
| Person County Airport                                                    |
| Zulu Inyala Airport                                                      |
| Liupanshui Yuezhao Airport                                               |
| Kaili Airport                                                            |
| Shennongjia Hongping Airport                                             |
| Zhangjiakou Ningyuan Airport                                             |
| Arxan Yi'ershi Airport                                                   |
| Hengyang Nanyue Airport                                                  |
| Hongyuan Airport                                                         |
| Wonsan Kalma International Airport                                       |
| Mestia Queen Tamar Airport                                               |
| Magas Airport                                                            |
| Talladega Municipal Airport                                              |
| Greenville Downtown Airport                                              |
| Mankato Regional Airport                                                 |
| Captain Auguste George Airport                                           |
| Troy Municipal Airport at N Kenneth Campbell Field                       |
| Merkel Field Sylacauga Municipal Airport                                 |
| Enterprise Municipal Airport                                             |
| Ryan Field                                                               |
| Efogi Airport                                                            |
| Kagi Airport                                                             |
| Nadunumu Airport                                                         |
| Bodinumu Airport                                                         |
| Thomas C Russell Field                                                   |
| Port Keats Airport                                                       |
| Garden Point Airport                                                     |
| Stade Airport                                                            |
| Meriden Markham Municipal Airport                                        |
| Flinders Island Airport                                                  |
| Luzern-Beromunster Airport                                               |
| La Grand'combe Airport                                                   |
| Hamad International Airport                                              |
| Fort Mackay / Horizon Airport                                            |
| Canmore Municipal Heliport                                               |
| Krasnokamensk Airport                                                    |
| Ridgely Airpark                                                          |
| New Castle Henry Co. Municipal Airport                                   |
| Scott City Municipal Airport                                             |
| Brewster Field                                                           |
| Pratt Regional Airport                                                   |
| Yubileyniy Airfield                                                      |
| Wahoo Municipal Airport                                                  |
| Jim Kelly Field                                                          |
| Sublette Municipal Airport                                               |
| Council Bluffs Municipal Airport                                         |
| Kokomo Municipal Airport                                                 |
| Neodesha Municipal Airport                                               |
| King Ranch Airport                                                       |
| Elkhart Morton County Airport                                            |
| Front Range Airport                                                      |
| Galesburg Municipal Airport                                              |
| Guymon Municipal Airport                                                 |
| Meade Municipal Airport                                                  |
| Turkey Mountain Estates Airport                                          |
| Ulysses Airport                                                          |
| Flagler Aerial Spraying Inc Airport                                      |
| Independence Municipal Airport                                           |
| Augusta Municipal Airport                                                |
| Larned Pawnee County Airport                                             |
| Lampasas Airport                                                         |
| Bay City Municipal Airport                                               |
| Cox Field                                                                |
| Coffeyville Municipal Airport                                            |
| The Farm Airport                                                         |
| GreeleyWeld County Airport                                               |
| General Dewitt Spain Airport                                             |
| Oryol Yuzhny Airport                                                     |
| Fremont Municipal Airport                                                |
| La Grande/Union County Airport                                           |
| Olsztyn-Mazury Airport                                                   |
| Pocono Mountains Municipal Airport                                       |
| Quakertown Airport                                                       |
| Banff Airport                                                            |
| Nordborg Flyveplads                                                      |
| Banning Municipal Airport                                                |
| Gieen-Ltzellinden Airport                                                |
| Tkl Airport                                                              |
| Karl Stefan Memorial Airport                                             |
| Kotido Airport                                                           |
| Kajjansi Airfield                                                        |
| Arlington Municipal Airport                                              |
| Paracatu Airport                                                         |
| Das Bandeirinhas Airport                                                 |
| Janaba Airport                                                           |
| Juscelino Kubitscheck Airport                                            |
| Cristiano Ferreira Varella Airport                                       |
| Peter O Knight Airport                                                   |
| Lure Malbouhans Air Base                                                 |
| Parati Airport                                                           |
| Umberto Modiano Airport                                                  |
| Angra dos Reis Airport                                                   |
| Itaperuna Airport                                                        |
| Maric Airport                                                            |
| Resende Airport                                                          |
| Saquarema Airport                                                        |
| Drumheller Municipal Airport                                             |
| Mwene-Ditu Airport                                                       |
| Tunta Airport                                                            |
| Ikela Airport                                                            |
| Aripuan Airport                                                          |
| Juruena Airport                                                          |
| Juna Airport                                                             |
| Vila Rica Airport                                                        |
| Incio Lus do Nascimento Airport                                          |
| Cceres Airport                                                           |
| Posto Leonardo Vilas Boas Airport                                        |
| Tangar da Serra Airport                                                  |
| Canarana Airport                                                         |
| Vila Bela da Santssima Trindade Airport                                  |
| Bumbar Airport                                                           |
| Sobral Airport                                                           |
| Arapiraca Airport                                                        |
| Cangapara Airport                                                        |
| Picos Airport                                                            |
| Beni Airport                                                             |
| Boende Airport                                                           |
| Montauk Airport                                                          |
| Porter County Municipal Airport                                          |
| Dharavandhoo Airport                                                     |
| Saumlaki/Olilit Airport                                                  |
| Cerro Largo International Airport                                        |
| Tydeo Larre Borges Airport                                               |
| Artigas International Airport                                            |
| Murray Bridge Airport                                                    |
| Horsham Airport                                                          |
| Swan Hill Airport                                                        |
| Turtle Island Seaplane Base                                              |
| Dewadaru - Kemujan Island                                                |
| Kongolo Airport                                                          |
| Attopeu Airport                                                          |
| Kahemba Airport                                                          |
| Francisco de Miranda Airport                                             |
| So Miguel do Oeste Airport                                               |
| Mason County Airport                                                     |
| Reid-Hillview Airport of Santa Clara County                              |
| Sohar Airport                                                            |
| Kadanwari Airport                                                        |
| Sawan Airport                                                            |
| Thamkharka Airport                                                       |
| Thimarafushi Airport                                                     |
| Ifuru Airport                                                            |
| Kaintiba Airport                                                         |
| Ordu Giresun Airport                                                     |
| Hakkari Yksekova Airport                                                 |
| Jelenia Gra Glider Airport                                               |
| Bathpalathang Airport                                                    |
| Sultan Bantilan Airport                                                  |
| Vuktyl Airport                                                           |
| Berezniki Airport                                                        |
| San Sebastin Airport                                                     |
| Tolwin Observatory Airport                                               |
| Tarko-Sale Airport                                                       |
| Camarillo Airport                                                        |
| Leopoldsburg Airfield                                                    |
| Jinchuan Airport                                                         |
| Omtepe Airport                                                           |
| Alashankou Bole (Bortala) airport                                        |
| Fuyun Koktokay Airport                                                   |
| Achinsk Airport                                                          |
| Linfen Qiaoli Airport                                                    |
| Hinton/Jasper-Hinton Airport                                             |
| Watsonville Municipal Airport                                            |
| Gelephu Airport                                                          |
| Hollister Municipal Airport                                              |
| Williamsburg Jamestown Airport                                           |
| Dulkaninna Airport                                                       |
| William Creek Airport                                                    |
| Kenora Seaplane Base                                                     |
| Rumbula Air Base                                                         |
| Siquijor Airport                                                         |
| Opapimiskan Lake Airport                                                 |
| Rizhao Shanzihe Airport                                                  |
| Shaxian Airport                                                          |
| Taroom Airport                                                           |
| Gelnhausen Airport                                                       |
| r Airport                                                                |
| Lauterbach Airport                                                       |
| Aschaffenburg Airport                                                    |
| Squamish Airport                                                         |
| Reichelsheim Airport                                                     |
| Marburg-Schnstadt Airport                                                |
| Lauenbrck Airport                                                        |
| Httenbusch Airport                                                       |
| Vrsar Crljenka Airport                                                   |
| Union County Airport                                                     |
| La Grande-4 Airport                                                      |
| Alert Bay Airport                                                        |
| Liverpool South Shore Regional Airport                                   |
| Nipawin Airport                                                          |
| Centralia / James T. Field Memorial Aerodrome                            |
| Blue River Airport                                                       |
| Chetwynd Airport                                                         |
| Ross River Airport                                                       |
| Dolbeau St Felicien Airport                                              |
| Amos/Magny Airport                                                       |
| Goderich Airport                                                         |
| Hope Airport                                                             |
| Haines Junction Airport                                                  |
| Digby / Annapolis Regional Airport                                       |
| Fort Liard Airport                                                       |
| Key Lake Airport                                                         |
| Leaf Rapids Airport                                                      |
| Matane Airport                                                           |
| Charlevoix Airport                                                       |
| Nejanilini Lake Airport                                                  |
| Owen Sound / Billy Bishop Regional Airport                               |
| Port Hawkesbury Airport                                                  |
| St Thomas Municipal Airport                                              |
| Ottawa / Rockcliffe Airport                                              |
| Ottawa / Carp Airport                                                    |
| Smiths Falls-Montague (Russ Beach) Airport                               |
| St Leonard Airport                                                       |
| Virden/R.J. (Bob) Andrew Field Regional Aerodrome                        |
| Vernon Airport                                                           |
| Beaver Creek Airport                                                     |
| Shuswap Regional Airport                                                 |
| Kelsey Airport                                                           |
| Pukatawagan Airport                                                      |
| Grand Forks Airport                                                      |
| Jenpeg Airport                                                           |
| Thicket Portage Airport                                                  |
| Pikwitonei Airport                                                       |
| Poplar River Airport                                                     |
| Pincher Creek Airport                                                    |
| Stewart Airport                                                          |
| Ignace Municipal Airport                                                 |
| Neubrandenburg Airport                                                   |
| Airport Bamberg-Breitenau                                                |
| Zerbst Airport                                                           |
| RAF Spadeadam                                                            |
| RAF Kinloss                                                              |
| Biaa Podlaska Airfield                                                   |
| Cewice Air Base                                                          |
| Deblin Military Air Base                                                 |
| Leczyca Military Air Base                                                |
| Minsk Mazowiecki Military Air Base                                       |
| Powidz Military Air Base                                                 |
| Tomaszow Mazowiecki Military Air Base                                    |
| Bjrkvik Air Base                                                         |
| Ljungbyhed Airport                                                       |
| Daugavpils Intrenational Airport                                         |
| Jkabpils Air Base                                                        |
| Jrmala Airport                                                           |
| Kdainiai Air Base                                                        |
| Lime Acres Finsch Mine Airport                                           |
| Sua Pan Airport                                                          |
| Lusaka City Airport                                                      |
| Sumbe Airport                                                            |
| Mangochi Airport                                                         |
| Arandis Airport                                                          |
| Mariental Airport                                                        |
| Almaza Air Force Base                                                    |
| Beni Suef Air Base                                                       |
| Jiyanklis Air Base                                                       |
| Merowe New Airport                                                       |
| St Louis Regional Airport                                                |
| Chandler Field                                                           |
| Columbus Municipal Airport                                               |
| Curtis Field                                                             |
| Eastern Sierra Regional Airport                                          |
| Baker City Municipal Airport                                             |
| Miley Memorial Field                                                     |
| Ozark Regional Airport                                                   |
| W K Kellogg Airport                                                      |
| Burley Municipal Airport                                                 |
| Northeast Iowa Regional Airport                                          |
| Chanute Martin Johnson Airport                                           |
| Jacksonville Executive at Craig Airport                                  |
| Crossville Memorial Whitson Field                                        |
| Davison Army Air Field                                                   |
| Barstow Daggett Airport                                                  |
| Deming Municipal Airport                                                 |
| Desert Rock Airport                                                      |
| Needles Airport                                                          |
| Duke Field                                                               |
| Murray Field                                                             |
| San Marcos Regional Airport                                              |
| Sawyer County Airport                                                    |
| Kimble County Airport                                                    |
| Monticello Municipal Ellis Field                                         |
| Derby Field                                                              |
| Mobridge Municipal Airport                                               |
| Mc Comb/Pike County Airport/John E Lewis Field                           |
| Southern Illinois Airport                                                |
| Mc Entire Joint National Guard Base                                      |
| Brunswick Executive Airport                                              |
| Naval Station Mayport (Admiral David L. Mcdonald Field)                  |
| Orangeburg Municipal Airport                                             |
| Columbus Municipal Airport                                               |
| Ottumwa Regional Airport                                                 |
| Cairns AAF (Fort Rucker) Air Field                                       |
| Ralph Wenz Field                                                         |
| Dutchess County Airport                                                  |
| New Richmond Regional Airport                                            |
| Russell Municipal Airport                                                |
| Redwood Falls Municipal Airport                                          |
| Salinas Municipal Airport                                                |
| Sonora Municipal Airport                                                 |
| Saline County Regional Airport                                           |
| Tonopah Airport                                                          |
| Aurora State Airport                                                     |
| Ukiah Municipal Airport                                                  |
| University Oxford Airport                                                |
| Huntsville Regional Airport                                              |
| Miller Field                                                             |
| Winnemucca Municipal Airport                                             |
| West Woodward Airport                                                    |
| Cape Canaveral AFS Skid Strip                                            |
| Homey (Area 51) Airport                                                  |
| Zanesville Municipal Airport                                             |
| Gjadr Air Base                                                           |
| Kuks Airport                                                             |
| Kuov Air Base                                                            |
| Vlor Air Base                                                            |
| Haskovo Malevo Airport                                                   |
| Gabrovnitsa Air Base                                                     |
| Graf Ignatievo Air Base                                                  |
| Dolna Mitropoliya Air Base                                               |
| Balchik Air Base                                                         |
| Cuatro Vientos Airport                                                   |
| Castelln-Costa Azahar Airport                                            |
| Teruel Airport                                                           |
| Blois-Le Breuil Airport                                                  |
| Trento-Mattarello Airport                                                |
| Alessandria Airport                                                      |
| Biella-Cerrione Airport                                                  |
| Vercelli Airport                                                         |
| Casale Monferrato Airport                                                |
| Varese-Venegono Airport                                                  |
| Novi Ligure Airport                                                      |
| Sarzana-Luni Air Base                                                    |
| Cmpia Turzii Air Base                                                    |
| Mrculeti International Airport                                           |
| Cahul International Airport                                              |
| Tiraspol Airport                                                         |
| Batajnica Air Base                                                       |
| Rubelsanto Airport                                                       |
| Coronel Enrique Soto Cano Air Base                                       |
| Upala Airport                                                            |
| San Nicolas De Bari Airport                                              |
| San Julian Air Base                                                      |
| King Salman Abdulaziz Airport                                            |
| King Khaled Air Base                                                     |
| Riyadh Air Base                                                          |
| Jam Airport                                                              |
| Hamadan Air Base                                                         |
| Payam International Airport                                              |
| Ahmed Al Jaber Air Base                                                  |
| Rayak Air Base                                                           |
| Mirpur Khas Air Base                                                     |
| Minhas Air Base                                                          |
| Rafiqui Air Base                                                         |
| Faisal Air Base                                                          |
| Mushaf Air Base                                                          |
| Qayyarah West Airport                                                    |
| Al Sahra Army Air Field                                                  |
| Tall Afar Army Air Field                                                 |
| Al Taji Army Air Field                                                   |
| Ubaydah Bin Al Jarrah Airport                                            |
| Nenana Municipal Airport                                                 |
| Wasilla Airport                                                          |
| Gangshan Air Force Base                                                  |
| Asahikawa Airfield                                                       |
| Iwakuni Marine Corps Air Station                                         |
| Utsunomiya Airport                                                       |
| Jungwon Air Base/Chungju Airport                                         |
| Ie Jima Airport                                                          |
| Allah Valley Airport                                                     |
| Bislig Airport                                                           |
| Mati National Airport                                                    |
| Presidente Nstor Kirchner Regionsl Airport                               |
| Chafei Amsei Airport                                                     |
| Base de Aviao de Taubat Airport                                          |
| Barriles Airport                                                         |
| Schroeder's field                                                        |
| Chaaral Airport                                                          |
| Panguilemo Airport                                                       |
| Victoria Airport                                                         |
| Las Breas Airport                                                        |
| Gomez Nino Apiay Air Base                                                |
| Coveas Airport                                                           |
| German Olano Air Base                                                    |
| Paz De Ariporo Airport                                                   |
| Tunja Airport                                                            |
| Tres Esquinas Air Base                                                   |
| Maranda Air Base                                                         |
| Juan Simons Vela Airport                                                 |
| Shumba Airport                                                           |
| Metropolitano Airport                                                    |
| Issyk-Kul International Airport                                          |
| Kant Air Base                                                            |
| Ayaguz Airport                                                           |
| Chelkar Airport                                                          |
| Kyzyl-Syr Airport                                                        |
| Vilyuisk Airport                                                         |
| Belaya Gora Airport                                                      |
| Dzhermuk Airport                                                         |
| Kamenny Ruchey Naval Air Base                                            |
| Maygatka Airport.                                                        |
| Omsukchan Airport                                                        |
| Chaybukha Airport                                                        |
| Keperveem Airport                                                        |
| Magadan-13 Airport                                                       |
| Nikolayevsk-na-Amure Airport                                             |
| Palana Airport                                                           |
| Zheleznogorsk Airport                                                    |
| Gvardeyskoe Air Base                                                     |
| Saki Air Base                                                            |
| Dzhankoy Airport                                                         |
| Ozerne Air Base                                                          |
| Severomorsk-1 Naval Air Base                                             |
| Pushkin Airport                                                          |
| Siversky Air Base                                                        |
| Staraya Russa Air Base                                                   |
| Peski Airport                                                            |
| Baranavichi Air Base                                                     |
| Babruisk Air Base                                                        |
| Severo-Eniseysk Airport                                                  |
| Sharypovo Airport                                                        |
| Omsk Severny Airport                                                     |
| Nagurskoye                                                               |
| Svetlogorsk Airport                                                      |
| Valek Airport                                                            |
| Khanskaya Air Base                                                       |
| Dudinka Airport                                                          |
| Volgodonsk Airport                                                       |
| Tashkent East Airport                                                    |
| Myachkovo Airport                                                        |
| Tretyakovo Airport                                                       |
| Yermolino Airport                                                        |
| Inta Airport                                                             |
| Izhma Airport                                                            |
| Borisoglebskoye Airport                                                  |
| Zhigansk Airport                                                         |
| Maksimovka Airport                                                       |
| Buguruslan Severny Airport                                               |
| Bezymyanka Airfield                                                      |
| Ratnagiri Airport                                                        |
| Hingurakgoda Air Force Base                                              |
| Kazi Nazrul Islam Airport                                                |
| Ambala Air Force Station                                                 |
| Sirsa Air Force Station                                                  |
| Udhampur Air Force Station                                               |
| Sri Sathya Sai Airport                                                   |
| Meiktila Air Base                                                        |
| Changi Air Base (East)                                                   |
| Soltsy-2 Air Base                                                        |
| Severomorsk-3 Naval Air Base                                             |
| Fedotovo Naval Air Base                                                  |
| Lebyazhye Air Base                                                       |
| Smolensk North Airport                                                   |
| Rtishchevo Air Base                                                      |
| Alpha Airport                                                            |
| Ararat Airport                                                           |
| Benalla Airport                                                          |
| Balranald Airport                                                        |
| Brewarrina Airport                                                       |
| Cleve Airport                                                            |
| Corowa Airport                                                           |
| Corryong Airport                                                         |
| Cootamundra Airport                                                      |
| Dirranbandi Airport                                                      |
| Deniliquin Airport                                                       |
| Dysart Airport                                                           |
| Echuca Airport                                                           |
| Forbes Airport                                                           |
| Gunnedah Airport                                                         |
| Hay Airport                                                              |
| Hopetoun Airport                                                         |
| Kerang Airport                                                           |
| Kempsey Airport                                                          |
| Kingaroy Airport                                                         |
| Latrobe Valley Airport                                                   |
| Mareeba Airport                                                          |
| Ngukurr Airport                                                          |
| Narromine Airport                                                        |
| Port Pirie Airport                                                       |
| Smithton Airport                                                         |
| Snake Bay Airport                                                        |
| Stawell Airport                                                          |
| Tibooburra Airport                                                       |
| Tumut Airport                                                            |
| Wangaratta Airport                                                       |
| Warracknabeal Airport                                                    |
| Warren Airport                                                           |
| West Sale Airport                                                        |
| West Wyalong Airport                                                     |
| Young Airport                                                            |
| Guangzhou MR Air Base                                                    |
| Shiyan Wudangshan Airport                                                |
| Sunchon Air Base                                                         |
| Huatugou Airport                                                         |
| Baruun Urt Airport                                                       |
| Bengbu Airport                                                           |
| Rugao Air Base                                                           |
| Wuhu Air Base                                                            |
| Shanshan Airport                                                         |
| Yingkou Lanqi Airport                                                    |
| Shenyang Dongta Airport                                                  |
| Bogorodskoye Airport                                                     |
| Itapiranga Airport                                                       |
| Aguas Calientes Airport                                                  |
| Rajiv Gandhi International Airport                                       |
| Vancouver International Seaplane Base                                    |
| Bressaucourt Airport                                                     |
| Parakou Airport                                                          |
| Kandi Airport                                                            |
| Sokod Airport                                                            |
| Sansann-Mango Airport                                                    |
| Arnbruck Airport                                                         |
| Jacarepagu - Roberto Marinho Airport                                     |
| Hacaritama Airport                                                       |
| Hermannsburg Airport                                                     |
| Mount Davies Airport                                                     |
| Areyonga Airport                                                         |
| Tracy Municipal Airport                                                  |
| Mount Allan Airport                                                      |
| Everard Park Airport                                                     |
| Warrabri Airport                                                         |
| Krefeld-Egelsberg Airport                                                |
| Baidoa Airport                                                           |
| Ampilatwatja Airport                                                     |
| Kings Creek Airport                                                      |
| Harts Range Airport                                                      |
| Elliott Airport                                                          |
| Papunya Airport                                                          |
| Fregon Airport                                                           |
| Mount Liebig Airport                                                     |
| Bolton Field                                                             |
| Baltrum Airport                                                          |
| Skagit Regional Airport                                                  |
| Goondiwindi Airport                                                      |
| Liman Airfield                                                           |
| Lognes Emerainville Airport                                              |
| Marion County Brown Field                                                |
| Evergreen Regional Airport/Middleton Field                               |
| Pryor Field Regional Airport                                             |
| Glasgow Municipal Airport                                                |
| Danielson Airport                                                        |
| Docker River Airport                                                     |
| Clearfield Lawrence Airport                                              |
| Jasper County Airport                                                    |
| Ti Tree Airport                                                          |
| Sabetta International Airport                                            |
| Alxa Left Banner Bayanhot Airport                                        |
| El Fuentero Airport                                                      |
| Sturgate Airfield                                                        |
| Simberi Airport                                                          |
| Bulolo Airport                                                           |
| Kintore Airport                                                          |
| Statesboro Bulloch County Airport                                        |
| Utopia Airport                                                           |
| Nyrripi Airport                                                          |
| Amata Airport                                                            |
| Glacier Country Heliport                                                 |
| Erldunda Airport                                                         |
| Helisul I Heliport                                                       |
| Finke Airport                                                            |
| Humberto Ghizzo Bortoluzzi Regional Airport                              |
| Nypari Airport                                                           |
| Ihtiman Airfield                                                         |
| Vogtareuth Airport                                                       |
| [Duplicate] Illertissen see EDMI - ED-0425 location moved out-of-the way |
| New Smyrna Beach Municipal Airport                                       |
| Las Vegas Helicopters Heliport                                           |
| Delta Camp Airport                                                       |
| Hwange (Town) Airport                                                    |
| Harbour (Public) Heliport                                                |
| Victoria Harbour (Camel Point) Heliport                                  |
| Shushenskoye Airport                                                     |
| Stockerau Airport                                                        |
| Klaipda Airport                                                          |
| Iowa County Airport                                                      |
| West Bend Municipal Airport                                              |
| Gaylord Regional Airport                                                 |
| Anderson Municipal Darlington Field                                      |
| Cenej Airport                                                            |
| Grundarfjrur Airport                                                     |
| Prairie Du Chien Municipal Airport                                       |
| Cascade Heliport                                                         |
| Air Orlando Heliport                                                     |
| Trshavn/Bodanes Heliport                                                 |
| Otjiwarongo Airport                                                      |
| RAF Mona                                                                 |
| Rerik-Zweedorf Airport                                                   |
| Fazenda Vaticano Airport                                                 |
| Stanly County Airport                                                    |
| Davidson County Airport                                                  |
| Windwood Fly-In Resort Airport                                           |
| Lathan Strip                                                             |
| Double Eagle II Airport                                                  |
| Socorro Municipal Airport                                                |
| Bentonville Municipal-Louise M Thaden Field                              |
| Blue Ridge Airport                                                       |
| Mount Airy Surry County Airport                                          |
| Taos Regional Airport                                                    |
| Raton Municipal-Crews Field                                              |
| Rusk County Airport                                                      |
| Perry Lefors Field                                                       |
| William R. Pogue Municipal Airport                                       |
| Marion County Regional Airport                                           |
| Hutchinson County Airport                                                |
| Budars Airfield                                                          |
| Jakabszlls Airport                                                       |
| St. Helena Airport                                                       |
| Bonn-Hangelar Airport                                                    |
| Nogliki Airport                                                          |
| Santa Ynez Airport                                                       |
| Delingha Airport                                                         |
| Qionghai Bo'ao Airport                                                   |
| Northeim Airport                                                         |
| Reggio Emilia Airport                                                    |
| Bowen Airport                                                            |
| Ulanqab Jining Airport                                                   |
| Odienne Airport                                                          |
| Siguiri Airport                                                          |
| Nzrkor Airport                                                           |
| Boolgeeda                                                                |
| Shaoyang Wugang Airport                                                  |
| 9 de Maio - Teixeira de Freitas Airport                                  |
| Spartanburg Downtown Memorial Airport                                    |
| Bajawa Soa Airport                                                       |
| Torgau-Beilrode Airport                                                  |
| Annobn Airport                                                           |
| Renk Airport                                                             |
| Oyo Ollombo Airport                                                      |
| Port Hardy Seaplane Base                                                 |
| Tri-City Airport                                                         |
| Boun Neau Airport                                                        |
| Waycross Ware County Airport                                             |
| Blaise Diagne International Airport                                      |
| Mid-State Regional Airport                                               |
| Greater Portsmouth Regional Airport                                      |
| Coonawarra Airport                                                       |
| Naracoorte Airport                                                       |
| Camilla Mitchell County Airport                                          |
| Clarenville Airport                                                      |
| Ponta Grossa Airport - Comandante Antonio Amilton Beraldo                |
| Palenque International Airport                                           |
| Caloundra Airport                                                        |
| Clarks Point Airport                                                     |
| Ospika Airport                                                           |
| Charlottetown Airport                                                    |
| Doris Lake                                                               |
| Costa Esmeralda Airport                                                  |
| Monte Cristi Airport                                                     |
| El Papalon Airport                                                       |
| Sandpoint Airport                                                        |
| Attu Heliport                                                            |
| Kangaatsiaq Heliport                                                     |
| Kitsissuarsuit Heliport                                                  |
| Niaqornaarsuk Heliport                                                   |
| Ilimanaq Heliport                                                        |
| Qeqertaq Heliport                                                        |
| Saqqaq Heliport                                                          |
| Savissivik Heliport                                                      |
| Siorapaluk Heliport                                                      |
| Aappilattoq (Qaasuitsup) Heliport                                        |
| Innarsuit Heliport                                                       |
| Kangersuatsiaq Heliport                                                  |
| Kullorsuaq Heliport                                                      |
| Nuussuaq Heliport                                                        |
| Tasiusaq (Qaasuitsup) Heliport                                           |
| Upernavik Kujalleq Heliport                                              |
| Aappilattoq (Kujalleq) Heliport                                          |
| Tasiusaq (Kujalleq) Heliport                                             |
| Narsaq Kujalleq Heliport                                                 |
| Ikamiut Heliport                                                         |
| Ammassivik Heliport                                                      |
| Eqalugaarsuit Heliport                                                   |
| Qassimiut Heliport                                                       |
| Tiniteqilaaq Heliport                                                    |
| Isortoq Heliport                                                         |
| Kuummiut Heliport                                                        |
| Sermiligaaq Heliport                                                     |
| Ikerassaarsuk Heliport                                                   |
| Illorsuit Heliport                                                       |
| Nuugaatsiaq Heliport                                                     |
| Saattut Heliport                                                         |
| Ikerasak Heliport                                                        |
| Niaqornat Heliport                                                       |
| Ukkusissat Heliport                                                      |
| Olhos D`gua Airport                                                      |
| Novo Progresso Airport                                                   |
| Adolino Bedin Regional Airport                                           |
| Serra da Capivara Airport                                                |
| Encarnacin Airport                                                       |
| Amatopo Airstrip                                                         |
| Poeketi Airstrip                                                         |
| Godo Holo Airstrip                                                       |
| Anholt Airport                                                           |
| St Pierre d'Olron Airfield                                               |
| Semur En Auxois Airfield                                                 |
| Urzhar Airport                                                           |
| Pyramiden Heliport                                                       |
| Lipki Air Base                                                           |
| Zermatt  Heliport                                                        |
| Nikolskoye Airport                                                       |
| Tilichiki Airport                                                        |
| Nyurba Airport                                                           |
| Sakkyryr Airport                                                         |
| Ust-Kuyga Airport                                                        |
| Verkhnevilyuisk Airport                                                  |
| Mendeleyevo Airport                                                      |
| Yamburg Airport                                                          |
| Shakhtyorsk Airport                                                      |
| Talakan Airport                                                          |
| Mama Airport                                                             |
| Aarhus Seaplne Terminal                                                  |
| Oakland Troy Airport                                                     |
| Stratford Municipal Airport                                              |
| Edmundston Airport                                                       |
| Red Dog Airport                                                          |
| Impfondo Airport                                                         |
| El Bayadh Airport                                                        |
| Alzintan Airport                                                         |
| Monkey Bay Airport                                                       |
| Suwaki Airport                                                           |
| Srr Ahmadu Bello International Airport                                   |
| Sir Abubakar Tafawa Balewa International Airport                         |
| Gombe Lawanti International Airport                                      |
| Dutse International Airport                                              |
| Jalingo Airport                                                          |
| Kolda North Airport                                                      |
| King Mswati III International Airport                                    |
| Kilwa Masoko Airport                                                     |
| West Kilimanjaro Airport                                                 |
| Moshi Airport                                                            |
| Mansa Airport                                                            |
| Ghazni Airport                                                           |
| Baicheng Chang'an Airport                                                |
| Longnan Chengzhou Airport                                                |
| Shangrao Sanqingshan Airport                                             |
| Songyuan Chaganhu Airport                                                |
| Jiansanjiang Airport                                                     |
| Zunyi Maotai Airport                                                     |
| Libo Airport                                                             |
| Chengde Puning Airport                                                   |
| Wudalianchi Dedu Airport                                                 |
| Ejin Banner-Taolai Airport                                               |
| Alxa Right Banner Badanjilin Airport                                     |
| Holingol Huolinhe Airport                                                |
| Golog Maqin Airport                                                      |
| Yeerqiang Airport                                                        |
| Tezu Airport                                                             |
| Cangyuan Washan Airport                                                  |
| Lancang Jingmai Airport                                                  |
| Ninglang Luguhu Airport                                                  |
| Pimenta Bueno Airport                                                    |
| Ariquemes Airport                                                        |
| Fazenda Spartacus Airport                                                |
| Xinzhou Wutaishan Airport                                                |
| Chengjisihan Airport                                                     |
| Fazenda Mequens Airport                                                  |
| Prainha Airport                                                          |
| Mostardas Airport                                                        |
| Santo Domingo Airport                                                    |
| Adampur Airport                                                          |
| Vijayanagar Aerodrome (JSW)                                              |
| Shirdi Airport                                                           |
| Jeypore Airport                                                          |
| Trunojoyo Airport                                                        |
| Lasondre Airport                                                         |
| Rokot Airport                                                            |
| Pasir Pangaraan Airport                                                  |
| Sei Bati Airport                                                         |
| Departi Parbo Airport                                                    |
| Namrole Airport                                                          |
| Namlea Airport                                                           |
| Rar Gwamar Airport                                                       |
| Emalamo Sanana Airport                                                   |
| Ayawasi Airport                                                          |
| Bunyu Airport                                                            |
| Buol Airport                                                             |
| Sugimanuru Airport                                                       |
| Jask Airport                                                             |
| Frankfort Dow Memorial Field                                             |
| Cheboygan County Airport                                                 |
| Kozushima Airport                                                        |
| Kazarman Airport                                                         |
| Kerben Airport                                                           |
| Naryn Airport                                                            |
| Sayaboury Airport                                                        |
| Baglung Airport                                                          |
| Rajbiraj Airport                                                         |
| Duqm International Airport                                               |
| Palanan Community Airport                                                |
| Itbayat Airport                                                          |
| Catbalogan Airport                                                       |
| Maasin Airport                                                           |
| Bantayan Airport                                                         |
| Biliran Airport                                                          |
| Fazenda Vrzea Funda Airport                                              |
| Primavera do Leste Airport                                               |
| Croker Island Airport                                                    |
| The Granites Airport                                                     |
| Barimunya Airport                                                        |
| Laucala Island Airport                                                   |
| Yasawa Island Airport                                                    |
| North Shore Aerodrome                                                    |
| John C Tune Airport                                                      |
| Okiwi Station Airport                                                    |
| Waiheke Reeve Airport                                                    |
| Karamea Airport                                                          |
| Jastarnia Airport                                                        |
| Nop Goliat Airport                                                       |
| Napuka Island Airport                                                    |
| Faaite Airport                                                           |
| Nukutavake Airport                                                       |
| Vahitahi Airport                                                         |
| Hikueru Atoll Airport                                                    |
| Raroia Airport                                                           |
| Kauehi Airport                                                           |
| Tatakoto Airport                                                         |
| Sasereme Airport                                                         |
| Tanah Merah Airport                                                      |
| Denali Airport                                                           |
| Comte. Rolim Adolfo AmaroJundia State Airport                            |
| Potomac Airpark                                                          |
| Helisul IV Heliport                                                      |
| Brits Airport                                                            |
| West Melton Aerodrome                                                    |
| Rangiora Airfield                                                        |
| Fazenda Jatobasso Airport                                                |
| FIC Heliport                                                             |
| Noonkanbah Airport                                                       |
| Algeciras Heliport                                                       |
| Chepelevka Airport                                                       |
| Fazenda So Nicolau Airport                                               |
| Kisoro Airport                                                           |
| Kasese Airport                                                           |
| Stennis International Airport                                            |
| Sunchales Aeroclub Airport                                               |
| Istanbul Airport                                                         |
| Seldovia Airport                                                         |
| Lutselk'e Airport                                                        |
| Engely Airport                                                           |
| Dwangwa Airport                                                          |
| Paloich Airport Heliport                                                 |
| Julian Carroll Airport                                                   |
| Beaufort MCAS - Merritt Field                                            |
| Camp Pendleton MCAS (Munn Field) Airport                                 |
| Aerodromo de Castelo Branco                                              |
| Ponte de Sor Airport                                                     |
| Vilar de Luz Airfield                                                    |
| Hard Bargain Airport                                                     |
| Kenebetsu JASDF Airfield                                                 |
| Augusto Severo Airport                                                   |
| Kishangarh Airport                                                       |
| Kannur International Airport                                             |
| Beijing Xijiao Airport                                                   |
| Flores Airport                                                           |
| Umuwa Airport                                                            |
| La Araucana Airport                                                      |
| Arathusa Safari Lodge Airport                                            |
| Vidalia Regional Airport                                                 |
| Granbury Regional Airport                                                |
| Oswego County Airport                                                    |
| New Islamabad International Airport                                      |
| Vumbura Airport                                                          |
| Farm Whitwater East Landing Strip                                        |
| Muwaffaq Salti Air Base                                                  |
| Kirkjubjarklaustur Airport                                               |
| Fazenda Uiapuru Airport                                                  |
| Whitehorse Seaplane Base                                                 |
| Pertominsk Airport                                                       |
| Mount Weld Airport                                                       |
| Kidston Airport                                                          |
| Klaksvik Heliport                                                        |
| Mitchell Municipal Airport                                               |
| Hunda Airport                                                            |
| Mchauru Airport                                                          |
| Gitega Airport                                                           |
| Regin de Murcia International Airport                                    |
| Fazenda Kajussol Airport                                                 |
| Pelee Island Airport                                                     |
| Costa Marques Airport                                                    |
| Mangalore Airport                                                        |
| San Isidro del General Airport                                           |
| Zabrat Airport                                                           |
| Bezmer Air Base                                                          |
| Osovtsy Air Base                                                         |
| Yuanmou Air Base                                                         |
| Changsha Datuopu Airport/AFB                                             |
| Xingcheng Air Base                                                       |
| Lefkoniko Airport                                                        |
| Songwe Airport                                                           |
| Kalocsa/Fokt Airport                                                     |
| Bilogai-Sugapa Airport                                                   |
| Jakkur Aerodrome                                                         |
| Jalal-Abad Airport                                                       |
| Ramon Airport                                                            |
| Rustaq Airport                                                           |
| Laguindingan Airport                                                     |
| Kostomuksha Airport                                                      |
| Privolzhskiy Air Base                                                    |
| Kubinka Air Base                                                         |
| Rogachyovo Air Base                                                      |
| Ulan-Ude East Airport                                                    |
| Krechevitsy Air Base                                                     |
| Desierto de Atacama Airport                                              |
| Melitopol Air Base                                                       |
|                                                                          |
