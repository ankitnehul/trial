//que:Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main(){
	char a;
	printf("enter a charachter : ");
	scanf("%c",&a);
	if((65<=a&&a<=90)||(97<=a&&a<=122))
		printf("%c is an alphabet",a);		 
	else
		printf("%c is not an alphabet ",a);
printf("\n");
return 0;
}
