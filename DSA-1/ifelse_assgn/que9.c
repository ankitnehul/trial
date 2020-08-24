//que : Write a C program to check whether a character is uppercase or lowercase alphabet
#include<stdio.h>
int main(){
	char a;
	printf("enter a alphabet : ");
	scanf("%c",&a);
	if(a>=97 && a<=122)
		printf("%c is a lowercase alphabet",a);
	if(a>=65 && a<=90)
		printf("%c is an uppercase alphabet",a);
printf("\n");
return 0;
}

