#include <stdio.h>

void insertionSort(int arr[], int n);
void printArray(int arr[], int n);

int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); //pois sizeof(arr) calcula o número de bytes, por isso a divisão pelo num de bytes do primeiro elemento do vetor
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}

void insertionSort(int arr[], int n){
    int i, j, key;
    for(j = 1; j < n; j++){
        key = arr[j];
        i = j - 1;
        while((i >= 0) && (arr[i] > key)){
            arr[i+1] = arr[i];
            i = i - 1;
        }
        arr[i+1] = key;
    }
}

void printArray(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}