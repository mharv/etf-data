#!/bin/bash

if [ -f ./data.txt ]; then
    rm ./data.txt
fi
python3 generate_data.py