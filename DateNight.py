import gspread
import pandas as pd
from oauth2client.service_account import ServiceAccountCredentials

# define the scope
scope = ['https://spreadsheets.google.com/feeds','https://www.googleapis.com/auth/drive']

# add credentials to the account
creds = ServiceAccountCredentials.from_json_keyfile_name('dateideas@date-ideas-424107.iam.gserviceaccount.com', scope)

# authorize the clientsheet 
client = gspread.authorize(creds)

# Get all records from sheet
records_data = client.get_all_records()

# View the data
records_df = pd.DataFrame.from_dict(records_data)

# View the top records
records_df.head()