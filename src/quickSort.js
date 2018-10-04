var quickSort = function (arr, low, high){
    if(low>=high){
        return ;
    }
    var len = arr.length;
    //console.log(len);
    var i = low;
    var j = high;
    var k = arr[i];
    while (i<j){
        while (i<j && arr[j]>=k){
            j--;
        }
        arr[i] = arr[j];
        while (i<j && arr[i]<=k){
            i++;
        }
        arr[j] = arr[i]
    }
    arr[i] = k;
    quickSort (arr, low, i-1);
    quickSort (arr, i+1, high);
    return arr;
}
var arr = [3,2,45,6,32];
var arr2 = quickSort(arr,0,4);
//console.log(count);
console.log(arr2);
