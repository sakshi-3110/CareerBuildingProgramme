//pp006: Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers.
#include<stdio.h>
main(){
	int arr[11],n,i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}
