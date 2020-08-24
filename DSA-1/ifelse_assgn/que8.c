//que :Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
int main(){
	char a;
	printf("enter a character : ");
	scanf("%c",&a);
	if(a>=48 && a<=57)
		printf("%c is a number",a);
	else if((a>=32 && a<=47)||(a>=58 && a<=64)||(a>=91 && a<=96)||(a>=123 && a<=126)) 
		printf("%c is a special character",a);
	else if((a>=65 && a<=90)||(a>=97 && a<=122))
		printf("%c is an alphabet ",a);
printf("\n");
return 0;
}
