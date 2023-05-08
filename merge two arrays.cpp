#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    
    int mergedArray[sizeof(arr1)/sizeof(int) + sizeof(arr2)/sizeof(int)];
    
    for(int i = 0; i < sizeof(arr1)/sizeof(int); i++){
        mergedArray[i] = arr1[i];
    }
    
    for(int i = 0; i < sizeof(arr2)/sizeof(int); i++){
        mergedArray[sizeof(arr1)/sizeof(int) + i] = arr2[i];
    }
    
    for(int i = 0; i < sizeof(mergedArray)/sizeof(int); i++){
        printf("%d ", mergedArray[i]);
    }
    
    return 0;
}