//pp007: Write a program to input numbers from user till 0 is pressed and check every given number to be even or odd.
#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n))
	{
		if(n==0){
			break;
		}
		if(n%2){
			printf("odd\n");
		}
		else{
			printf("even\n");
		}
		
	}
	return 0;
}

