#include <stdio.h>

// function to remove duplicates from array
int removeDuplicates(int arr[], int n) {
    int i, j;
    // Sort the array
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Remove duplicates
    int k = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != arr[i+1]) {
            arr[k++] = arr[i];
        }
    }
    return k;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // remove duplicates
    n = removeDuplicates(arr, n);

    // print the array after removing duplicates
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}