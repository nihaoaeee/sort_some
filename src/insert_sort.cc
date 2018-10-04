
#include "../include/insert_sort.h"
#include <iostream>
using namespace std;
template<typename T>
void insert_sort(T *arr, int n){
    if( n<=1){
        return ;
    }
    //T key = arr[0];
    for (int i=1; i<n; i++){
        for(int j=i-1;j>=0;j--){
            T tmp;
            //cout<<arr[j]<<endl;
            if(arr[i]<arr[j] && arr[i]>=arr[j-1]){
                tmp = arr[i];
                for(int z=i-1;z>=j;z--){
                    arr[z+1] = arr[z];
                }
                arr[j] = tmp;
            }
            
           // cout<<i<<"   "<<arr[j]<<endl;
        }
        //cout<<arr[i]<<endl;
    }
}