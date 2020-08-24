#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    int a= n>m;
    switch(a)
    {
        case 0:
            printf("%d is greater\n", m);
            break;
        case 1:
            printf("%d is greater\n", n);
            break;
        default:
            printf("Both are equal");
    }
return 0;
}
