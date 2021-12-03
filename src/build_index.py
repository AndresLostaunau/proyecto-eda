import pandas as pd
import os
import timeit

if __name__ == "__main__":
    start = timeit.default_timer()
    idx = "idx/idx_green_tripdata.csv"

    # These files were actually removed after indexation.
    file_dir = sorted(os.listdir("data/"))

    # Collecting dimension data.
    for raw_csv in file_dir:
        print(f"Processing: {raw_csv}")
        dimensions = ["Pickup_longitude", "Pickup_latitude", "Dropoff_longitude", "Dropoff_latitude"]
        raw_df = pd.read_csv(f"data/{raw_csv}", skipinitialspace=True, usecols=dimensions)
        raw_df.to_csv(idx, mode="a", index=False)
        print(f"**Merged {len(raw_df)} rows.")
    print(f"[!] All files were merged correctly.")

    # Removing odd values
    df = pd.read_csv(idx)
    print("Cleaning odd values.")
    df.dropna()
    df = df[(df["Pickup_longitude"] != '0.0') & (df["Pickup_latitude"] != '0.0') & (df["Dropoff_latitude"] != '0.0') & (df["Dropoff_latitude"] != '0.0')]
    df.to_csv(idx, index=False)
    print(f"**Built an index with {len(df)} rows in {timeit.default_timer() - start}s.")