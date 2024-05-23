import gspread
import pandas as pd
from oauth2client.service_account import ServiceAccountCredentials

# define the scope
scope = ['https://spreadsheets.google.com/feeds','https://www.googleapis.com/auth/drive']

# add credentials to the account
creds = ServiceAccountCredentials.from_json_keyfile_name('date-ideas-424107-45a14e218d53.json', scope)

# authorize the clientsheet 
client = gspread.authorize(creds)

# get the instance of the spreadsheet
sheet = client.open('Chi/Krish Date Night Ideas')

# get the first sheet of the spreadsheet 
sheet_instance = sheet.get_worksheet(0)

# Get all records from sheet
records_data = sheet_instance.get_all_records()

# View the data
records_df = pd.DataFrame.from_dict(records_data)

# View the top records
records_df.head()