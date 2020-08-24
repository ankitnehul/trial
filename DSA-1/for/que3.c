//que : print no.s divisible by n 
#include<stdio.h>
int main(){
	int i,n;
	printf("enter n : ");
	scanf("%d",&n);
	printf("The numbers divisible by %d till 1000 are\n",n);
	for(i=1;i<=1000;i++){
		if(i%n==0)
			printf("%d  ",i);
	}
printf("\n");
return 0;
}

