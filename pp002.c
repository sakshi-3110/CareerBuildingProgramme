//pp002: Write a program to input a number and check it to be even or odd using switch statement.
#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	switch(n%2){
		case 0: printf("even"); break;
		case 1: printf("odd"); break;
		default: printf("Invalid input");
	}
	return 0;
}
