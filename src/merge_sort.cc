#include "../include/merge_sort.h"

void merge(int *arr, int start, int mid, int end, int *result){
    int i,j,k;
    i = start;
    j = mid +1;
    k = 0;

    while (i<=mid && j<=end){
        if (arr[i]<=arr[j]){
            result[k++] = arr[i++];
        } else {
            result[k++] = arr[j++];
        }
    }
    while (i<=mid){
        result[k++] = arr[i++];
    }
    while (j<=end){
        result[k++] = arr[j++];
    }
    for(int i=0; i<=end; i++){
        arr[start+i] = result[i];
    }
}

void merge_sort(int *arr, int start, int end, int *result){
    if (start<end){
        int mid = start + (end - start)/2;
        merge_sort(arr, start, mid, result);
        merge_sort(arr, mid+1, end, result);
        merge(arr, start,mid,end,result);
    }
}