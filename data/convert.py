'''Convert routes and airport files to a usable CSV file'''
import pandas as pd


def convert_airports_csv():
    '''Adds field names and filters out airports.csv'''
    df_airports = pd.read_csv ("/Users/emilyho/Desktop/REEF-CS225-Final-Project/data/old_airports.csv", header = None)
    # df_airports = pd.read_csv ('../data/old_airports.csv', header = None)
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
    df_airports.drop('City', axis = 1, inplace = True)
    df_airports['Name'] = df_airports['Name'].apply(lambda x: x.replace(',', ''))
    # df_airports['City'] = df_airports['City'].apply(lambda x: x.replace(',', ''))
    df_airports['Name'] = df_airports['Name'].apply(lambda x: x.replace('"', ''))
    # df_airports['City'] = df_airports['City'].apply(lambda x: x.replace('\'', ''))
    df_airports['Country'] = df_airports['Country'].apply(lambda x: x.replace('"', ''))
    
    df_airports['Name'] = df_airports['Name'].str.encode('ascii', 'ignore').str.decode('ascii')
    # df_airports.drop(df_airports[df_airports['Name'] != 0].index, inplace = True)
    # df_airports = df_airports.iloc[1: , :]
    df_airports.to_csv('./data/airports.csv', index = False, header = False)
def convert_routes_csv():
    '''this function adds field names to routes.csv and converts to an updated csv file'''
    df_routes = pd.read_csv ('/Users/emilyho/Desktop/REEF-CS225-Final-Project/data/old_routes.csv', header = None)
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
    # df_routes = df_routes.iloc[1: , :]
    df_routes.to_csv('./data/routes.csv', index = False, header = False)

def get_all_airport_names():
    '''Adds field names and filters out airports.csv'''

    df_airports = pd.read_csv ("/Users/emilyho/Desktop/REEF-CS225-Final-Project/data/old_airports.csv", header = None)
    # df_airports = pd.read_csv ('../data/old_airports.csv', header = None)
    df_airports.columns = ['Airport ID', 'Name', 'City', 'Country', 'IATA', 'ICAO',
        'Latitude', 'Longitude', 'Altitude', 'Timezone', 'DST',
        'TZ Database Time Zone', 'Type', 'Source']
    df_airports.drop('Airport ID', axis = 1, inplace = True)
    df_airports.drop('IATA', axis = 1, inplace = True)
    df_airports.drop('ICAO', axis = 1, inplace = True)
    df_airports.drop('Altitude', axis = 1, inplace = True)
    df_airports.drop('Timezone', axis = 1, inplace = True)
    df_airports.drop('DST', axis = 1, inplace = True)
    df_airports.drop('TZ Database Time Zone', axis = 1, inplace = True)
    df_airports.drop('Type', axis = 1, inplace = True)
    df_airports.drop('Source', axis = 1, inplace = True)
    df_airports.drop('City', axis = 1, inplace = True)
    df_airports.drop('Country', axis = 1, inplace = True)
    df_airports.drop('Longitude', axis = 1, inplace = True)
    df_airports.drop('Latitude', axis = 1, inplace = True)

    df_airports['Name'] = df_airports['Name'].apply(lambda x: x.replace(',', ''))
    df_airports['Name'] = df_airports['Name'].apply(lambda x: x.replace('"', ''))
    df_airports['Name'] = df_airports['Name'].str.encode('ascii', 'ignore').str.decode('ascii')
    df_airports.to_csv('./data/airport_names.csv', index = False, header = False)
get_all_airport_names()
convert_airports_csv()
convert_routes_csv()
    