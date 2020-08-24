//que : Write a C program to input month number and print number of days in that month.
#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of month : ");
	scanf("%d",&n);
	if(n>0 && n<=7){
		if(n==2)
			printf("This month has 28 days");
		else if(n%2==1)
			printf("This month has 31 days");
		else if(n%2==0)
			printf("This month has 30 days");
	}
	if(n>7 && n<=12){
		if(n%2==0)
			printf("This month has 31 days");
		if(n%2==1)
			printf("This month has 30 days");
	}
printf("\n");
return 0;
}
