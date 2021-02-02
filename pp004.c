//pp004: Write a program to input a number and check it to be even or odd without using any arithmetic, relational, logical or bitwise operator.
struct check{
	unsigned uint:1;
};
int main(){
	int num;
	scanf("%d",&num);
	struct check c;
	c.uint=num;
	if(c.uint){
		printf("odd");
	}
	else{
		printf("even");
	}
return 0;
}
