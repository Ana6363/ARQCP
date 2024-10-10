#include <stdio.h>

// Check if a value exists in the dest array
int exists_in_dest(short *dest, int size, short value) {
    for (int i = 0; i < size; i++) {
        if (*(dest + i) == value) {
            return 1; 
        }
    }
    return 0; 
}

// Sort array in ascending order using selection sort (with short type)
void array_sort(short *vec, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(*(vec + i) > *(vec + j)){
                short temp = *(vec + i);
                *(vec + i) = *(vec + j);
                *(vec + j) = temp;
            }
        }
    }
}

// Function to remove duplicates, sort, and return the count of unique values
int sort_without_reps(short *src, int n, short *dest){
    int dest_count = 0;

    // Traverse the src array
    for (int i = 0; i < n; i++) {
        // If the value does not exist in dest, add it
        if (!exists_in_dest(dest, dest_count, *(src + i))) {
            *(dest + dest_count) = *(src + i);
            dest_count++;
        }
    }

    // Sort the destination array
    array_sort(dest, dest_count);

    // Return the number of unique elements
    return dest_count;
}