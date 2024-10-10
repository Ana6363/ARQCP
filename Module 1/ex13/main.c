#include <stdio.h>
#include "ex13.h"


int main(){
    short src[] = {5, 3, 9, 3, 7, 9, 5, 2};  // Example array
    int n = sizeof(src) / sizeof(src[0]);
    short dest[n]; // Destination array (same size as src)

    // Call the sort_without_reps function
    int unique_count = sort_without_reps(src, n, dest);

    // Print the sorted, unique elements
    printf("Sorted array without repetitions: ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    // Print the number of unique elements
    printf("Number of unique elements: %d\n", unique_count);

    return 0;
}