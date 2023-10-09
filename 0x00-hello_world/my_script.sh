#!/bin/bash

# Check if the CFILE variable is set
if [ -z "$CFILE" ]; then
  echo "CFILE variable is not set. Please export it with the C file name."
  exit 1
fi

# Define the output filename
OUTPUT_FILE="c"

# Run the C preprocessor and save the result to the output file
gcc -E "$CFILE" -o "$OUTPUT_FILE"

# Check if the preprocessing was successful
if [ $? -eq 0 ]; then
  echo "Preprocessing completed successfully. Output saved to $OUTPUT_FILE"
else
  echo "Error occurred during preprocessing."
fi

