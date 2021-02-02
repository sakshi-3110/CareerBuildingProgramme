//pp003: Write a program to input a number and check it to be even or odd using bitwise operator.
#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	if(n&1){
		printf("odd");
	}
	else{
		printf("even");
	}
	return 0;
}
