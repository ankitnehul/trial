//que : print no. from n to m
#include<stdio.h>
int main(){
	int i,n,m;
	printf("enter n : ");
	scanf("%d",&n);
	printf("enter m : ");
	scanf("%d",&m);
	printf("the numbers from %d to %d are\n",n,m);
	for(i=n;i<=m;i++){
		printf("%d  ",i);
	}
printf("\n");
return 0;
}	 
