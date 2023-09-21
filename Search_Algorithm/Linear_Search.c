//
//  main.c
//  Linear_Search ( Lineer arama )
//
//  Created by Emre Dikici on 21.09.2023.
//

#include <stdio.h>

// Linear search function code
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Target value found in the array
        }
    }
    return -1; // Target value not found in the array
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the value to search for: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Target value %d found at index %d in the array.\n", target, result);
    } else {
        printf("Target value not found in the array.\n");
    }

    return 0;
}

