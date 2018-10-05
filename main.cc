#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>
#include "include/SortPao.h"
#include "src/SortPao.cc"
#include "include/quickSort.h"
#include "src/quickSort.cc"
// #include <math.h>
// #include "include/myVector.h"
#include "src/myVector.cc"
// #include "include/selectSort.h"
#include "src/select_sort.cc"
#include "src/insert_sort.cc"
// #include "include/merge_sort.h"
#include "src/merge_sort.cc"
using namespace std;

int main(){
     int arr[5] = {5, 2, 4, 1, 3};
    // sortPao<int>(arr, 5);
    // quickSort<int>(arr, 0, 4);
    // select_sort<int>(arr, 5);
    //insert_sort<int>(arr, 5);
    int *result = new int[5]();
    cout<<"111111111"<<endl;
    merge_sort(arr, 0, 4, result);
    cout<<"222222"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"  ";
    }

    cout<<endl;

    // MyVector1<int> myv;
    
    // for(int j=0; j<100; j++){
    //     int &ii(j);
    //     myv.push_back(ii);
    //     cout<<myv[j]<<endl;
    // }
        
    // cout<<myv.size()<<endl;



    return 0;
    
}