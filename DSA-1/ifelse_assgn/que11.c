//que : Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter first angle : ");
	scanf("%d",&a);
	printf("Enter second angle : ");
	scanf("%d",&b);
	printf("Enter third angle : ");
        scanf("%d",&c);
	if(a+b+c==180)
		printf("The triangle is valid");
	else 
		printf("The triangle is not valid");
printf("\n");
return 0;
}
