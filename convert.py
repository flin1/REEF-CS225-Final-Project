# import csv
# from csv import writer

# with open("airports.csv", "r") as input:
#     with open("new_airports.csv", "w") as f:
#         output = writer(f, delimiter=",")
#         for row in input:
#             output.writerow(row.replace('"','').split(','))

import pandas as pd

# df.columns = ['Airport ID', 'Name', 'City', 'Country', 'IATA', 'ICAO', 'Latitude', 'Longitude',
#               'Altitude', 'Timezone', 'DST', 'Tz database time zone', 'Type', 'Source']

def convert_airports_csv():
    ''' this function adds field names and filters out airports.csv and
    converts to an updated csv file'''
    # read into the original CSV and create a Pandas dataframe
    df_airports = pd.read_csv ('old_airports.csv', header = None)
    # add in field names to header of dataframe
    df_airports.columns = ['Airport ID', 'Name', 'City', 'Country', 'IATA', 'ICAO',
        'Latitude', 'Longitude', 'Altitude', 'Timezone', 'DST',
        'TZ Database Time Zone', 'Type', 'Source']
    # drop unneeded columns (source, timezon, DST, TZ database time zone, type)
    df_airports.drop('Source', axis = 1, inplace = True)
    df_airports.drop('Timezone', axis = 1, inplace = True)
    df_airports.drop('DST', axis = 1, inplace = True)
    df_airports.drop('TZ Database Time Zone', axis = 1, inplace = True)
    df_airports.drop('Type', axis = 1, inplace = True)
    # convert dataframe csv titled 'airports.csv'
    df_airports.to_csv('airports.csv', index = False)  
def convert_routes_csv():
    '''this function adds field names to routes.csv and converts to an updated csv file'''
    # read into original CSV and create a Pandas dataframe
    df_routes = pd.read_csv ('old_routes.csv', header = None)
    # add field names to header of dataframe
    df_routes.columns = ['Airline', 'Airline ID', 'Source Airport', 'Source Airport ID',
        'Destination Airport', 'Destination Airport ID', 'Codeshare', 'Stops', 'Equipment']
    # drop unneeded columns (codeshare)
    df_routes.drop('Codeshare', axis = 1, inplace = True)
    # convert dataframe to CSV titled 'routes.csv'
    df_routes.to_csv('routes.csv', index = False)
