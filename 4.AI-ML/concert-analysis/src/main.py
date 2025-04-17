import pandas as pd
import os

def load_data(file_path):
    if not os.path.exists(file_path):
        raise FileNotFoundError(f"The file {file_path} does not exist.")
    return pd.read_csv(file_path)

def count_concerts_per_artist_venue(df):
    # Ensure the 'date' column is in datetime format
    df['date'] = pd.to_datetime(df['date'], errors='coerce')
    
    # Drop rows where 'date' could not be converted
    df = df.dropna(subset=['date'])
    
    df['year'] = df['date'].dt.year
    df['month'] = df['date'].dt.month
    df['concerts'] = 1
    return df.groupby(['artist', 'venue', 'year', 'month'], as_index=False).agg({'concerts': 'sum'})

def reshape_to_wide_table(concert_counts):
    unique_artists = concert_counts['artist'].unique()
    unique_venues = concert_counts['venue'].unique()
    
    # Create a cross product of artists and venues
    artist_venue_pairs = pd.MultiIndex.from_product([unique_artists, unique_venues], names=['artist', 'venue'])
    
    # Create a pivot table
    wide_table = concert_counts.pivot_table(index=['year', 'month'], 
                                            columns=['artist', 'venue'], 
                                            values='concerts', 
                                            fill_value=0)
    
    # Ensure all artist-venue pairs are included as columns
    wide_table = wide_table.reindex(columns=artist_venue_pairs, fill_value=0)
    
    # Reset the index to make the table easier to work with
    return wide_table.reset_index()

def main():
    file_path = 'd:/CODING/CODING-WITH-GAURAVSVNITIAN/4.AI-ML/concert-analysis/data/concerts.csv'
    df = load_data(file_path)
    concert_counts = count_concerts_per_artist_venue(df)
    wide_table = reshape_to_wide_table(concert_counts)
    print(wide_table)

if __name__ == "__main__":
    main()