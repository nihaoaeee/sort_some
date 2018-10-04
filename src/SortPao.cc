#include "../include/SortPao.h"

template<class T>
void sortPao (T *arr, int n){

    for (int i=0; i<n; i++){
        for (int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                T temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}