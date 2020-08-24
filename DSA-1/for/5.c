
#include<stdio.h> 
int main() {
 int a,b;
printf("Enter the numbers to be compared");
scanf("%d%d" ,&a,&b);
switch(a > b){
case(0) : printf("%d is greater than %d\n" ,b,a);
break;
case(1): printf("%d is greater than %d\n" ,a,b);
break;
default : printf("Both the numbers are same");
}
return 0;
}



