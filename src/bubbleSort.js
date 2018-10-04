var count = 0;
function bubbleSort(arr){
    var len = arr.length;
    console.log(len);
    for (var i=0; i<len; i++){
        var flag = true;
        for (var j=0; j<len-i; j++){
            if (arr[j]>arr[j+1]){
                var temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        count++;
        if (flag === true){
            break;
        }
    }
    return arr;
}
var arr = [3,2,45,6,32];
var arr2 = bubbleSort(arr);
console.log(count);
console.log(arr2);
