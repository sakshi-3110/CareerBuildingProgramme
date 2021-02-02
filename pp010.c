//pp010: Create a header file as pp010.h having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0. 
//Write aprogram pp010.c, include the header file into it. Create the main() function  to input a number and check it to be even or odd using iseven() function.
#include<stdio.h>
#include"pp010.h"
int main(){
	int n,k;
	scanf("%d",&n);
	k=iseven(n);
	if(k)
	{
		printf("even");
	}
	else
	{
	printf("odd");
	}
}


