#include<stdio.h>
int main(){
	int i;
	printf("enter a number : ");
	scanf("%d",&i);
	if(i%5==0 && i%11==0)
		printf("the number is divisible by 5 and 11");
	else
		printf("the number is not divisible by 5 and 11");
printf("\n");
return 0;
}
