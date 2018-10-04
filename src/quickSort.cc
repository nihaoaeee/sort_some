#include "../include/quickSort.h"
template<class T>
int quickSort(T *arr, int low, int high){
    if(low>=high){
        return 0;
    }
    T key = arr[low];
    int i = low;
    int j = high;
    while (i<j){
        while (i<j && key<=arr[j]){
            j--;
        }
        arr[i] = arr[j];
        while (i<j && key>=arr[i]){
            i++;
        }
        arr[j] = arr[i];
    }
    arr[i] = key;
    quickSort(arr,low, i-1);
    quickSort(arr, i+1, high);
    return 0;
}