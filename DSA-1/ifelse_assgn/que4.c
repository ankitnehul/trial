#include<stdio.h>
int main(){
	int i;
	printf("enter a number");
	scanf("%d",&i);
	if(i%2==0)
		printf("%d is an even number",i);
	else
		printf("%d is an odd number",i);
printf("\n");
return 0;
}

