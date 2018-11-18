var arr=function(a,n){
	for(let i=0;i<n-1;i++){
		var min = i;
		var k=a[min];
		for(let j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}

		if(min!=i){
			var tmp=a[min];a[min]=a[i];a[i]=tmp;
		}
	}
	return a;
}

var arr1=[2,4,1,6,3,5];
console.log(arr(arr1,6));