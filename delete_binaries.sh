#!/bin/bash

# Function to check if a file has an extension
has_extension() {
    if [[ "$1" =~ \.[^.]+$ ]]; then
        return 0   # File has an extension
    else
        return 1   # File does not have an extension
    fi
}

# Recursive function to delete files without extensions
delete_files() {
    local dir=$1
    cd "$dir" || exit 1

    for file in *; do
        if [[ -f "$file" ]]; then
            if ! has_extension "$file"; then
                echo "Deleting file: $dir/$file"
                rm "$file"
            fi
        elif [[ -d "$file" ]]; then
            delete_files "$file"
        fi
    done

    cd ..
}

# Call the recursive function with the current directory
delete_files "."

echo "Deletion completed!"
