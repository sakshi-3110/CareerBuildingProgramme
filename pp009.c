//pp009: Write a program having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0. 
//Create the main() function  to input a number and check it to be even or odd using iseven() function.
#include<stdio.h>
int iseven(int n){
	if(n%2){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
	int n,k;
	scanf("%d",&n);
	k=iseven(n);
	if(k)
	{
		printf("even");
	}
	else{
		printf("odd")
	}
}
