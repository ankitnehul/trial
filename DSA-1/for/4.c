#include<stdio.h>
int main(){
	int a,b;
	printf("enter two numbers : ");
	scanf("%d%d",&a,&b);
	if(a!=b){
	switch(a>b)
	{
	case 1 : printf("%d is greater than %d",a,b);
		break;
	case 0 : printf("%d is less than %d",a,b);
		break;
	}
	}
	else 
		printf("both are equal");

return 0;
}
	
