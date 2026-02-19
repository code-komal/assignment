#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int item, int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == item)
            return mid + 1;   // insert after equal element

        else if (arr[mid] < item)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return low;   // correct position
}

// Binary Insertion Sort
void insertionSort(int arr[], int n) {
    int i, j, key, pos;

    for (i = 1; i < n; i++) {
        key = arr[i];

        // Find position using binary search
        pos = binarySearch(arr, key, 0, i - 1);

        // Shift elements to right
        j = i - 1;
        while (j >= pos) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[pos] = key;
    }
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
