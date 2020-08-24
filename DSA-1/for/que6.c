//que : Write  a code to keep accepting numbers and adding them till the sum exceeds 100
#include<stdio.h>
int main(){
	int i=0,n,sum=0;
	for(; ;i++){
		printf("enter a number : ");
		scanf("%d",&n);
		sum=sum+n;
		if(sum>100)
			break;
		
	}
printf("\n");
return 0;
}
