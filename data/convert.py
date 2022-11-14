'''The function works on filtering converting the routes and airport files
to a usable CSV file'''
import pandas as pd
def convert_airports_csv():
    ''' this function adds field names and filters out airports.csv and
    converts to an updated csv file'''
    # read into the original CSV and create a Pandas dataframe
    df_airports = pd.read_csv ('old_airports.csv', header = None)
    # add in field names to header of dataframe
    df_airports.columns = ['Airport ID', 'Name', 'City', 'Country', 'IATA', 'ICAO',
        'Latitude', 'Longitude', 'Altitude', 'Timezone', 'DST',
        'TZ Database Time Zone', 'Type', 'Source']
    # drop unneeded columns (source, timezone, DST, TZ database time zone, type)
    df_airports.drop('IATA', axis = 1, inplace = True)
    df_airports.drop('ICAO', axis = 1, inplace = True)
    df_airports.drop('Altitude', axis = 1, inplace = True)
    df_airports.drop('Timezone', axis = 1, inplace = True)
    df_airports.drop('DST', axis = 1, inplace = True)
    df_airports.drop('TZ Database Time Zone', axis = 1, inplace = True)
    df_airports.drop('Type', axis = 1, inplace = True)
    df_airports.drop('Source', axis = 1, inplace = True)
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
    df_routes.drop('Airline', axis = 1, inplace = True)
    df_routes.drop('Airline ID', axis = 1, inplace = True)
    df_routes.drop('Source Airport', axis = 1, inplace = True)
    df_routes.drop('Destination Airport', axis = 1, inplace = True)
    df_routes.drop('Codeshare', axis = 1, inplace = True)
    df_routes.drop('Equipment', axis = 1, inplace = True)
    # remove rows with invalid field values
    df_routes.drop(df_routes[df_routes['Source Airport ID'] == "\\N"].index, inplace = True)
    df_routes.drop(df_routes[df_routes['Destination Airport ID'] == "\\N"].index, inplace = True)
    df_routes.drop(df_routes[df_routes['Stops'] != 0].index, inplace = True)
    print(df_routes)
    # convert dataframe to CSV titled 'routes.csv'
    df_routes.to_csv('routes.csv', index = False)

convert_airports_csv()
convert_routes_csv()
