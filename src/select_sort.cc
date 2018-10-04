#include "../include/selectSort.h"

template<class T>
void select_sort(T *arr, int n){
    for (int i=0; i<n-1; i++){
        int min = i;
        for (int j=i+1; j<n; j++){
            if (arr[min]>arr[j]){
                min = j;
            }
        }
        if(min!=i){
            T tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
        }
    }
}