//pp005: Write a program to input two numbers and print alleven numbers in given range.
#include<stdio.h>
main(){
	int x,y,i;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	return 0;
}
