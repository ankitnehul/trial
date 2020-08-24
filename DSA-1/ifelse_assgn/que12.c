//que : Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
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
		if(a==b && b==c)
			printf("The triangle is Equilateral triangle");
		else if(a==b || b==c || a==c)
			printf("The triangle is Isoscales triangle");
		else
			printf("The triangle is Scalene triangle");
	else
		printf("The triangle is not valid");
printf("\n");
return 0;
}
