//
//  main.c
//  Binary_Search( ikili arama)
//
//  Created by Emre Dikici on 21.09.2023.
//
#include <stdio.h>

// Binary search function code
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int middle = left + (right - left) / 2;
        
        if (arr[middle] == target) {
            return middle; // Target value found in the array
        }
        
        if (arr[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1; // If target value not found in the array
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the value to search for: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Target value %d found at index %d in the array.\n", target, result);
    } else {
        printf("Target value not found in the array.\n");
    }

    return 0;
}

