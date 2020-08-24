// que :Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main(){
	char a;
	printf("enter a alphabet : ");
	scanf("%c",&a);
	if((a==97||a==101||a==105||a==111||a==117)||(a==65||a==73||a==79||a==85))
		printf("%c is a vowel",a);
	else
		printf("%c is a consonant",a);
printf("\n");
return 0;
}

