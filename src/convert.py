'''Convert routes and airport files to a usable CSV file'''
import pandas as pd
def convert_airports_csv():
    '''Adds field names and filters out airports.csv'''
    df_airports = pd.read_csv ('old_airports.csv', header = None)
    df_airports.columns = ['Airport ID', 'Name', 'City', 'Country', 'IATA', 'ICAO',
        'Latitude', 'Longitude', 'Altitude', 'Timezone', 'DST',
        'TZ Database Time Zone', 'Type', 'Source']
    df_airports.drop('IATA', axis = 1, inplace = True)
    df_airports.drop('ICAO', axis = 1, inplace = True)
    df_airports.drop('Altitude', axis = 1, inplace = True)
    df_airports.drop('Timezone', axis = 1, inplace = True)
    df_airports.drop('DST', axis = 1, inplace = True)
    df_airports.drop('TZ Database Time Zone', axis = 1, inplace = True)
    df_airports.drop('Type', axis = 1, inplace = True)
    df_airports.drop('Source', axis = 1, inplace = True)
    df_airports.to_csv('airports.csv', index = False)
def convert_routes_csv():
    '''this function adds field names to routes.csv and converts to an updated csv file'''
    df_routes = pd.read_csv ('old_routes.csv', header = None)
    df_routes.columns = ['Airline', 'Airline ID', 'Source Airport', 'Source Airport ID',
        'Destination Airport', 'Destination Airport ID', 'Codeshare', 'Stops', 'Equipment']
    df_routes.drop('Airline', axis = 1, inplace = True)
    df_routes.drop('Airline ID', axis = 1, inplace = True)
    df_routes.drop('Source Airport', axis = 1, inplace = True)
    df_routes.drop('Destination Airport', axis = 1, inplace = True)
    df_routes.drop('Codeshare', axis = 1, inplace = True)
    df_routes.drop('Equipment', axis = 1, inplace = True)
    df_routes.drop(df_routes[df_routes['Source Airport ID'] == "\\N"].index, inplace = True)
    df_routes.drop(df_routes[df_routes['Destination Airport ID'] == "\\N"].index, inplace = True)
    df_routes.drop(df_routes[df_routes['Stops'] != 0].index, inplace = True)
    df_routes.to_csv('routes.csv', index = False)
    