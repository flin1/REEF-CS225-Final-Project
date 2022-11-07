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

df = pd.read_csv ('airports.csv', header = None)
df.columns = ['Airport ID', 'Name', 'City', 'Country', 'IATA', 'ICAO', 'Latitude', 'Longitude',
              'Altitude', 'Timezone', 'DST', 'TZ Database Time Zone', 'Type', 'Source']
df.drop('Source', axis = 1, inplace = True)
df.drop('Timezone', axis = 1, inplace = True)
df.drop('DST', axis = 1, inplace = True)
df.drop('TZ Database Time Zone', axis = 1, inplace = True)
df.drop('Type', axis = 1, inplace = True)

# df = df.iloc[: , :-1]
# print(df)
print(df.head())

df.to_csv('updated_airports.csv', index = False)