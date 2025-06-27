# Concert Analysis Project

This project analyzes concert data to count the number of concerts per (artist, venue) for each year and month. The results are presented in a wide table format, making it easy to visualize the concert distribution across different artists and venues.

## Project Structure

```
concert-analysis
├── data
│   └── concerts.csv          # Dataset of concerts including artist names, venue names, and concert dates.
├── src
│   ├── main.py               # Main entry point of the application.
│   ├── utils
│   │   └── data_processing.py # Utility functions for data processing.
├── requirements.txt          # Lists the dependencies required for the project.
└── README.md                 # Documentation for the project.
```

## Setup Instructions

1. **Clone the repository**:
   ```
   git clone <repository-url>
   cd concert-analysis
   ```

2. **Install dependencies**:
   It is recommended to use a virtual environment. You can create one using `venv` or `conda`.
   ```
   pip install -r requirements.txt
   ```

3. **Run the analysis**:
   Execute the main script to perform the concert analysis.
   ```
   python src/main.py
   ```

## Data Description

The `concerts.csv` file contains the following columns:
- `artist`: Name of the artist performing.
- `venue`: Name of the venue where the concert is held.
- `date`: Date of the concert.

## Output

The output will be a wide table format showing the number of concerts for each (artist, venue) pair, aggregated by year and month. Each row corresponds to a unique year-month combination, with columns representing the count of concerts for each (artist, venue) pair.

## License

This project is licensed under the MIT License.